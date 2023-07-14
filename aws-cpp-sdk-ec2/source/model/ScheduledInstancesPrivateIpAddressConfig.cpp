/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ScheduledInstancesPrivateIpAddressConfig.h>
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

ScheduledInstancesPrivateIpAddressConfig::ScheduledInstancesPrivateIpAddressConfig() : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

ScheduledInstancesPrivateIpAddressConfig::ScheduledInstancesPrivateIpAddressConfig(const XmlNode& xmlNode) : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstancesPrivateIpAddressConfig& ScheduledInstancesPrivateIpAddressConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode primaryNode = resultNode.FirstChild("Primary");
    if(!primaryNode.IsNull())
    {
      m_primary = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(primaryNode.GetText()).c_str()).c_str());
      m_primaryHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("PrivateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesPrivateIpAddressConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_primaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Primary=" << std::boolalpha << m_primary << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

}

void ScheduledInstancesPrivateIpAddressConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_primaryHasBeenSet)
  {
      oStream << location << ".Primary=" << std::boolalpha << m_primary << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
