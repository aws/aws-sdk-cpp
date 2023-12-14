/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/firehose/FirehoseErrors.h>
#include <aws/firehose/model/InvalidKMSResourceException.h>
#include <aws/firehose/model/InvalidSourceException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Firehose;
using namespace Aws::Firehose::Model;

namespace Aws
{
namespace Firehose
{
template<> AWS_FIREHOSE_API InvalidKMSResourceException FirehoseError::GetModeledError()
{
  assert(this->GetErrorType() == FirehoseErrors::INVALID_K_M_S_RESOURCE);
  return InvalidKMSResourceException(this->GetJsonPayload().View());
}

template<> AWS_FIREHOSE_API InvalidSourceException FirehoseError::GetModeledError()
{
  assert(this->GetErrorType() == FirehoseErrors::INVALID_SOURCE);
  return InvalidSourceException(this->GetJsonPayload().View());
}

namespace FirehoseErrorMapper
{

static const int INVALID_K_M_S_RESOURCE_HASH = HashingUtils::HashString("InvalidKMSResourceException");
static const int INVALID_SOURCE_HASH = HashingUtils::HashString("InvalidSourceException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_K_M_S_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::INVALID_K_M_S_RESOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::INVALID_SOURCE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::INVALID_ARGUMENT), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FirehoseErrorMapper
} // namespace Firehose
} // namespace Aws
