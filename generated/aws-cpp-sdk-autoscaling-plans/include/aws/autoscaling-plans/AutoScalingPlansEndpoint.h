/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace AutoScalingPlans
{
namespace AutoScalingPlansEndpoint
{
AWS_AUTOSCALINGPLANS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AutoScalingPlansEndpoint
} // namespace AutoScalingPlans
} // namespace Aws
