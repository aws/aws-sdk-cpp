/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class VirtualClusterState
  {
    NOT_SET,
    RUNNING,
    TERMINATING,
    TERMINATED,
    ARRESTED
  };

namespace VirtualClusterStateMapper
{
AWS_EMRCONTAINERS_API VirtualClusterState GetVirtualClusterStateForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForVirtualClusterState(VirtualClusterState value);
} // namespace VirtualClusterStateMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
