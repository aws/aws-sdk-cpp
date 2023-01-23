/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{
  enum class ClusterState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    UNINITIALIZED,
    INITIALIZE_IN_PROGRESS,
    INITIALIZED,
    ACTIVE,
    UPDATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    DELETED,
    DEGRADED
  };

namespace ClusterStateMapper
{
AWS_CLOUDHSMV2_API ClusterState GetClusterStateForName(const Aws::String& name);

AWS_CLOUDHSMV2_API Aws::String GetNameForClusterState(ClusterState value);
} // namespace ClusterStateMapper
} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
