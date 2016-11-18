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
#include <aws/autoscaling/model/ExecutePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

ExecutePolicyRequest::ExecutePolicyRequest() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_honorCooldown(false),
    m_honorCooldownHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false),
    m_breachThreshold(0.0),
    m_breachThresholdHasBeenSet(false)
{
}

Aws::String ExecutePolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ExecutePolicy&";
  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_policyNameHasBeenSet)
  {
    ss << "PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_honorCooldownHasBeenSet)
  {
    ss << "HonorCooldown=" << m_honorCooldown << "&";
  }

  if(m_metricValueHasBeenSet)
  {
    ss << "MetricValue=" << StringUtils::URLEncode(m_metricValue) << "&";
  }

  if(m_breachThresholdHasBeenSet)
  {
    ss << "BreachThreshold=" << StringUtils::URLEncode(m_breachThreshold) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

