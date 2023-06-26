/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FirewallStatelessRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

FirewallStatelessRule::FirewallStatelessRule() : 
    m_ruleGroupArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

FirewallStatelessRule::FirewallStatelessRule(const XmlNode& xmlNode) : 
    m_ruleGroupArnHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_sourcePortsHasBeenSet(false),
    m_destinationPortsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = xmlNode;
}

FirewallStatelessRule& FirewallStatelessRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleGroupArnNode = resultNode.FirstChild("ruleGroupArn");
    if(!ruleGroupArnNode.IsNull())
    {
      m_ruleGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(ruleGroupArnNode.GetText());
      m_ruleGroupArnHasBeenSet = true;
    }
    XmlNode sourcesNode = resultNode.FirstChild("sourceSet");
    if(!sourcesNode.IsNull())
    {
      XmlNode sourcesMember = sourcesNode.FirstChild("item");
      while(!sourcesMember.IsNull())
      {
        m_sources.push_back(sourcesMember.GetText());
        sourcesMember = sourcesMember.NextNode("item");
      }

      m_sourcesHasBeenSet = true;
    }
    XmlNode destinationsNode = resultNode.FirstChild("destinationSet");
    if(!destinationsNode.IsNull())
    {
      XmlNode destinationsMember = destinationsNode.FirstChild("item");
      while(!destinationsMember.IsNull())
      {
        m_destinations.push_back(destinationsMember.GetText());
        destinationsMember = destinationsMember.NextNode("item");
      }

      m_destinationsHasBeenSet = true;
    }
    XmlNode sourcePortsNode = resultNode.FirstChild("sourcePortSet");
    if(!sourcePortsNode.IsNull())
    {
      XmlNode sourcePortsMember = sourcePortsNode.FirstChild("item");
      while(!sourcePortsMember.IsNull())
      {
        m_sourcePorts.push_back(sourcePortsMember);
        sourcePortsMember = sourcePortsMember.NextNode("item");
      }

      m_sourcePortsHasBeenSet = true;
    }
    XmlNode destinationPortsNode = resultNode.FirstChild("destinationPortSet");
    if(!destinationPortsNode.IsNull())
    {
      XmlNode destinationPortsMember = destinationPortsNode.FirstChild("item");
      while(!destinationPortsMember.IsNull())
      {
        m_destinationPorts.push_back(destinationPortsMember);
        destinationPortsMember = destinationPortsMember.NextNode("item");
      }

      m_destinationPortsHasBeenSet = true;
    }
    XmlNode protocolsNode = resultNode.FirstChild("protocolSet");
    if(!protocolsNode.IsNull())
    {
      XmlNode protocolsMember = protocolsNode.FirstChild("item");
      while(!protocolsMember.IsNull())
      {
         m_protocols.push_back(StringUtils::ConvertToInt32(StringUtils::Trim(protocolsMember.GetText().c_str()).c_str()));
        protocolsMember = protocolsMember.NextNode("item");
      }

      m_protocolsHasBeenSet = true;
    }
    XmlNode ruleActionNode = resultNode.FirstChild("ruleAction");
    if(!ruleActionNode.IsNull())
    {
      m_ruleAction = Aws::Utils::Xml::DecodeEscapedXmlText(ruleActionNode.GetText());
      m_ruleActionHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priorityNode.GetText()).c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
  }

  return *this;
}

void FirewallStatelessRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }

  if(m_sourcesHasBeenSet)
  {
      unsigned sourcesIdx = 1;
      for(auto& item : m_sources)
      {
        oStream << location << index << locationValue << ".SourceSet." << sourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_destinationsHasBeenSet)
  {
      unsigned destinationsIdx = 1;
      for(auto& item : m_destinations)
      {
        oStream << location << index << locationValue << ".DestinationSet." << destinationsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_sourcePortsHasBeenSet)
  {
      unsigned sourcePortsIdx = 1;
      for(auto& item : m_sourcePorts)
      {
        Aws::StringStream sourcePortsSs;
        sourcePortsSs << location << index << locationValue << ".SourcePortSet." << sourcePortsIdx++;
        item.OutputToStream(oStream, sourcePortsSs.str().c_str());
      }
  }

  if(m_destinationPortsHasBeenSet)
  {
      unsigned destinationPortsIdx = 1;
      for(auto& item : m_destinationPorts)
      {
        Aws::StringStream destinationPortsSs;
        destinationPortsSs << location << index << locationValue << ".DestinationPortSet." << destinationPortsIdx++;
        item.OutputToStream(oStream, destinationPortsSs.str().c_str());
      }
  }

  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << index << locationValue << ".ProtocolSet." << protocolsIdx++ << "=" << item << "&";
      }
  }

  if(m_ruleActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleAction=" << StringUtils::URLEncode(m_ruleAction.c_str()) << "&";
  }

  if(m_priorityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Priority=" << m_priority << "&";
  }

}

void FirewallStatelessRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleGroupArnHasBeenSet)
  {
      oStream << location << ".RuleGroupArn=" << StringUtils::URLEncode(m_ruleGroupArn.c_str()) << "&";
  }
  if(m_sourcesHasBeenSet)
  {
      unsigned sourcesIdx = 1;
      for(auto& item : m_sources)
      {
        oStream << location << ".SourceSet." << sourcesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_destinationsHasBeenSet)
  {
      unsigned destinationsIdx = 1;
      for(auto& item : m_destinations)
      {
        oStream << location << ".DestinationSet." << destinationsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_sourcePortsHasBeenSet)
  {
      unsigned sourcePortsIdx = 1;
      for(auto& item : m_sourcePorts)
      {
        Aws::StringStream sourcePortsSs;
        sourcePortsSs << location <<  ".SourcePortSet." << sourcePortsIdx++;
        item.OutputToStream(oStream, sourcePortsSs.str().c_str());
      }
  }
  if(m_destinationPortsHasBeenSet)
  {
      unsigned destinationPortsIdx = 1;
      for(auto& item : m_destinationPorts)
      {
        Aws::StringStream destinationPortsSs;
        destinationPortsSs << location <<  ".DestinationPortSet." << destinationPortsIdx++;
        item.OutputToStream(oStream, destinationPortsSs.str().c_str());
      }
  }
  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << ".ProtocolSet." << protocolsIdx++ << "=" << item << "&";
      }
  }
  if(m_ruleActionHasBeenSet)
  {
      oStream << location << ".RuleAction=" << StringUtils::URLEncode(m_ruleAction.c_str()) << "&";
  }
  if(m_priorityHasBeenSet)
  {
      oStream << location << ".Priority=" << m_priority << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
