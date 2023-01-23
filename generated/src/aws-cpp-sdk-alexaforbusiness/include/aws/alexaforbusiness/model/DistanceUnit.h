/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class DistanceUnit
  {
    NOT_SET,
    METRIC,
    IMPERIAL
  };

namespace DistanceUnitMapper
{
AWS_ALEXAFORBUSINESS_API DistanceUnit GetDistanceUnitForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForDistanceUnit(DistanceUnit value);
} // namespace DistanceUnitMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
