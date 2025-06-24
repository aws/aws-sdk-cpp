/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class RegionAvailability
  {
    NOT_SET,
    AVAILABLE,
    NOT_AVAILABLE
  };

namespace RegionAvailabilityMapper
{
AWS_BEDROCK_API RegionAvailability GetRegionAvailabilityForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForRegionAvailability(RegionAvailability value);
} // namespace RegionAvailabilityMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
