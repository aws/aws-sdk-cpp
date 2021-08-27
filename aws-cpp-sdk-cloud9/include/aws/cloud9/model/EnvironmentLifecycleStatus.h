/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class EnvironmentLifecycleStatus
  {
    NOT_SET,
    CREATING,
    CREATED,
    CREATE_FAILED,
    DELETING,
    DELETE_FAILED
  };

namespace EnvironmentLifecycleStatusMapper
{
AWS_CLOUD9_API EnvironmentLifecycleStatus GetEnvironmentLifecycleStatusForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForEnvironmentLifecycleStatus(EnvironmentLifecycleStatus value);
} // namespace EnvironmentLifecycleStatusMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
