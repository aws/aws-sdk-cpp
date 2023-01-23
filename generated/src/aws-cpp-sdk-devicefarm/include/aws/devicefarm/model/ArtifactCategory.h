/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class ArtifactCategory
  {
    NOT_SET,
    SCREENSHOT,
    FILE,
    LOG
  };

namespace ArtifactCategoryMapper
{
AWS_DEVICEFARM_API ArtifactCategory GetArtifactCategoryForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForArtifactCategory(ArtifactCategory value);
} // namespace ArtifactCategoryMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
