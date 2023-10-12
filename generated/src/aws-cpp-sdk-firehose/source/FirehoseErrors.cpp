/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/firehose/FirehoseErrors.h>
#include <aws/firehose/model/InvalidKMSResourceException.h>

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

namespace FirehoseErrorMapper
{

static constexpr uint32_t INVALID_K_M_S_RESOURCE_HASH = ConstExprHashingUtils::HashString("InvalidKMSResourceException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUseException");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgumentException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_K_M_S_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::INVALID_K_M_S_RESOURCE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::RESOURCE_IN_USE), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(FirehoseErrors::INVALID_ARGUMENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace FirehoseErrorMapper
} // namespace Firehose
} // namespace Aws
