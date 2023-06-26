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
  enum class ClusterStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    INSTANCE_FAILURE,
    INSTANCE_FLEET_TIMEOUT,
    BOOTSTRAP_FAILURE,
    USER_REQUEST,
    STEP_FAILURE,
    ALL_STEPS_COMPLETED
  };

namespace ClusterStateChangeReasonCodeMapper
{
AWS_EMR_API ClusterStateChangeReasonCode GetClusterStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForClusterStateChangeReasonCode(ClusterStateChangeReasonCode value);
} // namespace ClusterStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
