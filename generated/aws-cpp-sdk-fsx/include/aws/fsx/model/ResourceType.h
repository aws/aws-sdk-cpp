/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    FILE_SYSTEM,
    VOLUME
  };

namespace ResourceTypeMapper
{
AWS_FSX_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
