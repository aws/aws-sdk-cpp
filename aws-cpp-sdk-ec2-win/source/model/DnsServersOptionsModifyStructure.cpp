﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DnsServersOptionsModifyStructure.h>
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

DnsServersOptionsModifyStructure::DnsServersOptionsModifyStructure() : 
    m_customDnsServersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

DnsServersOptionsModifyStructure::DnsServersOptionsModifyStructure(const XmlNode& xmlNode) : 
    m_customDnsServersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = xmlNode;
}

DnsServersOptionsModifyStructure& DnsServersOptionsModifyStructure::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customDnsServersNode = resultNode.FirstChild("CustomDnsServers");
    if(!customDnsServersNode.IsNull())
    {
      XmlNode customDnsServersMember = customDnsServersNode.FirstChild("item");
      while(!customDnsServersMember.IsNull())
      {
        m_customDnsServers.push_back(customDnsServersMember.GetText());
        customDnsServersMember = customDnsServersMember.NextNode("item");
      }

      m_customDnsServersHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
  }

  return *this;
}

void DnsServersOptionsModifyStructure::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customDnsServersHasBeenSet)
  {
      unsigned customDnsServersIdx = 1;
      for(auto& item : m_customDnsServers)
      {
        oStream << location << index << locationValue << ".CustomDnsServers." << customDnsServersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

}

void DnsServersOptionsModifyStructure::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customDnsServersHasBeenSet)
  {
      unsigned customDnsServersIdx = 1;
      for(auto& item : m_customDnsServers)
      {
        oStream << location << ".Item." << customDnsServersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
