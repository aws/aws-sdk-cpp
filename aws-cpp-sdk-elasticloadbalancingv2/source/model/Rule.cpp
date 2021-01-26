/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/Rule.h>
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

Rule::Rule() : 
    m_ruleArnHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
}

Rule::Rule(const XmlNode& xmlNode) : 
    m_ruleArnHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
  *this = xmlNode;
}

Rule& Rule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleArnNode = resultNode.FirstChild("RuleArn");
    if(!ruleArnNode.IsNull())
    {
      m_ruleArn = Aws::Utils::Xml::DecodeEscapedXmlText(ruleArnNode.GetText());
      m_ruleArnHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = Aws::Utils::Xml::DecodeEscapedXmlText(priorityNode.GetText());
      m_priorityHasBeenSet = true;
    }
    XmlNode conditionsNode = resultNode.FirstChild("Conditions");
    if(!conditionsNode.IsNull())
    {
      XmlNode conditionsMember = conditionsNode.FirstChild("member");
      while(!conditionsMember.IsNull())
      {
        m_conditions.push_back(conditionsMember);
        conditionsMember = conditionsMember.NextNode("member");
      }

      m_conditionsHasBeenSet = true;
    }
    XmlNode actionsNode = resultNode.FirstChild("Actions");
    if(!actionsNode.IsNull())
    {
      XmlNode actionsMember = actionsNode.FirstChild("member");
      while(!actionsMember.IsNull())
      {
        m_actions.push_back(actionsMember);
        actionsMember = actionsMember.NextNode("member");
      }

      m_actionsHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void Rule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }

  if(m_priorityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Priority=" << StringUtils::URLEncode(m_priority.c_str()) << "&";
  }

  if(m_conditionsHasBeenSet)
  {
      unsigned conditionsIdx = 1;
      for(auto& item : m_conditions)
      {
        Aws::StringStream conditionsSs;
        conditionsSs << location << index << locationValue << ".Conditions.member." << conditionsIdx++;
        item.OutputToStream(oStream, conditionsSs.str().c_str());
      }
  }

  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location << index << locationValue << ".Actions.member." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

}

void Rule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleArnHasBeenSet)
  {
      oStream << location << ".RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }
  if(m_priorityHasBeenSet)
  {
      oStream << location << ".Priority=" << StringUtils::URLEncode(m_priority.c_str()) << "&";
  }
  if(m_conditionsHasBeenSet)
  {
      unsigned conditionsIdx = 1;
      for(auto& item : m_conditions)
      {
        Aws::StringStream conditionsSs;
        conditionsSs << location <<  ".Conditions.member." << conditionsIdx++;
        item.OutputToStream(oStream, conditionsSs.str().c_str());
      }
  }
  if(m_actionsHasBeenSet)
  {
      unsigned actionsIdx = 1;
      for(auto& item : m_actions)
      {
        Aws::StringStream actionsSs;
        actionsSs << location <<  ".Actions.member." << actionsIdx++;
        item.OutputToStream(oStream, actionsSs.str().c_str());
      }
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
