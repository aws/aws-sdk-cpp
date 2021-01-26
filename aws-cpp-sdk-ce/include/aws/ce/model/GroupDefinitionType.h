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
  enum class GroupDefinitionType
  {
    NOT_SET,
    DIMENSION,
    TAG,
    COST_CATEGORY
  };

namespace GroupDefinitionTypeMapper
{
AWS_COSTEXPLORER_API GroupDefinitionType GetGroupDefinitionTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForGroupDefinitionType(GroupDefinitionType value);
} // namespace GroupDefinitionTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
