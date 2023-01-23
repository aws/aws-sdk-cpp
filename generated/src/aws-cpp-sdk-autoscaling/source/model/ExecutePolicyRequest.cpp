/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    ss << "HonorCooldown=" << std::boolalpha << m_honorCooldown << "&";
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


void  ExecutePolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
