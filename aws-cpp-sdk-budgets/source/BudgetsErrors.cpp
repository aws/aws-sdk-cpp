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
#include <aws/budgets/BudgetsErrors.h>

using namespace Aws::Client;
using namespace Aws::Budgets;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace BudgetsErrorMapper
{

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int DUPLICATE_RECORD_HASH = HashingUtils::HashString("DuplicateRecordException");
static const int CREATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CreationLimitExceededException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int EXPIRED_NEXT_TOKEN_HASH = HashingUtils::HashString("ExpiredNextTokenException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::INTERNAL_ERROR), false);
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
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(BudgetsErrors::NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace BudgetsErrorMapper
} // namespace Budgets
} // namespace Aws
