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
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

ModifyTargetGroupRequest::ModifyTargetGroupRequest() : 
    m_targetGroupArnHasBeenSet(false),
    m_healthCheckProtocol(ProtocolEnum::NOT_SET),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false),
    m_matcherHasBeenSet(false)
{
}

Aws::String ModifyTargetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyTargetGroup&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_healthCheckProtocolHasBeenSet)
  {
    ss << "HealthCheckProtocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_healthCheckProtocol) << "&";
  }

  if(m_healthCheckPortHasBeenSet)
  {
    ss << "HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }

  if(m_healthCheckPathHasBeenSet)
  {
    ss << "HealthCheckPath=" << StringUtils::URLEncode(m_healthCheckPath.c_str()) << "&";
  }

  if(m_healthCheckIntervalSecondsHasBeenSet)
  {
    ss << "HealthCheckIntervalSeconds=" << m_healthCheckIntervalSeconds << "&";
  }

  if(m_healthCheckTimeoutSecondsHasBeenSet)
  {
    ss << "HealthCheckTimeoutSeconds=" << m_healthCheckTimeoutSeconds << "&";
  }

  if(m_healthyThresholdCountHasBeenSet)
  {
    ss << "HealthyThresholdCount=" << m_healthyThresholdCount << "&";
  }

  if(m_unhealthyThresholdCountHasBeenSet)
  {
    ss << "UnhealthyThresholdCount=" << m_unhealthyThresholdCount << "&";
  }

  if(m_matcherHasBeenSet)
  {
    m_matcher.OutputToStream(ss, "Matcher");
  }

  ss << "Version=2015-12-01";
  return ss.str();
}

