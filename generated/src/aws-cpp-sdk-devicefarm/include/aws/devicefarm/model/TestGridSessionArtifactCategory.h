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
  enum class TestGridSessionArtifactCategory
  {
    NOT_SET,
    VIDEO,
    LOG
  };

namespace TestGridSessionArtifactCategoryMapper
{
AWS_DEVICEFARM_API TestGridSessionArtifactCategory GetTestGridSessionArtifactCategoryForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForTestGridSessionArtifactCategory(TestGridSessionArtifactCategory value);
} // namespace TestGridSessionArtifactCategoryMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
