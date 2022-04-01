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
  enum class InstanceFleetStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    INSTANCE_FAILURE,
    CLUSTER_TERMINATED
  };

namespace InstanceFleetStateChangeReasonCodeMapper
{
AWS_EMR_API InstanceFleetStateChangeReasonCode GetInstanceFleetStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceFleetStateChangeReasonCode(InstanceFleetStateChangeReasonCode value);
} // namespace InstanceFleetStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
