/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ExecutePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

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
