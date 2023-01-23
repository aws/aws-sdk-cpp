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
  enum class RightsizingType
  {
    NOT_SET,
    TERMINATE,
    MODIFY
  };

namespace RightsizingTypeMapper
{
AWS_COSTEXPLORER_API RightsizingType GetRightsizingTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForRightsizingType(RightsizingType value);
} // namespace RightsizingTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
