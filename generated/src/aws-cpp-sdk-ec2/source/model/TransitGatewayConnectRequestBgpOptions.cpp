/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayConnectRequestBgpOptions.h>
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

TransitGatewayConnectRequestBgpOptions::TransitGatewayConnectRequestBgpOptions() : 
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false)
{
}

TransitGatewayConnectRequestBgpOptions::TransitGatewayConnectRequestBgpOptions(const XmlNode& xmlNode) : 
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayConnectRequestBgpOptions& TransitGatewayConnectRequestBgpOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode peerAsnNode = resultNode.FirstChild("PeerAsn");
    if(!peerAsnNode.IsNull())
    {
      m_peerAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerAsnNode.GetText()).c_str()).c_str());
      m_peerAsnHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayConnectRequestBgpOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_peerAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAsn=" << m_peerAsn << "&";
  }

}

void TransitGatewayConnectRequestBgpOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_peerAsnHasBeenSet)
  {
      oStream << location << ".PeerAsn=" << m_peerAsn << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
