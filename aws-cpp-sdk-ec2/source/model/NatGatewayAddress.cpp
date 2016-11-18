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
#include <aws/ec2/model/NatGatewayAddress.h>
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

NatGatewayAddress::NatGatewayAddress() : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

NatGatewayAddress::NatGatewayAddress(const XmlNode& xmlNode) : 
    m_publicIpHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = xmlNode;
}

NatGatewayAddress& NatGatewayAddress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode privateIpNode = resultNode.FirstChild("privateIp");
    if(!privateIpNode.IsNull())
    {
      m_privateIp = StringUtils::Trim(privateIpNode.GetText().c_str());
      m_privateIpHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = StringUtils::Trim(networkInterfaceIdNode.GetText().c_str());
      m_networkInterfaceIdHasBeenSet = true;
    }
  }

  return *this;
}

void NatGatewayAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_privateIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIp=" << StringUtils::URLEncode(m_privateIp.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

}

void NatGatewayAddress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_privateIpHasBeenSet)
  {
      oStream << location << ".PrivateIp=" << StringUtils::URLEncode(m_privateIp.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
