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

#include <aws/ec2/model/ClassicLoadBalancersConfig.h>
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

ClassicLoadBalancersConfig::ClassicLoadBalancersConfig() : 
    m_classicLoadBalancersHasBeenSet(false)
{
}

ClassicLoadBalancersConfig::ClassicLoadBalancersConfig(const XmlNode& xmlNode) : 
    m_classicLoadBalancersHasBeenSet(false)
{
  *this = xmlNode;
}

ClassicLoadBalancersConfig& ClassicLoadBalancersConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode classicLoadBalancersNode = resultNode.FirstChild("classicLoadBalancers");
    if(!classicLoadBalancersNode.IsNull())
    {
      XmlNode classicLoadBalancersMember = classicLoadBalancersNode.FirstChild("item");
      while(!classicLoadBalancersMember.IsNull())
      {
        m_classicLoadBalancers.push_back(classicLoadBalancersMember);
        classicLoadBalancersMember = classicLoadBalancersMember.NextNode("item");
      }

      m_classicLoadBalancersHasBeenSet = true;
    }
  }

  return *this;
}

void ClassicLoadBalancersConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_classicLoadBalancersHasBeenSet)
  {
      unsigned classicLoadBalancersIdx = 1;
      for(auto& item : m_classicLoadBalancers)
      {
        Aws::StringStream classicLoadBalancersSs;
        classicLoadBalancersSs << location << index << locationValue << ".ClassicLoadBalancers." << classicLoadBalancersIdx++;
        item.OutputToStream(oStream, classicLoadBalancersSs.str().c_str());
      }
  }

}

void ClassicLoadBalancersConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_classicLoadBalancersHasBeenSet)
  {
      unsigned classicLoadBalancersIdx = 1;
      for(auto& item : m_classicLoadBalancers)
      {
        Aws::StringStream classicLoadBalancersSs;
        classicLoadBalancersSs << location <<  ".ClassicLoadBalancers." << classicLoadBalancersIdx++;
        item.OutputToStream(oStream, classicLoadBalancersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
