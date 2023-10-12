/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/budgets/BudgetsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Budgets;

namespace Aws
{
namespace Budgets
{
namespace BudgetsErrorMapper
{

static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t RESOURCE_LOCKED_HASH = ConstExprHashingUtils::HashString("ResourceLockedException");
static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidParameterException");
static constexpr uint32_t DUPLICATE_RECORD_HASH = ConstExprHashingUtils::HashString("DuplicateRecordException");
static constexpr uint32_t CREATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CreationLimitExceededException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t EXPIRED_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("ExpiredNextTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::NOT_FOUND), false);
  }
  else if (hashCode == RESOURCE_LOCKED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::RESOURCE_LOCKED), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == DUPLICATE_RECORD_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::DUPLICATE_RECORD), false);
  }
  else if (hashCode == CREATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::CREATION_LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == EXPIRED_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::EXPIRED_NEXT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BudgetsErrorMapper
} // namespace Budgets
} // namespace Aws
