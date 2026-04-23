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

#include <aws/elasticloadbalancingv2/model/QueryStringConditionConfig.h>
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

QueryStringConditionConfig::QueryStringConditionConfig() : 
    m_valuesHasBeenSet(false)
{
}

QueryStringConditionConfig::QueryStringConditionConfig(const XmlNode& xmlNode) : 
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

QueryStringConditionConfig& QueryStringConditionConfig::operator =(const XmlNode& xmlNode)
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
        m_values.push_back(valuesMember);
        valuesMember = valuesMember.NextNode("member");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void QueryStringConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        Aws::StringStream valuesSs;
        valuesSs << location << index << locationValue << ".Values.member." << valuesIdx++;
        item.OutputToStream(oStream, valuesSs.str().c_str());
      }
  }

}

void QueryStringConditionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        Aws::StringStream valuesSs;
        valuesSs << location <<  ".Values.member." << valuesIdx++;
        item.OutputToStream(oStream, valuesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
