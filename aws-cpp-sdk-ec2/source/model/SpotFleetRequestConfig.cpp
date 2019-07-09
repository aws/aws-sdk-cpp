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

#include <aws/ec2/model/SpotFleetRequestConfig.h>
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

SpotFleetRequestConfig::SpotFleetRequestConfig() : 
    m_activityStatus(ActivityStatus::NOT_SET),
    m_activityStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false),
    m_spotFleetRequestState(BatchState::NOT_SET),
    m_spotFleetRequestStateHasBeenSet(false)
{
}

SpotFleetRequestConfig::SpotFleetRequestConfig(const XmlNode& xmlNode) : 
    m_activityStatus(ActivityStatus::NOT_SET),
    m_activityStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false),
    m_spotFleetRequestState(BatchState::NOT_SET),
    m_spotFleetRequestStateHasBeenSet(false)
{
  *this = xmlNode;
}

SpotFleetRequestConfig& SpotFleetRequestConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activityStatusNode = resultNode.FirstChild("activityStatus");
    if(!activityStatusNode.IsNull())
    {
      m_activityStatus = ActivityStatusMapper::GetActivityStatusForName(StringUtils::Trim(activityStatusNode.GetText().c_str()).c_str());
      m_activityStatusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode spotFleetRequestConfigNode = resultNode.FirstChild("spotFleetRequestConfig");
    if(!spotFleetRequestConfigNode.IsNull())
    {
      m_spotFleetRequestConfig = spotFleetRequestConfigNode;
      m_spotFleetRequestConfigHasBeenSet = true;
    }
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = spotFleetRequestIdNode.GetText();
      m_spotFleetRequestIdHasBeenSet = true;
    }
    XmlNode spotFleetRequestStateNode = resultNode.FirstChild("spotFleetRequestState");
    if(!spotFleetRequestStateNode.IsNull())
    {
      m_spotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(spotFleetRequestStateNode.GetText().c_str()).c_str());
      m_spotFleetRequestStateHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetRequestConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_activityStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActivityStatus=" << ActivityStatusMapper::GetNameForActivityStatus(m_activityStatus) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_spotFleetRequestConfigHasBeenSet)
  {
      Aws::StringStream spotFleetRequestConfigLocationAndMemberSs;
      spotFleetRequestConfigLocationAndMemberSs << location << index << locationValue << ".SpotFleetRequestConfig";
      m_spotFleetRequestConfig.OutputToStream(oStream, spotFleetRequestConfigLocationAndMemberSs.str().c_str());
  }

  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

  if(m_spotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_spotFleetRequestState) << "&";
  }

}

void SpotFleetRequestConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_activityStatusHasBeenSet)
  {
      oStream << location << ".ActivityStatus=" << ActivityStatusMapper::GetNameForActivityStatus(m_activityStatus) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_spotFleetRequestConfigHasBeenSet)
  {
      Aws::String spotFleetRequestConfigLocationAndMember(location);
      spotFleetRequestConfigLocationAndMember += ".SpotFleetRequestConfig";
      m_spotFleetRequestConfig.OutputToStream(oStream, spotFleetRequestConfigLocationAndMember.c_str());
  }
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }
  if(m_spotFleetRequestStateHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_spotFleetRequestState) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
