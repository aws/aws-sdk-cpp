/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/PathPatternConditionConfig.h>
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

PathPatternConditionConfig::PathPatternConditionConfig() : 
    m_valuesHasBeenSet(false)
{
}

PathPatternConditionConfig::PathPatternConditionConfig(const XmlNode& xmlNode) : 
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

PathPatternConditionConfig& PathPatternConditionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("member");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void PathPatternConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void PathPatternConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Values.member." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
