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
  enum class InstanceGroupStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    INSTANCE_FAILURE,
    CLUSTER_TERMINATED
  };

namespace InstanceGroupStateChangeReasonCodeMapper
{
AWS_EMR_API InstanceGroupStateChangeReasonCode GetInstanceGroupStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceGroupStateChangeReasonCode(InstanceGroupStateChangeReasonCode value);
} // namespace InstanceGroupStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
