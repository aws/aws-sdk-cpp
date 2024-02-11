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
  enum class ResourceStatus
  {
    NOT_SET,
    AVAILABLE,
    DELETED,
    DEPRECATED,
    DISABLED
  };

namespace ResourceStatusMapper
{
AWS_IMAGEBUILDER_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForResourceStatus(ResourceStatus value);
} // namespace ResourceStatusMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
