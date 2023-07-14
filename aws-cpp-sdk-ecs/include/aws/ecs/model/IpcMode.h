/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class IpcMode
  {
    NOT_SET,
    host,
    task,
    none
  };

namespace IpcModeMapper
{
AWS_ECS_API IpcMode GetIpcModeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForIpcMode(IpcMode value);
} // namespace IpcModeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
