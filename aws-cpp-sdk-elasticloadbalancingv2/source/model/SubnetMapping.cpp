/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SubnetMapping.h>
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

SubnetMapping::SubnetMapping() : 
    m_subnetIdHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIPv4AddressHasBeenSet(false),
    m_iPv6AddressHasBeenSet(false)
{
}

SubnetMapping::SubnetMapping(const XmlNode& xmlNode) : 
    m_subnetIdHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIPv4AddressHasBeenSet(false),
    m_iPv6AddressHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetMapping& SubnetMapping::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode allocationIdNode = resultNode.FirstChild("AllocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode privateIPv4AddressNode = resultNode.FirstChild("PrivateIPv4Address");
    if(!privateIPv4AddressNode.IsNull())
    {
      m_privateIPv4Address = Aws::Utils::Xml::DecodeEscapedXmlText(privateIPv4AddressNode.GetText());
      m_privateIPv4AddressHasBeenSet = true;
    }
    XmlNode iPv6AddressNode = resultNode.FirstChild("IPv6Address");
    if(!iPv6AddressNode.IsNull())
    {
      m_iPv6Address = Aws::Utils::Xml::DecodeEscapedXmlText(iPv6AddressNode.GetText());
      m_iPv6AddressHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_privateIPv4AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIPv4Address=" << StringUtils::URLEncode(m_privateIPv4Address.c_str()) << "&";
  }

  if(m_iPv6AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".IPv6Address=" << StringUtils::URLEncode(m_iPv6Address.c_str()) << "&";
  }

}

void SubnetMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_privateIPv4AddressHasBeenSet)
  {
      oStream << location << ".PrivateIPv4Address=" << StringUtils::URLEncode(m_privateIPv4Address.c_str()) << "&";
  }
  if(m_iPv6AddressHasBeenSet)
  {
      oStream << location << ".IPv6Address=" << StringUtils::URLEncode(m_iPv6Address.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
