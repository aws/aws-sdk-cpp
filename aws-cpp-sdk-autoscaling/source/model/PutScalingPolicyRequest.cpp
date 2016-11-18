/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

PutScalingPolicyRequest::PutScalingPolicyRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_adjustmentTypeHasBeenSet(false),
    m_minAdjustmentStep(0),
    m_minAdjustmentStepHasBeenSet(false),
    m_minAdjustmentMagnitude(0),
    m_minAdjustmentMagnitudeHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_cooldown(0),
    m_cooldownHasBeenSet(false),
    m_metricAggregationTypeHasBeenSet(false),
    m_stepAdjustmentsHasBeenSet(false),
    m_estimatedInstanceWarmup(0),
    m_estimatedInstanceWarmupHasBeenSet(false)
{
}

Aws::String PutScalingPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutScalingPolicy&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyTypeHasBeenSet)
  {
    ss << "PolicyType=" << StringUtils::URLEncode(m_policyType.c_str()) << "&";
  }

  if(m_adjustmentTypeHasBeenSet)
  {
    ss << "AdjustmentType=" << StringUtils::URLEncode(m_adjustmentType.c_str()) << "&";
  }

  if(m_minAdjustmentStepHasBeenSet)
  {
    ss << "MinAdjustmentStep=" << m_minAdjustmentStep << "&";
  }

  if(m_minAdjustmentMagnitudeHasBeenSet)
  {
    ss << "MinAdjustmentMagnitude=" << m_minAdjustmentMagnitude << "&";
  }

  if(m_scalingAdjustmentHasBeenSet)
  {
    ss << "ScalingAdjustment=" << m_scalingAdjustment << "&";
  }

  if(m_cooldownHasBeenSet)
  {
    ss << "Cooldown=" << m_cooldown << "&";
  }

  if(m_metricAggregationTypeHasBeenSet)
  {
    ss << "MetricAggregationType=" << StringUtils::URLEncode(m_metricAggregationType.c_str()) << "&";
  }

  if(m_stepAdjustmentsHasBeenSet)
  {
    unsigned stepAdjustmentsCount = 1;
    for(auto& item : m_stepAdjustments)
    {
      item.OutputToStream(ss, "StepAdjustments.member.", stepAdjustmentsCount, "");
      stepAdjustmentsCount++;
    }
  }

  if(m_estimatedInstanceWarmupHasBeenSet)
  {
    ss << "EstimatedInstanceWarmup=" << m_estimatedInstanceWarmup << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

