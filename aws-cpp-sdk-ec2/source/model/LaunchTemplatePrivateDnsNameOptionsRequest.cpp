/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplatePrivateDnsNameOptionsRequest.h>
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

LaunchTemplatePrivateDnsNameOptionsRequest::LaunchTemplatePrivateDnsNameOptionsRequest() : 
    m_hostnameType(HostnameType::NOT_SET),
    m_hostnameTypeHasBeenSet(false),
    m_enableResourceNameDnsARecord(false),
    m_enableResourceNameDnsARecordHasBeenSet(false),
    m_enableResourceNameDnsAAAARecord(false),
    m_enableResourceNameDnsAAAARecordHasBeenSet(false)
{
}

LaunchTemplatePrivateDnsNameOptionsRequest::LaunchTemplatePrivateDnsNameOptionsRequest(const XmlNode& xmlNode) : 
    m_hostnameType(HostnameType::NOT_SET),
    m_hostnameTypeHasBeenSet(false),
    m_enableResourceNameDnsARecord(false),
    m_enableResourceNameDnsARecordHasBeenSet(false),
    m_enableResourceNameDnsAAAARecord(false),
    m_enableResourceNameDnsAAAARecordHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplatePrivateDnsNameOptionsRequest& LaunchTemplatePrivateDnsNameOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostnameTypeNode = resultNode.FirstChild("HostnameType");
    if(!hostnameTypeNode.IsNull())
    {
      m_hostnameType = HostnameTypeMapper::GetHostnameTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hostnameTypeNode.GetText()).c_str()).c_str());
      m_hostnameTypeHasBeenSet = true;
    }
    XmlNode enableResourceNameDnsARecordNode = resultNode.FirstChild("EnableResourceNameDnsARecord");
    if(!enableResourceNameDnsARecordNode.IsNull())
    {
      m_enableResourceNameDnsARecord = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableResourceNameDnsARecordNode.GetText()).c_str()).c_str());
      m_enableResourceNameDnsARecordHasBeenSet = true;
    }
    XmlNode enableResourceNameDnsAAAARecordNode = resultNode.FirstChild("EnableResourceNameDnsAAAARecord");
    if(!enableResourceNameDnsAAAARecordNode.IsNull())
    {
      m_enableResourceNameDnsAAAARecord = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableResourceNameDnsAAAARecordNode.GetText()).c_str()).c_str());
      m_enableResourceNameDnsAAAARecordHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplatePrivateDnsNameOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hostnameTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostnameType=" << HostnameTypeMapper::GetNameForHostnameType(m_hostnameType) << "&";
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

void LaunchTemplatePrivateDnsNameOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hostnameTypeHasBeenSet)
  {
      oStream << location << ".HostnameType=" << HostnameTypeMapper::GetNameForHostnameType(m_hostnameType) << "&";
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
