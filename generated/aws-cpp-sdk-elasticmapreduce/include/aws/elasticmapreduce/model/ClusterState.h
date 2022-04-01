/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ClusterState
  {
    NOT_SET,
    STARTING,
    BOOTSTRAPPING,
    RUNNING,
    WAITING,
    TERMINATING,
    TERMINATED,
    TERMINATED_WITH_ERRORS
  };

namespace ClusterStateMapper
{
AWS_EMR_API ClusterState GetClusterStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForClusterState(ClusterState value);
} // namespace ClusterStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
