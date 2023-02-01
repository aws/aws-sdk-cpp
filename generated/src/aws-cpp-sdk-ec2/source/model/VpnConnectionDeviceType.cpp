/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpnConnectionDeviceType.h>
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

VpnConnectionDeviceType::VpnConnectionDeviceType() : 
    m_vpnConnectionDeviceTypeIdHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_softwareHasBeenSet(false)
{
}

VpnConnectionDeviceType::VpnConnectionDeviceType(const XmlNode& xmlNode) : 
    m_vpnConnectionDeviceTypeIdHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_softwareHasBeenSet(false)
{
  *this = xmlNode;
}

VpnConnectionDeviceType& VpnConnectionDeviceType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpnConnectionDeviceTypeIdNode = resultNode.FirstChild("vpnConnectionDeviceTypeId");
    if(!vpnConnectionDeviceTypeIdNode.IsNull())
    {
      m_vpnConnectionDeviceTypeId = Aws::Utils::Xml::DecodeEscapedXmlText(vpnConnectionDeviceTypeIdNode.GetText());
      m_vpnConnectionDeviceTypeIdHasBeenSet = true;
    }
    XmlNode vendorNode = resultNode.FirstChild("vendor");
    if(!vendorNode.IsNull())
    {
      m_vendor = Aws::Utils::Xml::DecodeEscapedXmlText(vendorNode.GetText());
      m_vendorHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText());
      m_platformHasBeenSet = true;
    }
    XmlNode softwareNode = resultNode.FirstChild("software");
    if(!softwareNode.IsNull())
    {
      m_software = Aws::Utils::Xml::DecodeEscapedXmlText(softwareNode.GetText());
      m_softwareHasBeenSet = true;
    }
  }

  return *this;
}

void VpnConnectionDeviceType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpnConnectionDeviceTypeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnConnectionDeviceTypeId=" << StringUtils::URLEncode(m_vpnConnectionDeviceTypeId.c_str()) << "&";
  }

  if(m_vendorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vendor=" << StringUtils::URLEncode(m_vendor.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_softwareHasBeenSet)
  {
      oStream << location << index << locationValue << ".Software=" << StringUtils::URLEncode(m_software.c_str()) << "&";
  }

}

void VpnConnectionDeviceType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpnConnectionDeviceTypeIdHasBeenSet)
  {
      oStream << location << ".VpnConnectionDeviceTypeId=" << StringUtils::URLEncode(m_vpnConnectionDeviceTypeId.c_str()) << "&";
  }
  if(m_vendorHasBeenSet)
  {
      oStream << location << ".Vendor=" << StringUtils::URLEncode(m_vendor.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_softwareHasBeenSet)
  {
      oStream << location << ".Software=" << StringUtils::URLEncode(m_software.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
