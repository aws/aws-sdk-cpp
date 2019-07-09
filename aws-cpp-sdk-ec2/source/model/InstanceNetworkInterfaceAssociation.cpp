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

#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>
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

InstanceNetworkInterfaceAssociation::InstanceNetworkInterfaceAssociation() : 
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
}

InstanceNetworkInterfaceAssociation::InstanceNetworkInterfaceAssociation(const XmlNode& xmlNode) : 
    m_ipOwnerIdHasBeenSet(false),
    m_publicDnsNameHasBeenSet(false),
    m_publicIpHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceNetworkInterfaceAssociation& InstanceNetworkInterfaceAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipOwnerIdNode = resultNode.FirstChild("ipOwnerId");
    if(!ipOwnerIdNode.IsNull())
    {
      m_ipOwnerId = ipOwnerIdNode.GetText();
      m_ipOwnerIdHasBeenSet = true;
    }
    XmlNode publicDnsNameNode = resultNode.FirstChild("publicDnsName");
    if(!publicDnsNameNode.IsNull())
    {
      m_publicDnsName = publicDnsNameNode.GetText();
      m_publicDnsNameHasBeenSet = true;
    }
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = publicIpNode.GetText();
      m_publicIpHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceNetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpOwnerId=" << StringUtils::URLEncode(m_ipOwnerId.c_str()) << "&";
  }

  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

}

void InstanceNetworkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipOwnerIdHasBeenSet)
  {
      oStream << location << ".IpOwnerId=" << StringUtils::URLEncode(m_ipOwnerId.c_str()) << "&";
  }
  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
