/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorFilterRule.h>
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

TrafficMirrorFilterRule::TrafficMirrorFilterRule() : 
    m_trafficMirrorFilterRuleIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_trafficDirection(TrafficDirection::NOT_SET),
    m_trafficDirectionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_ruleAction(TrafficMirrorRuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_protocol(0),
    m_protocolHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TrafficMirrorFilterRule::TrafficMirrorFilterRule(const XmlNode& xmlNode) : 
    m_trafficMirrorFilterRuleIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_trafficDirection(TrafficDirection::NOT_SET),
    m_trafficDirectionHasBeenSet(false),
    m_ruleNumber(0),
    m_ruleNumberHasBeenSet(false),
    m_ruleAction(TrafficMirrorRuleAction::NOT_SET),
    m_ruleActionHasBeenSet(false),
    m_protocol(0),
    m_protocolHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficMirrorFilterRule& TrafficMirrorFilterRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trafficMirrorFilterRuleIdNode = resultNode.FirstChild("trafficMirrorFilterRuleId");
    if(!trafficMirrorFilterRuleIdNode.IsNull())
    {
      m_trafficMirrorFilterRuleId = Aws::Utils::Xml::DecodeEscapedXmlText(trafficMirrorFilterRuleIdNode.GetText());
      m_trafficMirrorFilterRuleIdHasBeenSet = true;
    }
    XmlNode trafficMirrorFilterIdNode = resultNode.FirstChild("trafficMirrorFilterId");
    if(!trafficMirrorFilterIdNode.IsNull())
    {
      m_trafficMirrorFilterId = Aws::Utils::Xml::DecodeEscapedXmlText(trafficMirrorFilterIdNode.GetText());
      m_trafficMirrorFilterIdHasBeenSet = true;
    }
    XmlNode trafficDirectionNode = resultNode.FirstChild("trafficDirection");
    if(!trafficDirectionNode.IsNull())
    {
      m_trafficDirection = TrafficDirectionMapper::GetTrafficDirectionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficDirectionNode.GetText()).c_str()).c_str());
      m_trafficDirectionHasBeenSet = true;
    }
    XmlNode ruleNumberNode = resultNode.FirstChild("ruleNumber");
    if(!ruleNumberNode.IsNull())
    {
      m_ruleNumber = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleNumberNode.GetText()).c_str()).c_str());
      m_ruleNumberHasBeenSet = true;
    }
    XmlNode ruleActionNode = resultNode.FirstChild("ruleAction");
    if(!ruleActionNode.IsNull())
    {
      m_ruleAction = TrafficMirrorRuleActionMapper::GetTrafficMirrorRuleActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ruleActionNode.GetText()).c_str()).c_str());
      m_ruleActionHasBeenSet = true;
    }
    XmlNode protocolNode = resultNode.FirstChild("protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()).c_str());
      m_protocolHasBeenSet = true;
    }
    XmlNode destinationPortRangeNode = resultNode.FirstChild("destinationPortRange");
    if(!destinationPortRangeNode.IsNull())
    {
      m_destinationPortRange = destinationPortRangeNode;
      m_destinationPortRangeHasBeenSet = true;
    }
    XmlNode sourcePortRangeNode = resultNode.FirstChild("sourcePortRange");
    if(!sourcePortRangeNode.IsNull())
    {
      m_sourcePortRange = sourcePortRangeNode;
      m_sourcePortRangeHasBeenSet = true;
    }
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrBlockNode.GetText());
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode sourceCidrBlockNode = resultNode.FirstChild("sourceCidrBlock");
    if(!sourceCidrBlockNode.IsNull())
    {
      m_sourceCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCidrBlockNode.GetText());
      m_sourceCidrBlockHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficMirrorFilterRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trafficMirrorFilterRuleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorFilterRuleId=" << StringUtils::URLEncode(m_trafficMirrorFilterRuleId.c_str()) << "&";
  }

  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_trafficDirectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficDirection=" << TrafficDirectionMapper::GetNameForTrafficDirection(m_trafficDirection) << "&";
  }

  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleNumber=" << m_ruleNumber << "&";
  }

  if(m_ruleActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleAction=" << TrafficMirrorRuleActionMapper::GetNameForTrafficMirrorRuleAction(m_ruleAction) << "&";
  }

  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << m_protocol << "&";
  }

  if(m_destinationPortRangeHasBeenSet)
  {
      Aws::StringStream destinationPortRangeLocationAndMemberSs;
      destinationPortRangeLocationAndMemberSs << location << index << locationValue << ".DestinationPortRange";
      m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMemberSs.str().c_str());
  }

  if(m_sourcePortRangeHasBeenSet)
  {
      Aws::StringStream sourcePortRangeLocationAndMemberSs;
      sourcePortRangeLocationAndMemberSs << location << index << locationValue << ".SourcePortRange";
      m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMemberSs.str().c_str());
  }

  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_sourceCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void TrafficMirrorFilterRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trafficMirrorFilterRuleIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorFilterRuleId=" << StringUtils::URLEncode(m_trafficMirrorFilterRuleId.c_str()) << "&";
  }
  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }
  if(m_trafficDirectionHasBeenSet)
  {
      oStream << location << ".TrafficDirection=" << TrafficDirectionMapper::GetNameForTrafficDirection(m_trafficDirection) << "&";
  }
  if(m_ruleNumberHasBeenSet)
  {
      oStream << location << ".RuleNumber=" << m_ruleNumber << "&";
  }
  if(m_ruleActionHasBeenSet)
  {
      oStream << location << ".RuleAction=" << TrafficMirrorRuleActionMapper::GetNameForTrafficMirrorRuleAction(m_ruleAction) << "&";
  }
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << m_protocol << "&";
  }
  if(m_destinationPortRangeHasBeenSet)
  {
      Aws::String destinationPortRangeLocationAndMember(location);
      destinationPortRangeLocationAndMember += ".DestinationPortRange";
      m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMember.c_str());
  }
  if(m_sourcePortRangeHasBeenSet)
  {
      Aws::String sourcePortRangeLocationAndMember(location);
      sourcePortRangeLocationAndMember += ".SourcePortRange";
      m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMember.c_str());
  }
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_sourceCidrBlockHasBeenSet)
  {
      oStream << location << ".SourceCidrBlock=" << StringUtils::URLEncode(m_sourceCidrBlock.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
