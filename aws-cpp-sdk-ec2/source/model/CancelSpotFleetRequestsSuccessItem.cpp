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

CancelSpotFleetRequestsSuccessItem::CancelSpotFleetRequestsSuccessItem() : 
    m_currentSpotFleetRequestState(BatchState::NOT_SET),
    m_currentSpotFleetRequestStateHasBeenSet(false),
    m_previousSpotFleetRequestState(BatchState::NOT_SET),
    m_previousSpotFleetRequestStateHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false)
{
}

CancelSpotFleetRequestsSuccessItem::CancelSpotFleetRequestsSuccessItem(const XmlNode& xmlNode) : 
    m_currentSpotFleetRequestState(BatchState::NOT_SET),
    m_currentSpotFleetRequestStateHasBeenSet(false),
    m_previousSpotFleetRequestState(BatchState::NOT_SET),
    m_previousSpotFleetRequestStateHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false)
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
      m_currentSpotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(currentSpotFleetRequestStateNode.GetText().c_str()).c_str());
      m_currentSpotFleetRequestStateHasBeenSet = true;
    }
    XmlNode previousSpotFleetRequestStateNode = resultNode.FirstChild("previousSpotFleetRequestState");
    if(!previousSpotFleetRequestStateNode.IsNull())
    {
      m_previousSpotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(previousSpotFleetRequestStateNode.GetText().c_str()).c_str());
      m_previousSpotFleetRequestStateHasBeenSet = true;
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = spotFleetRequestIdNode.GetText();
      m_spotFleetRequestIdHasBeenSet = true;
    }
  }

  return *this;
}

void CancelSpotFleetRequestsSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_currentSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentSpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_currentSpotFleetRequestState) << "&";
  }

  if(m_previousSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreviousSpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_previousSpotFleetRequestState) << "&";
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
      oStream << location << ".CurrentSpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_currentSpotFleetRequestState) << "&";
  }
  if(m_previousSpotFleetRequestStateHasBeenSet)
  {
      oStream << location << ".PreviousSpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_previousSpotFleetRequestState) << "&";
  }
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
