﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptions.h>
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

LaunchTemplatePrivateDnsNameOptions::LaunchTemplatePrivateDnsNameOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LaunchTemplatePrivateDnsNameOptions& LaunchTemplatePrivateDnsNameOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostnameTypeNode = resultNode.FirstChild("hostnameType");
    if(!hostnameTypeNode.IsNull())
    {
      m_hostnameType = HostnameTypeMapper::GetHostnameTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hostnameTypeNode.GetText()).c_str()));
      m_hostnameTypeHasBeenSet = true;
    }
    XmlNode enableResourceNameDnsARecordNode = resultNode.FirstChild("enableResourceNameDnsARecord");
    if(!enableResourceNameDnsARecordNode.IsNull())
    {
      m_enableResourceNameDnsARecord = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableResourceNameDnsARecordNode.GetText()).c_str()).c_str());
      m_enableResourceNameDnsARecordHasBeenSet = true;
    }
    XmlNode enableResourceNameDnsAAAARecordNode = resultNode.FirstChild("enableResourceNameDnsAAAARecord");
    if(!enableResourceNameDnsAAAARecordNode.IsNull())
    {
      m_enableResourceNameDnsAAAARecord = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableResourceNameDnsAAAARecordNode.GetText()).c_str()).c_str());
      m_enableResourceNameDnsAAAARecordHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplatePrivateDnsNameOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hostnameTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostnameType=" << StringUtils::URLEncode(HostnameTypeMapper::GetNameForHostnameType(m_hostnameType)) << "&";
  }

  if(m_enableResourceNameDnsARecordHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnableResourceNameDnsARecord=" << std::boolalpha << m_enableResourceNameDnsARecord << "&";
  }

  if(m_enableResourceNameDnsAAAARecordHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnableResourceNameDnsAAAARecord=" << std::boolalpha << m_enableResourceNameDnsAAAARecord << "&";
  }

}

void LaunchTemplatePrivateDnsNameOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hostnameTypeHasBeenSet)
  {
      oStream << location << ".HostnameType=" << StringUtils::URLEncode(HostnameTypeMapper::GetNameForHostnameType(m_hostnameType)) << "&";
  }
  if(m_enableResourceNameDnsARecordHasBeenSet)
  {
      oStream << location << ".EnableResourceNameDnsARecord=" << std::boolalpha << m_enableResourceNameDnsARecord << "&";
  }
  if(m_enableResourceNameDnsAAAARecordHasBeenSet)
  {
      oStream << location << ".EnableResourceNameDnsAAAARecord=" << std::boolalpha << m_enableResourceNameDnsAAAARecord << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
