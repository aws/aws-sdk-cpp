/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    GPU
  };

namespace ResourceTypeMapper
{
AWS_BATCH_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
