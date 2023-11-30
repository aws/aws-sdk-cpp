/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector-scan/InspectorscanErrors.h>
#include <aws/inspector-scan/model/ThrottlingException.h>
#include <aws/inspector-scan/model/InternalServerException.h>
#include <aws/inspector-scan/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::inspectorscan;
using namespace Aws::inspectorscan::Model;

namespace Aws
{
namespace inspectorscan
{
template<> AWS_INSPECTORSCAN_API ThrottlingException InspectorscanError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorscanErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTORSCAN_API InternalServerException InspectorscanError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorscanErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_INSPECTORSCAN_API ValidationException InspectorscanError::GetModeledError()
{
  assert(this->GetErrorType() == InspectorscanErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace InspectorscanErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(InspectorscanErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace InspectorscanErrorMapper
} // namespace inspectorscan
} // namespace Aws
