﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/waf/WAFErrors.h>

using namespace Aws::Client;
using namespace Aws::WAF;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace WAFErrorMapper
{

static const int W_A_F_DISALLOWED_NAME_HASH = HashingUtils::HashString("WAFDisallowedNameException");
static const int W_A_F_INVALID_OPERATION_HASH = HashingUtils::HashString("WAFInvalidOperationException");
static const int W_A_F_NON_EMPTY_ENTITY_HASH = HashingUtils::HashString("WAFNonEmptyEntityException");
static const int W_A_F_INTERNAL_ERROR_HASH = HashingUtils::HashString("WAFInternalErrorException");
static const int W_A_F_LIMITS_EXCEEDED_HASH = HashingUtils::HashString("WAFLimitsExceededException");
static const int W_A_F_NONEXISTENT_CONTAINER_HASH = HashingUtils::HashString("WAFNonexistentContainerException");
static const int W_A_F_NONEXISTENT_ITEM_HASH = HashingUtils::HashString("WAFNonexistentItemException");
static const int W_A_F_REFERENCED_ITEM_HASH = HashingUtils::HashString("WAFReferencedItemException");
static const int W_A_F_STALE_DATA_HASH = HashingUtils::HashString("WAFStaleDataException");
static const int W_A_F_INVALID_ACCOUNT_HASH = HashingUtils::HashString("WAFInvalidAccountException");
static const int W_A_F_INVALID_PARAMETER_HASH = HashingUtils::HashString("WAFInvalidParameterException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == W_A_F_DISALLOWED_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_DISALLOWED_NAME), false);
  }
  else if (hashCode == W_A_F_INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_OPERATION), false);
  }
  else if (hashCode == W_A_F_NON_EMPTY_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NON_EMPTY_ENTITY), false);
  }
  else if (hashCode == W_A_F_INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INTERNAL_ERROR), false);
  }
  else if (hashCode == W_A_F_LIMITS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_LIMITS_EXCEEDED), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_CONTAINER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NONEXISTENT_CONTAINER), false);
  }
  else if (hashCode == W_A_F_NONEXISTENT_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_NONEXISTENT_ITEM), false);
  }
  else if (hashCode == W_A_F_REFERENCED_ITEM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_REFERENCED_ITEM), false);
  }
  else if (hashCode == W_A_F_STALE_DATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_STALE_DATA), false);
  }
  else if (hashCode == W_A_F_INVALID_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_ACCOUNT), false);
  }
  else if (hashCode == W_A_F_INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(WAFErrors::W_A_F_INVALID_PARAMETER), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace WAFErrorMapper
} // namespace WAF
} // namespace Aws
