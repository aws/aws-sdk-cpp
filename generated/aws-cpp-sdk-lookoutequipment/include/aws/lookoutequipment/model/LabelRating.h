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
  enum class LabelRating
  {
    NOT_SET,
    ANOMALY,
    NO_ANOMALY,
    NEUTRAL
  };

namespace LabelRatingMapper
{
AWS_LOOKOUTEQUIPMENT_API LabelRating GetLabelRatingForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForLabelRating(LabelRating value);
} // namespace LabelRatingMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
