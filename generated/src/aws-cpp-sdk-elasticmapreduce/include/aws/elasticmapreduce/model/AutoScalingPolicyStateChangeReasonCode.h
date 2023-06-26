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
  enum class AutoScalingPolicyStateChangeReasonCode
  {
    NOT_SET,
    USER_REQUEST,
    PROVISION_FAILURE,
    CLEANUP_FAILURE
  };

namespace AutoScalingPolicyStateChangeReasonCodeMapper
{
AWS_EMR_API AutoScalingPolicyStateChangeReasonCode GetAutoScalingPolicyStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForAutoScalingPolicyStateChangeReasonCode(AutoScalingPolicyStateChangeReasonCode value);
} // namespace AutoScalingPolicyStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
