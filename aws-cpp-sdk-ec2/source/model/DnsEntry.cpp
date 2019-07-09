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

#include <aws/ec2/model/DnsEntry.h>
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

DnsEntry::DnsEntry() : 
    m_dnsNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

DnsEntry::DnsEntry(const XmlNode& xmlNode) : 
    m_dnsNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

DnsEntry& DnsEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsNameNode = resultNode.FirstChild("dnsName");
    if(!dnsNameNode.IsNull())
    {
      m_dnsName = dnsNameNode.GetText();
      m_dnsNameHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("hostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = hostedZoneIdNode.GetText();
      m_hostedZoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void DnsEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }

  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }

}

void DnsEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsNameHasBeenSet)
  {
      oStream << location << ".DnsName=" << StringUtils::URLEncode(m_dnsName.c_str()) << "&";
  }
  if(m_hostedZoneIdHasBeenSet)
  {
      oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
