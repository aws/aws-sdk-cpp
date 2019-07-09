/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/elasticloadbalancingv2/model/TargetGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

TargetGroup::TargetGroup() : 
    m_targetGroupArnHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_healthCheckProtocol(ProtocolEnum::NOT_SET),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckEnabled(false),
    m_healthCheckEnabledHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_matcherHasBeenSet(false),
    m_loadBalancerArnsHasBeenSet(false),
    m_targetType(TargetTypeEnum::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
}

TargetGroup::TargetGroup(const XmlNode& xmlNode) : 
    m_targetGroupArnHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_protocol(ProtocolEnum::NOT_SET),
    m_protocolHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_healthCheckProtocol(ProtocolEnum::NOT_SET),
    m_healthCheckProtocolHasBeenSet(false),
    m_healthCheckPortHasBeenSet(false),
    m_healthCheckEnabled(false),
    m_healthCheckEnabledHasBeenSet(false),
    m_healthCheckIntervalSeconds(0),
    m_healthCheckIntervalSecondsHasBeenSet(false),
    m_healthCheckTimeoutSeconds(0),
    m_healthCheckTimeoutSecondsHasBeenSet(false),
    m_healthyThresholdCount(0),
    m_healthyThresholdCountHasBeenSet(false),
    m_unhealthyThresholdCount(0),
    m_unhealthyThresholdCountHasBeenSet(false),
    m_healthCheckPathHasBeenSet(false),
    m_matcherHasBeenSet(false),
    m_loadBalancerArnsHasBeenSet(false),
    m_targetType(TargetTypeEnum::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TargetGroup& TargetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetGroupArnNode = resultNode.FirstChild("TargetGroupArn");
    if(!targetGroupArnNode.IsNull())
    {
      m_targetGroupArn = targetGroupArnNode.GetText();
      m_targetGroupArnHasBeenSet = true;
    }
    XmlNode targetGroupNameNode = resultNode.FirstChild("TargetGroupName");
    if(!targetGroupNameNode.IsNull())
    {
      m_targetGroupName = targetGroupNameNode.GetText();
      m_targetGroupNameHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = ProtocolEnumMapper::GetProtocolEnumForName(StringUtils::Trim(protocolNode.GetText().c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode healthCheckProtocolNode = resultNode.FirstChild("HealthCheckProtocol");
    if(!healthCheckProtocolNode.IsNull())
    {
      m_healthCheckProtocol = ProtocolEnumMapper::GetProtocolEnumForName(StringUtils::Trim(healthCheckProtocolNode.GetText().c_str()).c_str());
      m_healthCheckProtocolHasBeenSet = true;
    }
    XmlNode healthCheckPortNode = resultNode.FirstChild("HealthCheckPort");
    if(!healthCheckPortNode.IsNull())
    {
      m_healthCheckPort = healthCheckPortNode.GetText();
      m_healthCheckPortHasBeenSet = true;
    }
    XmlNode healthCheckEnabledNode = resultNode.FirstChild("HealthCheckEnabled");
    if(!healthCheckEnabledNode.IsNull())
    {
      m_healthCheckEnabled = StringUtils::ConvertToBool(StringUtils::Trim(healthCheckEnabledNode.GetText().c_str()).c_str());
      m_healthCheckEnabledHasBeenSet = true;
    }
    XmlNode healthCheckIntervalSecondsNode = resultNode.FirstChild("HealthCheckIntervalSeconds");
    if(!healthCheckIntervalSecondsNode.IsNull())
    {
      m_healthCheckIntervalSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(healthCheckIntervalSecondsNode.GetText().c_str()).c_str());
      m_healthCheckIntervalSecondsHasBeenSet = true;
    }
    XmlNode healthCheckTimeoutSecondsNode = resultNode.FirstChild("HealthCheckTimeoutSeconds");
    if(!healthCheckTimeoutSecondsNode.IsNull())
    {
      m_healthCheckTimeoutSeconds = StringUtils::ConvertToInt32(StringUtils::Trim(healthCheckTimeoutSecondsNode.GetText().c_str()).c_str());
      m_healthCheckTimeoutSecondsHasBeenSet = true;
    }
    XmlNode healthyThresholdCountNode = resultNode.FirstChild("HealthyThresholdCount");
    if(!healthyThresholdCountNode.IsNull())
    {
      m_healthyThresholdCount = StringUtils::ConvertToInt32(StringUtils::Trim(healthyThresholdCountNode.GetText().c_str()).c_str());
      m_healthyThresholdCountHasBeenSet = true;
    }
    XmlNode unhealthyThresholdCountNode = resultNode.FirstChild("UnhealthyThresholdCount");
    if(!unhealthyThresholdCountNode.IsNull())
    {
      m_unhealthyThresholdCount = StringUtils::ConvertToInt32(StringUtils::Trim(unhealthyThresholdCountNode.GetText().c_str()).c_str());
      m_unhealthyThresholdCountHasBeenSet = true;
    }
    XmlNode healthCheckPathNode = resultNode.FirstChild("HealthCheckPath");
    if(!healthCheckPathNode.IsNull())
    {
      m_healthCheckPath = healthCheckPathNode.GetText();
      m_healthCheckPathHasBeenSet = true;
    }
    XmlNode matcherNode = resultNode.FirstChild("Matcher");
    if(!matcherNode.IsNull())
    {
      m_matcher = matcherNode;
      m_matcherHasBeenSet = true;
    }
    XmlNode loadBalancerArnsNode = resultNode.FirstChild("LoadBalancerArns");
    if(!loadBalancerArnsNode.IsNull())
    {
      XmlNode loadBalancerArnsMember = loadBalancerArnsNode.FirstChild("member");
      while(!loadBalancerArnsMember.IsNull())
      {
        m_loadBalancerArns.push_back(loadBalancerArnsMember.GetText());
        loadBalancerArnsMember = loadBalancerArnsMember.NextNode("member");
      }

      m_loadBalancerArnsHasBeenSet = true;
    }
    XmlNode targetTypeNode = resultNode.FirstChild("TargetType");
    if(!targetTypeNode.IsNull())
    {
      m_targetType = TargetTypeEnumMapper::GetTargetTypeEnumForName(StringUtils::Trim(targetTypeNode.GetText().c_str()).c_str());
      m_targetTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TargetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_targetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_healthCheckProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckProtocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_healthCheckProtocol) << "&";
  }

  if(m_healthCheckPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }

  if(m_healthCheckEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckEnabled=" << std::boolalpha << m_healthCheckEnabled << "&";
  }

  if(m_healthCheckIntervalSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckIntervalSeconds=" << m_healthCheckIntervalSeconds << "&";
  }

  if(m_healthCheckTimeoutSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckTimeoutSeconds=" << m_healthCheckTimeoutSeconds << "&";
  }

  if(m_healthyThresholdCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthyThresholdCount=" << m_healthyThresholdCount << "&";
  }

  if(m_unhealthyThresholdCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".UnhealthyThresholdCount=" << m_unhealthyThresholdCount << "&";
  }

  if(m_healthCheckPathHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckPath=" << StringUtils::URLEncode(m_healthCheckPath.c_str()) << "&";
  }

  if(m_matcherHasBeenSet)
  {
      Aws::StringStream matcherLocationAndMemberSs;
      matcherLocationAndMemberSs << location << index << locationValue << ".Matcher";
      m_matcher.OutputToStream(oStream, matcherLocationAndMemberSs.str().c_str());
  }

  if(m_loadBalancerArnsHasBeenSet)
  {
      unsigned loadBalancerArnsIdx = 1;
      for(auto& item : m_loadBalancerArns)
      {
        oStream << location << index << locationValue << ".LoadBalancerArns.member." << loadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_targetTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetType=" << TargetTypeEnumMapper::GetNameForTargetTypeEnum(m_targetType) << "&";
  }

}

void TargetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetGroupArnHasBeenSet)
  {
      oStream << location << ".TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }
  if(m_targetGroupNameHasBeenSet)
  {
      oStream << location << ".TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_protocol) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_healthCheckProtocolHasBeenSet)
  {
      oStream << location << ".HealthCheckProtocol=" << ProtocolEnumMapper::GetNameForProtocolEnum(m_healthCheckProtocol) << "&";
  }
  if(m_healthCheckPortHasBeenSet)
  {
      oStream << location << ".HealthCheckPort=" << StringUtils::URLEncode(m_healthCheckPort.c_str()) << "&";
  }
  if(m_healthCheckEnabledHasBeenSet)
  {
      oStream << location << ".HealthCheckEnabled=" << std::boolalpha << m_healthCheckEnabled << "&";
  }
  if(m_healthCheckIntervalSecondsHasBeenSet)
  {
      oStream << location << ".HealthCheckIntervalSeconds=" << m_healthCheckIntervalSeconds << "&";
  }
  if(m_healthCheckTimeoutSecondsHasBeenSet)
  {
      oStream << location << ".HealthCheckTimeoutSeconds=" << m_healthCheckTimeoutSeconds << "&";
  }
  if(m_healthyThresholdCountHasBeenSet)
  {
      oStream << location << ".HealthyThresholdCount=" << m_healthyThresholdCount << "&";
  }
  if(m_unhealthyThresholdCountHasBeenSet)
  {
      oStream << location << ".UnhealthyThresholdCount=" << m_unhealthyThresholdCount << "&";
  }
  if(m_healthCheckPathHasBeenSet)
  {
      oStream << location << ".HealthCheckPath=" << StringUtils::URLEncode(m_healthCheckPath.c_str()) << "&";
  }
  if(m_matcherHasBeenSet)
  {
      Aws::String matcherLocationAndMember(location);
      matcherLocationAndMember += ".Matcher";
      m_matcher.OutputToStream(oStream, matcherLocationAndMember.c_str());
  }
  if(m_loadBalancerArnsHasBeenSet)
  {
      unsigned loadBalancerArnsIdx = 1;
      for(auto& item : m_loadBalancerArns)
      {
        oStream << location << ".LoadBalancerArns.member." << loadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_targetTypeHasBeenSet)
  {
      oStream << location << ".TargetType=" << TargetTypeEnumMapper::GetNameForTargetTypeEnum(m_targetType) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
