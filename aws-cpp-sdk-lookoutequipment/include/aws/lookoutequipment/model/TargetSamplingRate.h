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
  enum class TargetSamplingRate
  {
    NOT_SET,
    PT1S,
    PT5S,
    PT10S,
    PT15S,
    PT30S,
    PT1M,
    PT5M,
    PT10M,
    PT15M,
    PT30M,
    PT1H
  };

namespace TargetSamplingRateMapper
{
AWS_LOOKOUTEQUIPMENT_API TargetSamplingRate GetTargetSamplingRateForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForTargetSamplingRate(TargetSamplingRate value);
} // namespace TargetSamplingRateMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
