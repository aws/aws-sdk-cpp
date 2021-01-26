/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Budgets
{
namespace Model
{
  enum class ApprovalModel
  {
    NOT_SET,
    AUTOMATIC,
    MANUAL
  };

namespace ApprovalModelMapper
{
AWS_BUDGETS_API ApprovalModel GetApprovalModelForName(const Aws::String& name);

AWS_BUDGETS_API Aws::String GetNameForApprovalModel(ApprovalModel value);
} // namespace ApprovalModelMapper
} // namespace Model
} // namespace Budgets
} // namespace Aws
