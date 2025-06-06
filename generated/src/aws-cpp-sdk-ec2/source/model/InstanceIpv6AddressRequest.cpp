﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceIpv6AddressRequest.h>
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

InstanceIpv6AddressRequest::InstanceIpv6AddressRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceIpv6AddressRequest& InstanceIpv6AddressRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6AddressNode = resultNode.FirstChild("Ipv6Address");
    if(!ipv6AddressNode.IsNull())
    {
      m_ipv6Address = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressNode.GetText());
      m_ipv6AddressHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceIpv6AddressRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }

}

void InstanceIpv6AddressRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
