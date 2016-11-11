/*
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
    m_spotFleetRequestIdHasBeenSet(false),
    m_spotFleetRequestState(BatchState::NOT_SET),
    m_spotFleetRequestStateHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

SpotFleetRequestConfig::SpotFleetRequestConfig(const XmlNode& xmlNode) : 
    m_spotFleetRequestIdHasBeenSet(false),
    m_spotFleetRequestState(BatchState::NOT_SET),
    m_spotFleetRequestStateHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
  *this = xmlNode;
}

SpotFleetRequestConfig& SpotFleetRequestConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = StringUtils::Trim(spotFleetRequestIdNode.GetText().c_str());
      m_spotFleetRequestIdHasBeenSet = true;
    }
    XmlNode spotFleetRequestStateNode = resultNode.FirstChild("spotFleetRequestState");
    if(!spotFleetRequestStateNode.IsNull())
    {
      m_spotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(spotFleetRequestStateNode.GetText().c_str()).c_str());
      m_spotFleetRequestStateHasBeenSet = true;
    }
    XmlNode spotFleetRequestConfigNode = resultNode.FirstChild("spotFleetRequestConfig");
    if(!spotFleetRequestConfigNode.IsNull())
    {
      m_spotFleetRequestConfig = spotFleetRequestConfigNode;
      m_spotFleetRequestConfigHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetRequestConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

  if(m_spotFleetRequestStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_spotFleetRequestState) << "&";
  }

  if(m_spotFleetRequestConfigHasBeenSet)
  {
      Aws::StringStream spotFleetRequestConfigLocationAndMemberSs;
      spotFleetRequestConfigLocationAndMemberSs << location << index << locationValue << ".SpotFleetRequestConfig";
      m_spotFleetRequestConfig.OutputToStream(oStream, spotFleetRequestConfigLocationAndMemberSs.str().c_str());
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SpotFleetRequestConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }
  if(m_spotFleetRequestStateHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestState=" << BatchStateMapper::GetNameForBatchState(m_spotFleetRequestState) << "&";
  }
  if(m_spotFleetRequestConfigHasBeenSet)
  {
      Aws::String spotFleetRequestConfigLocationAndMember(location);
      spotFleetRequestConfigLocationAndMember += ".SpotFleetRequestConfig";
      m_spotFleetRequestConfig.OutputToStream(oStream, spotFleetRequestConfigLocationAndMember.c_str());
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
