/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    PROJECT,
    DATASET,
    MODEL,
    TRIAL,
    MODEL_PACKAGE_JOB
  };

namespace ResourceTypeMapper
{
AWS_LOOKOUTFORVISION_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_LOOKOUTFORVISION_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
