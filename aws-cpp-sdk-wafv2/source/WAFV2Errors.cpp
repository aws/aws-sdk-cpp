/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/WAFV2Errors.h>
#include <aws/wafv2/model/WAFInvalidParameterException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::WAFV2;
using namespace Aws::WAFV2::Model;

namespace Aws
{
namespace WAFV2
{
template<> AWS_WAFV2_API WAFInvalidParameterException WAFV2Error::GetModeledError()
{
  assert(this->GetErrorType() == WAFV2Errors::W_A_F_INVALID_PARAMETER);
  return WAFInvalidParameterException(this->GetJsonPayload().View());
}

namespace WAFV2ErrorMapper
{

static const int W_A_F_UNAVAILABLE_ENTITY_HASH = HashingUtils::HashString("WAFUnavailableEntityException");
static const int W_A_F_LIMITS_EXCEEDED_HASH = HashingUtils::HashString("WAFLimitsExceededException");
static const int W_A_F_INVALID_PARAMETER_HASH = HashingUtils::HashString("WAFInvalidParameterException");
static const int W_A_F_INVALID_RESOURCE_HASH = HashingUtils::HashString("WAFInvalidResourceException");
static const int W_A_F_INVALID_OPERATION_HASH = HashingUtils::HashString("WAFInvalidOperationException");
static const int W_A_F_ASSOCIATED_ITEM_HASH = HashingUtils::HashString("WAFAssociatedItemException");
static const int W_A_F_SUBSCRIPTION_NOT_FOUND_HASH = HashingUtils::HashString("WAFSubscriptionNotFoundException");
static const int W_A_F_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFInternalErrorException");
static const int W_A_F_TAG_OPERATION_HASH = HashingUtils::HashString("WAFTagOperationException");
static const int W_A_F_INVALID_PERMISSION_POLICY_HASH = HashingUtils::HashString("WAFInvalidPermissionPolicyException");
static const int W_A_F_NONEXISTENT_ITEM_HASH = HashingUtils::HashString("WAFNonexistentItemException");
static const int W_A_F_DUPLICATE_ITEM_HASH = HashingUtils::HashString("WAFDuplicateItemException");
static const int W_A_F_OPTIMISTIC_LOCK_HASH = HashingUtils::HashString("WAFOptimisticLockException");
static const int W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFTagOperationInternalErrorException");
static const int W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH = HashingUtils::HashString("WAFServiceLinkedRoleErrorException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_UNAVAILABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_UNAVAILABLE_ENTITY), false);
  }
  else if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_LIMITS_EXCEEDED), false);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PARAMETER), false);
  }
  else if (hashCode == W_A_F_INVALID_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_RESOURCE), false);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_OPERATION), false);
  }
  else if (hashCode == W_A_F_ASSOCIATED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_ASSOCIATED_ITEM), false);
  }
  else if (hashCode == W_A_F_SUBSCRIPTION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SUBSCRIPTION_NOT_FOUND), false);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION), false);
  }
  else if (hashCode == W_A_F_INVALID_PERMISSION_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_INVALID_PERMISSION_POLICY), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_NONEXISTENT_ITEM), false);
  }
  else if (hashCode == W_A_F_DUPLICATE_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_DUPLICATE_ITEM), false);
  }
  else if (hashCode == W_A_F_OPTIMISTIC_LOCK_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_OPTIMISTIC_LOCK), false);
  }
  else if (hashCode == W_A_F_TAG_OPERATION_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_TAG_OPERATION_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_SERVICE_LINKED_ROLE_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFV2Errors::W_A_F_SERVICE_LINKED_ROLE_ERROR), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFV2ErrorMapper
} // namespace WAFV2
} // namespace Aws
