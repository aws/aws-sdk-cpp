/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{
  enum class DevEnvironmentStatus
  {
    NOT_SET,
    PENDING,
    RUNNING,
    STARTING,
    STOPPING,
    STOPPED,
    FAILED,
    DELETING,
    DELETED
  };

namespace DevEnvironmentStatusMapper
{
AWS_CODECATALYST_API DevEnvironmentStatus GetDevEnvironmentStatusForName(const Aws::String& name);

AWS_CODECATALYST_API Aws::String GetNameForDevEnvironmentStatus(DevEnvironmentStatus value);
} // namespace DevEnvironmentStatusMapper
} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
