/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PciId.h>
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

PciId::PciId() : 
    m_deviceIdHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_subsystemIdHasBeenSet(false),
    m_subsystemVendorIdHasBeenSet(false)
{
}

PciId::PciId(const XmlNode& xmlNode) : 
    m_deviceIdHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_subsystemIdHasBeenSet(false),
    m_subsystemVendorIdHasBeenSet(false)
{
  *this = xmlNode;
}

PciId& PciId::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deviceIdNode = resultNode.FirstChild("DeviceId");
    if(!deviceIdNode.IsNull())
    {
      m_deviceId = Aws::Utils::Xml::DecodeEscapedXmlText(deviceIdNode.GetText());
      m_deviceIdHasBeenSet = true;
    }
    XmlNode vendorIdNode = resultNode.FirstChild("VendorId");
    if(!vendorIdNode.IsNull())
    {
      m_vendorId = Aws::Utils::Xml::DecodeEscapedXmlText(vendorIdNode.GetText());
      m_vendorIdHasBeenSet = true;
    }
    XmlNode subsystemIdNode = resultNode.FirstChild("SubsystemId");
    if(!subsystemIdNode.IsNull())
    {
      m_subsystemId = Aws::Utils::Xml::DecodeEscapedXmlText(subsystemIdNode.GetText());
      m_subsystemIdHasBeenSet = true;
    }
    XmlNode subsystemVendorIdNode = resultNode.FirstChild("SubsystemVendorId");
    if(!subsystemVendorIdNode.IsNull())
    {
      m_subsystemVendorId = Aws::Utils::Xml::DecodeEscapedXmlText(subsystemVendorIdNode.GetText());
      m_subsystemVendorIdHasBeenSet = true;
    }
  }

  return *this;
}

void PciId::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceId=" << StringUtils::URLEncode(m_deviceId.c_str()) << "&";
  }

  if(m_vendorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VendorId=" << StringUtils::URLEncode(m_vendorId.c_str()) << "&";
  }

  if(m_subsystemIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubsystemId=" << StringUtils::URLEncode(m_subsystemId.c_str()) << "&";
  }

  if(m_subsystemVendorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubsystemVendorId=" << StringUtils::URLEncode(m_subsystemVendorId.c_str()) << "&";
  }

}

void PciId::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deviceIdHasBeenSet)
  {
      oStream << location << ".DeviceId=" << StringUtils::URLEncode(m_deviceId.c_str()) << "&";
  }
  if(m_vendorIdHasBeenSet)
  {
      oStream << location << ".VendorId=" << StringUtils::URLEncode(m_vendorId.c_str()) << "&";
  }
  if(m_subsystemIdHasBeenSet)
  {
      oStream << location << ".SubsystemId=" << StringUtils::URLEncode(m_subsystemId.c_str()) << "&";
  }
  if(m_subsystemVendorIdHasBeenSet)
  {
      oStream << location << ".SubsystemVendorId=" << StringUtils::URLEncode(m_subsystemVendorId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
