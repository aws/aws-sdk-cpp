/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerBgpOptionsRequest.h>
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

RouteServerBgpOptionsRequest::RouteServerBgpOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerBgpOptionsRequest& RouteServerBgpOptionsRequest::operator =(const XmlNode& xmlNode)
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
    XmlNode peerLivenessDetectionNode = resultNode.FirstChild("PeerLivenessDetection");
    if(!peerLivenessDetectionNode.IsNull())
    {
      m_peerLivenessDetection = RouteServerPeerLivenessModeMapper::GetRouteServerPeerLivenessModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(peerLivenessDetectionNode.GetText()).c_str()));
      m_peerLivenessDetectionHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServerBgpOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_peerAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerAsn=" << m_peerAsn << "&";
  }

  if(m_peerLivenessDetectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PeerLivenessDetection=" << StringUtils::URLEncode(RouteServerPeerLivenessModeMapper::GetNameForRouteServerPeerLivenessMode(m_peerLivenessDetection)) << "&";
  }

}

void RouteServerBgpOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_peerAsnHasBeenSet)
  {
      oStream << location << ".PeerAsn=" << m_peerAsn << "&";
  }
  if(m_peerLivenessDetectionHasBeenSet)
  {
      oStream << location << ".PeerLivenessDetection=" << StringUtils::URLEncode(RouteServerPeerLivenessModeMapper::GetNameForRouteServerPeerLivenessMode(m_peerLivenessDetection)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
