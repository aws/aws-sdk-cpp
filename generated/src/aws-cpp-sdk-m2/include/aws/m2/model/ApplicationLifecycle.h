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
  enum class ApplicationLifecycle
  {
    NOT_SET,
    Creating,
    Created,
    Available,
    Ready,
    Starting,
    Running,
    Stopping,
    Stopped,
    Failed,
    Deleting,
    Deleting_From_Environment
  };

namespace ApplicationLifecycleMapper
{
AWS_MAINFRAMEMODERNIZATION_API ApplicationLifecycle GetApplicationLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForApplicationLifecycle(ApplicationLifecycle value);
} // namespace ApplicationLifecycleMapper
} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
