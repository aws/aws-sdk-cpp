/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class ComponentType
  {
    NOT_SET,
    BUILD,
    TEST
  };

namespace ComponentTypeMapper
{
AWS_IMAGEBUILDER_API ComponentType GetComponentTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForComponentType(ComponentType value);
} // namespace ComponentTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
