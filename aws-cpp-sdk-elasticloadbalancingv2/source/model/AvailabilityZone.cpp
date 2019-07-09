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

#include <aws/elasticloadbalancingv2/model/AvailabilityZone.h>
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

AvailabilityZone::AvailabilityZone() : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loadBalancerAddressesHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const XmlNode& xmlNode) : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loadBalancerAddressesHasBeenSet(false)
{
  *this = xmlNode;
}

AvailabilityZone& AvailabilityZone::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode zoneNameNode = resultNode.FirstChild("ZoneName");
    if(!zoneNameNode.IsNull())
    {
      m_zoneName = zoneNameNode.GetText();
      m_zoneNameHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
    XmlNode loadBalancerAddressesNode = resultNode.FirstChild("LoadBalancerAddresses");
    if(!loadBalancerAddressesNode.IsNull())
    {
      XmlNode loadBalancerAddressesMember = loadBalancerAddressesNode.FirstChild("member");
      while(!loadBalancerAddressesMember.IsNull())
      {
        m_loadBalancerAddresses.push_back(loadBalancerAddressesMember);
        loadBalancerAddressesMember = loadBalancerAddressesMember.NextNode("member");
      }

      m_loadBalancerAddressesHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_zoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneName=" << StringUtils::URLEncode(m_zoneName.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_loadBalancerAddressesHasBeenSet)
  {
      unsigned loadBalancerAddressesIdx = 1;
      for(auto& item : m_loadBalancerAddresses)
      {
        Aws::StringStream loadBalancerAddressesSs;
        loadBalancerAddressesSs << location << index << locationValue << ".LoadBalancerAddresses.member." << loadBalancerAddressesIdx++;
        item.OutputToStream(oStream, loadBalancerAddressesSs.str().c_str());
      }
  }

}

void AvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_zoneNameHasBeenSet)
  {
      oStream << location << ".ZoneName=" << StringUtils::URLEncode(m_zoneName.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_loadBalancerAddressesHasBeenSet)
  {
      unsigned loadBalancerAddressesIdx = 1;
      for(auto& item : m_loadBalancerAddresses)
      {
        Aws::StringStream loadBalancerAddressesSs;
        loadBalancerAddressesSs << location <<  ".LoadBalancerAddresses.member." << loadBalancerAddressesIdx++;
        item.OutputToStream(oStream, loadBalancerAddressesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
