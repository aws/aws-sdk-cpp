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
  enum class ComponentStatus
  {
    NOT_SET,
    DEPRECATED
  };

namespace ComponentStatusMapper
{
AWS_IMAGEBUILDER_API ComponentStatus GetComponentStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForComponentStatus(ComponentStatus value);
} // namespace ComponentStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
