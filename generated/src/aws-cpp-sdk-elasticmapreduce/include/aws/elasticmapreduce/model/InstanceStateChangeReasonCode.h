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
  enum class InstanceStateChangeReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    INSTANCE_FAILURE,
    BOOTSTRAP_FAILURE,
    CLUSTER_TERMINATED
  };

namespace InstanceStateChangeReasonCodeMapper
{
AWS_EMR_API InstanceStateChangeReasonCode GetInstanceStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceStateChangeReasonCode(InstanceStateChangeReasonCode value);
} // namespace InstanceStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
