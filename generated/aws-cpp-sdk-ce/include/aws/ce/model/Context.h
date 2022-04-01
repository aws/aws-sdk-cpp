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
  enum class Context
  {
    NOT_SET,
    COST_AND_USAGE,
    RESERVATIONS,
    SAVINGS_PLANS
  };

namespace ContextMapper
{
AWS_COSTEXPLORER_API Context GetContextForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForContext(Context value);
} // namespace ContextMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
