/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class ScaleUnit
  {
    NOT_SET,
    PERCENT
  };

namespace ScaleUnitMapper
{
AWS_ECS_API ScaleUnit GetScaleUnitForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForScaleUnit(ScaleUnit value);
} // namespace ScaleUnitMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
