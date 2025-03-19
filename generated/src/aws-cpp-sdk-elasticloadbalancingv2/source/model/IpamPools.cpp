/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/IpamPools.h>
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

IpamPools::IpamPools(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

IpamPools& IpamPools::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv4IpamPoolIdNode = resultNode.FirstChild("Ipv4IpamPoolId");
    if(!ipv4IpamPoolIdNode.IsNull())
    {
      m_ipv4IpamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(ipv4IpamPoolIdNode.GetText());
      m_ipv4IpamPoolIdHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPools::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv4IpamPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv4IpamPoolId=" << StringUtils::URLEncode(m_ipv4IpamPoolId.c_str()) << "&";
  }

}

void IpamPools::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv4IpamPoolIdHasBeenSet)
  {
      oStream << location << ".Ipv4IpamPoolId=" << StringUtils::URLEncode(m_ipv4IpamPoolId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
