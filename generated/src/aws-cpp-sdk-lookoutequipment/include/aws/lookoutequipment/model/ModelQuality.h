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
  enum class ModelQuality
  {
    NOT_SET,
    QUALITY_THRESHOLD_MET,
    CANNOT_DETERMINE_QUALITY,
    POOR_QUALITY_DETECTED
  };

namespace ModelQualityMapper
{
AWS_LOOKOUTEQUIPMENT_API ModelQuality GetModelQualityForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForModelQuality(ModelQuality value);
} // namespace ModelQualityMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
