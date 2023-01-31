/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class ComponentType
  {
    NOT_SET,
    LAMINAR_FLOW,
    PRISM,
    DIGITIZER
  };

namespace ComponentTypeMapper
{
AWS_GROUNDSTATION_API ComponentType GetComponentTypeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForComponentType(ComponentType value);
} // namespace ComponentTypeMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
