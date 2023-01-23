/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{
  enum class EnvironmentLifecycle
  {
    NOT_SET,
    Creating,
    Available,
    Deleting,
    Failed,
    Updating
  };

namespace EnvironmentLifecycleMapper
{
AWS_MAINFRAMEMODERNIZATION_API EnvironmentLifecycle GetEnvironmentLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForEnvironmentLifecycle(EnvironmentLifecycle value);
} // namespace EnvironmentLifecycleMapper
} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
