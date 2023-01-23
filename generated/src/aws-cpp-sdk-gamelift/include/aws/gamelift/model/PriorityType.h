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
  enum class PriorityType
  {
    NOT_SET,
    LATENCY,
    COST,
    DESTINATION,
    LOCATION
  };

namespace PriorityTypeMapper
{
AWS_GAMELIFT_API PriorityType GetPriorityTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPriorityType(PriorityType value);
} // namespace PriorityTypeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
