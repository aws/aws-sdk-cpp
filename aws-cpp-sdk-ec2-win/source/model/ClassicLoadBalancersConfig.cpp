/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
