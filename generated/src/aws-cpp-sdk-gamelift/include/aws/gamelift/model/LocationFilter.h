/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class LocationFilter
  {
    NOT_SET,
    AWS,
    CUSTOM
  };

namespace LocationFilterMapper
{
AWS_GAMELIFT_API LocationFilter GetLocationFilterForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForLocationFilter(LocationFilter value);
} // namespace LocationFilterMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
