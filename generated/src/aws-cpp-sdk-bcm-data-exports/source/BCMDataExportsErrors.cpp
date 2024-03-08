/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/bcm-data-exports/BCMDataExportsErrors.h>
#include <aws/bcm-data-exports/model/ServiceQuotaExceededException.h>
#include <aws/bcm-data-exports/model/ThrottlingException.h>
#include <aws/bcm-data-exports/model/ResourceNotFoundException.h>
#include <aws/bcm-data-exports/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::BCMDataExports;
using namespace Aws::BCMDataExports::Model;

namespace Aws
{
namespace BCMDataExports
{
template<> AWS_BCMDATAEXPORTS_API ServiceQuotaExceededException BCMDataExportsError::GetModeledError()
{
  assert(this->GetErrorType() == BCMDataExportsErrors::SERVICE_QUOTA_EXCEEDED);
  return ServiceQuotaExceededException(this->GetJsonPayload().View());
}

template<> AWS_BCMDATAEXPORTS_API ThrottlingException BCMDataExportsError::GetModeledError()
{
  assert(this->GetErrorType() == BCMDataExportsErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

template<> AWS_BCMDATAEXPORTS_API ResourceNotFoundException BCMDataExportsError::GetModeledError()
{
  assert(this->GetErrorType() == BCMDataExportsErrors::RESOURCE_NOT_FOUND);
  return ResourceNotFoundException(this->GetJsonPayload().View());
}

template<> AWS_BCMDATAEXPORTS_API ValidationException BCMDataExportsError::GetModeledError()
{
  assert(this->GetErrorType() == BCMDataExportsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace BCMDataExportsErrorMapper
{

static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMDataExportsErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BCMDataExportsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BCMDataExportsErrorMapper
} // namespace BCMDataExports
} // namespace Aws
