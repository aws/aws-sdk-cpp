/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class LifeCycleState
  {
    NOT_SET,
    creating,
    available,
    updating,
    deleting,
    deleted,
    error
  };

namespace LifeCycleStateMapper
{
AWS_EFS_API LifeCycleState GetLifeCycleStateForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForLifeCycleState(LifeCycleState value);
} // namespace LifeCycleStateMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
