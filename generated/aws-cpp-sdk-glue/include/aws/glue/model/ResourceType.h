/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    JAR,
    FILE,
    ARCHIVE
  };

namespace ResourceTypeMapper
{
AWS_GLUE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
