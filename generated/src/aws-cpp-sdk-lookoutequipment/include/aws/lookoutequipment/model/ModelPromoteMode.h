/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class ModelPromoteMode
  {
    NOT_SET,
    MANAGED,
    MANUAL
  };

namespace ModelPromoteModeMapper
{
AWS_LOOKOUTEQUIPMENT_API ModelPromoteMode GetModelPromoteModeForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForModelPromoteMode(ModelPromoteMode value);
} // namespace ModelPromoteModeMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
