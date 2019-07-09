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

#include <aws/elasticloadbalancingv2/model/RulePriorityPair.h>
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

RulePriorityPair::RulePriorityPair() : 
    m_ruleArnHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

RulePriorityPair::RulePriorityPair(const XmlNode& xmlNode) : 
    m_ruleArnHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = xmlNode;
}

RulePriorityPair& RulePriorityPair::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleArnNode = resultNode.FirstChild("RuleArn");
    if(!ruleArnNode.IsNull())
    {
      m_ruleArn = ruleArnNode.GetText();
      m_ruleArnHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(priorityNode.GetText().c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
  }

  return *this;
}

void RulePriorityPair::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }

  if(m_priorityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Priority=" << m_priority << "&";
  }

}

void RulePriorityPair::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleArnHasBeenSet)
  {
      oStream << location << ".RuleArn=" << StringUtils::URLEncode(m_ruleArn.c_str()) << "&";
  }
  if(m_priorityHasBeenSet)
  {
      oStream << location << ".Priority=" << m_priority << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
