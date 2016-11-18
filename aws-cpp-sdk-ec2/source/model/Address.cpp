﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/Address.h>
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

Address::Address() : 
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_domain(DomainType::NOT_SET),
    m_domainHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceOwnerIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

Address::Address(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_domain(DomainType::NOT_SET),
    m_domainHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceOwnerIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

Address& Address::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = StringUtils::Trim(instanceIdNode.GetText().c_str());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = StringUtils::Trim(publicIpNode.GetText().c_str());
      m_publicIpHasBeenSet = true;
    }
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = StringUtils::Trim(allocationIdNode.GetText().c_str());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = StringUtils::Trim(associationIdNode.GetText().c_str());
      m_associationIdHasBeenSet = true;
    }
    XmlNode domainNode = resultNode.FirstChild("domain");
    if(!domainNode.IsNull())
    {
      m_domain = DomainTypeMapper::GetDomainTypeForName(StringUtils::Trim(domainNode.GetText().c_str()).c_str());
      m_domainHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = StringUtils::Trim(networkInterfaceIdNode.GetText().c_str());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode networkInterfaceOwnerIdNode = resultNode.FirstChild("networkInterfaceOwnerId");
    if(!networkInterfaceOwnerIdNode.IsNull())
    {
      m_networkInterfaceOwnerId = StringUtils::Trim(networkInterfaceOwnerIdNode.GetText().c_str());
      m_networkInterfaceOwnerIdHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = StringUtils::Trim(privateIpAddressNode.GetText().c_str());
      m_privateIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void Address::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_domainHasBeenSet)
  {
      oStream << location << index << locationValue << ".Domain=" << DomainTypeMapper::GetNameForDomainType(m_domain) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_networkInterfaceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceOwnerId=" << StringUtils::URLEncode(m_networkInterfaceOwnerId.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

}

void Address::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_domainHasBeenSet)
  {
      oStream << location << ".Domain=" << DomainTypeMapper::GetNameForDomainType(m_domain) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_networkInterfaceOwnerIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceOwnerId=" << StringUtils::URLEncode(m_networkInterfaceOwnerId.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
