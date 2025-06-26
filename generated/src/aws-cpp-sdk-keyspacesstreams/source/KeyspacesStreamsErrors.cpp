/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/keyspacesstreams/KeyspacesStreamsErrors.h>
#include <aws/keyspacesstreams/model/ValidationException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KeyspacesStreams;
using namespace Aws::KeyspacesStreams::Model;

namespace Aws
{
namespace KeyspacesStreams
{
template<> AWS_KEYSPACESSTREAMS_API ValidationException KeyspacesStreamsError::GetModeledError()
{
  assert(this->GetErrorType() == KeyspacesStreamsErrors::VALIDATION);
  return ValidationException(this->GetJsonPayload().View());
}

namespace KeyspacesStreamsErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KeyspacesStreamsErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KeyspacesStreamsErrorMapper
} // namespace KeyspacesStreams
} // namespace Aws
