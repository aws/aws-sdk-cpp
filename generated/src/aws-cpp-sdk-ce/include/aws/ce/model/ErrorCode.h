/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    NO_USAGE_FOUND,
    INTERNAL_FAILURE,
    INVALID_SAVINGS_PLANS_TO_ADD,
    INVALID_SAVINGS_PLANS_TO_EXCLUDE,
    INVALID_ACCOUNT_ID
  };

namespace ErrorCodeMapper
{
AWS_COSTEXPLORER_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
