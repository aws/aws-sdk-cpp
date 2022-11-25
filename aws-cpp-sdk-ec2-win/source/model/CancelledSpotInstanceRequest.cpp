/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelledSpotInstanceRequest.h>
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

CancelledSpotInstanceRequest::CancelledSpotInstanceRequest() : 
    m_spotInstanceRequestIdHasBeenSet(false),
    m_state(CancelSpotInstanceRequestState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

CancelledSpotInstanceRequest::CancelledSpotInstanceRequest(const XmlNode& xmlNode) : 
    m_spotInstanceRequestIdHasBeenSet(false),
    m_state(CancelSpotInstanceRequestState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

CancelledSpotInstanceRequest& CancelledSpotInstanceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode spotInstanceRequestIdNode = resultNode.FirstChild("spotInstanceRequestId");
    if(!spotInstanceRequestIdNode.IsNull())
    {
      m_spotInstanceRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotInstanceRequestIdNode.GetText());
      m_spotInstanceRequestIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CancelSpotInstanceRequestStateMapper::GetCancelSpotInstanceRequestStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void CancelledSpotInstanceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << CancelSpotInstanceRequestStateMapper::GetNameForCancelSpotInstanceRequestState(m_state) << "&";
  }

}

void CancelledSpotInstanceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << CancelSpotInstanceRequestStateMapper::GetNameForCancelSpotInstanceRequestState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
