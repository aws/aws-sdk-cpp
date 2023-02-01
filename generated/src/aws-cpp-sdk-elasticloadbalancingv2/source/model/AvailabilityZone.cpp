/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_outpostIdHasBeenSet(false),
    m_loadBalancerAddressesHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(const XmlNode& xmlNode) : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_outpostIdHasBeenSet(false),
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
      m_zoneName = Aws::Utils::Xml::DecodeEscapedXmlText(zoneNameNode.GetText());
      m_zoneNameHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode outpostIdNode = resultNode.FirstChild("OutpostId");
    if(!outpostIdNode.IsNull())
    {
      m_outpostId = Aws::Utils::Xml::DecodeEscapedXmlText(outpostIdNode.GetText());
      m_outpostIdHasBeenSet = true;
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

  if(m_outpostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostId=" << StringUtils::URLEncode(m_outpostId.c_str()) << "&";
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
  if(m_outpostIdHasBeenSet)
  {
      oStream << location << ".OutpostId=" << StringUtils::URLEncode(m_outpostId.c_str()) << "&";
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
