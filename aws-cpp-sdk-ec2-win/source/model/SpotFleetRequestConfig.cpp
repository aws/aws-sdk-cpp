/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_spotFleetRequestStateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SpotFleetRequestConfig::SpotFleetRequestConfig(const XmlNode& xmlNode) : 
    m_activityStatus(ActivityStatus::NOT_SET),
    m_activityStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_spotFleetRequestConfigHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false),
    m_spotFleetRequestState(BatchState::NOT_SET),
    m_spotFleetRequestStateHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
      m_activityStatus = ActivityStatusMapper::GetActivityStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(activityStatusNode.GetText()).c_str()).c_str());
      m_activityStatusHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
      m_spotFleetRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestIdNode.GetText());
      m_spotFleetRequestIdHasBeenSet = true;
    }
    XmlNode spotFleetRequestStateNode = resultNode.FirstChild("spotFleetRequestState");
    if(!spotFleetRequestStateNode.IsNull())
    {
      m_spotFleetRequestState = BatchStateMapper::GetBatchStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestStateNode.GetText()).c_str()).c_str());
      m_spotFleetRequestStateHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
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
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
