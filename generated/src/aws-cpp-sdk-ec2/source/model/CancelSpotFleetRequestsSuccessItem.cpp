/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotFleetRequestsSuccessItem.h>
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

CancelSpotFleetRequestsSuccessItem::CancelSpotFleetRequestsSuccessItem(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CancelSpotFleetRequestsSuccessItem& CancelSpotFleetRequestsSuccessItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode currentSpotFleetRequestStateNode = resultNode.FirstChild("currentSpotFleetRequestState");
    if(!currentSpotFleetRequestStateNode.IsNull())
    {
      m_currentSpotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentSpotFleetRequestStateNode.GetText()).c_str()));
      m_currentSpotFleetRequestStateHasBeenSet = true;
    }
    XmlNode previousSpotFleetRequestStateNode = resultNode.FirstChild("previousSpotFleetRequestState");
    if(!previousSpotFleetRequestStateNode.IsNull())
    {
      m_previousSpotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(previousSpotFleetRequestStateNode.GetText()).c_str()));
      m_previousSpotFleetRequestStateHasBeenSet = true;
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestIdNode.GetText());
      m_spotFleetRequestIdHasBeenSet = true;
    }
  }

  return *this;
}

void CancelSpotFleetRequestsSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currentSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentSpotFleetRequestState=" << StringUtils::URLEncode(BatchStateMapper::GetNameForBatchState(m_currentSpotFleetRequestState)) << "&";
  }

  if(m_previousSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreviousSpotFleetRequestState=" << StringUtils::URLEncode(BatchStateMapper::GetNameForBatchState(m_previousSpotFleetRequestState)) << "&";
  }

  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

}

void CancelSpotFleetRequestsSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_currentSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << ".CurrentSpotFleetRequestState=" << StringUtils::URLEncode(BatchStateMapper::GetNameForBatchState(m_currentSpotFleetRequestState)) << "&";
  }
  if(m_previousSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << ".PreviousSpotFleetRequestState=" << StringUtils::URLEncode(BatchStateMapper::GetNameForBatchState(m_previousSpotFleetRequestState)) << "&";
  }
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
