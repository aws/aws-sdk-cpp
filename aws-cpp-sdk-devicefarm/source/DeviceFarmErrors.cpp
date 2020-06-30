/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/DeviceFarmErrors.h>
#include <aws/devicefarm/model/TooManyTagsException.h>
#include <aws/devicefarm/model/TagOperationException.h>
#include <aws/devicefarm/model/TagPolicyException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::DeviceFarm;
using namespace Aws::DeviceFarm::Model;

namespace Aws
{
namespace DeviceFarm
{
template<> AWS_DEVICEFARM_API TooManyTagsException DeviceFarmError::GetModeledError()
{
  assert(this->GetErrorType() == DeviceFarmErrors::TOO_MANY_TAGS);
  return TooManyTagsException(this->GetJsonPayload().View());
}

template<> AWS_DEVICEFARM_API TagOperationException DeviceFarmError::GetModeledError()
{
  assert(this->GetErrorType() == DeviceFarmErrors::TAG_OPERATION);
  return TagOperationException(this->GetJsonPayload().View());
}

template<> AWS_DEVICEFARM_API TagPolicyException DeviceFarmError::GetModeledError()
{
  assert(this->GetErrorType() == DeviceFarmErrors::TAG_POLICY);
  return TagPolicyException(this->GetJsonPayload().View());
}

namespace DeviceFarmErrorMapper
{

static const int IDEMPOTENCY_HASH = HashingUtils::HashString("IdempotencyException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int ARGUMENT_HASH = HashingUtils::HashString("ArgumentException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int SERVICE_ACCOUNT_HASH = HashingUtils::HashString("ServiceAccountException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int TAG_OPERATION_HASH = HashingUtils::HashString("TagOperationException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceException");
static const int TAG_POLICY_HASH = HashingUtils::HashString("TagPolicyException");
static const int CANNOT_DELETE_HASH = HashingUtils::HashString("CannotDeleteException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int NOT_ELIGIBLE_HASH = HashingUtils::HashString("NotEligibleException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::NOT_FOUND), false);
  }
  else if (hashCode == ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::ARGUMENT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == SERVICE_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::SERVICE_ACCOUNT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TAG_OPERATION), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == TAG_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::TAG_POLICY), false);
  }
  else if (hashCode == CANNOT_DELETE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::CANNOT_DELETE), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == NOT_ELIGIBLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::NOT_ELIGIBLE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DeviceFarmErrorMapper
} // namespace DeviceFarm
} // namespace Aws
