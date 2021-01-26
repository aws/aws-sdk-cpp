/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateTargetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

CreateTargetGroupRequest::CreateTargetGroupRequest() : 
    m_nameHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_protocolVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_healthCheckProtocol(ProtocolEnum::NOT_SET),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckEnabled(false),
    m_healthCheckEnabledHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false),
    m_matcherHasBeenSet(false),
    m_targetType(TargetTypeEnum::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTargetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTargetGroup&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
  }

  if(m_protocolVersionHasBeenSet)
  {
    ss << "ProtocolVersion=" << StringUtils::URLEncode(m_protocolVersion.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_healthCheckProtocolHasBeenSet)
  {
    ss << "HealthCheckProtocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_healthCheckProtocol) << "&";
  }

  if(m_healthCheckPortHasBeenSet)
  {
    ss << "HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }

  if(m_healthCheckEnabledHasBeenSet)
  {
    ss << "HealthCheckEnabled=" << std::boolalpha << m_healthCheckEnabled << "&";
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

  if(m_targetTypeHasBeenSet)
  {
    ss << "TargetType=" << TargetTypeEnumMapper::GetNameForTargetTypeEnum(m_targetType) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  CreateTargetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
