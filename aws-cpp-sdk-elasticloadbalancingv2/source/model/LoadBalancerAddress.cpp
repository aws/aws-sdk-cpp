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

#include <aws/elasticloadbalancingv2/model/LoadBalancerAddress.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

LoadBalancerAddress::LoadBalancerAddress() : 
    m_ipAddressHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIPv4AddressHasBeenSet(false)
{
}

LoadBalancerAddress::LoadBalancerAddress(const XmlNode& xmlNode) : 
    m_ipAddressHasBeenSet(false),
    m_allocationIdHasBeenSet(false),
    m_privateIPv4AddressHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerAddress& LoadBalancerAddress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipAddressNode = resultNode.FirstChild("IpAddress");
    if(!ipAddressNode.IsNull())
    {
      m_ipAddress = Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressNode.GetText());
      m_ipAddressHasBeenSet = true;
    }
    XmlNode allocationIdNode = resultNode.FirstChild("AllocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode privateIPv4AddressNode = resultNode.FirstChild("PrivateIPv4Address");
    if(!privateIPv4AddressNode.IsNull())
    {
      m_privateIPv4Address = Aws::Utils::Xml::DecodeEscapedXmlText(privateIPv4AddressNode.GetText());
      m_privateIPv4AddressHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancerAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpAddress=" << StringUtils::URLEncode(m_ipAddress.c_str()) << "&";
  }

  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_privateIPv4AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIPv4Address=" << StringUtils::URLEncode(m_privateIPv4Address.c_str()) << "&";
  }

}

void LoadBalancerAddress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipAddressHasBeenSet)
  {
      oStream << location << ".IpAddress=" << StringUtils::URLEncode(m_ipAddress.c_str()) << "&";
  }
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_privateIPv4AddressHasBeenSet)
  {
      oStream << location << ".PrivateIPv4Address=" << StringUtils::URLEncode(m_privateIPv4Address.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
