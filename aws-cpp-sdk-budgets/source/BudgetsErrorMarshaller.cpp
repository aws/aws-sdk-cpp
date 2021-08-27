/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/budgets/BudgetsErrorMarshaller.h>
#include <aws/budgets/BudgetsErrors.h>

using namespace Aws::Client;
using namespace Aws::Budgets;

AWSError<CoreErrors> BudgetsErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = BudgetsErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSErrorMarshaller::FindErrorByName(errorName);
}