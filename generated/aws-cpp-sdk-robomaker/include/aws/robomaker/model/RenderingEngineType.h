/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class RenderingEngineType
  {
    NOT_SET,
    OGRE
  };

namespace RenderingEngineTypeMapper
{
AWS_ROBOMAKER_API RenderingEngineType GetRenderingEngineTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForRenderingEngineType(RenderingEngineType value);
} // namespace RenderingEngineTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
