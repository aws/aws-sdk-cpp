﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplaceRootVolumeTask.h>
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

ReplaceRootVolumeTask::ReplaceRootVolumeTask() : 
    m_replaceRootVolumeTaskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskState(ReplaceRootVolumeTaskState::NOT_SET),
    m_taskStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ReplaceRootVolumeTask::ReplaceRootVolumeTask(const XmlNode& xmlNode) : 
    m_replaceRootVolumeTaskIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskState(ReplaceRootVolumeTaskState::NOT_SET),
    m_taskStateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ReplaceRootVolumeTask& ReplaceRootVolumeTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replaceRootVolumeTaskIdNode = resultNode.FirstChild("replaceRootVolumeTaskId");
    if(!replaceRootVolumeTaskIdNode.IsNull())
    {
      m_replaceRootVolumeTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(replaceRootVolumeTaskIdNode.GetText());
      m_replaceRootVolumeTaskIdHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode taskStateNode = resultNode.FirstChild("taskState");
    if(!taskStateNode.IsNull())
    {
      m_taskState = ReplaceRootVolumeTaskStateMapper::GetReplaceRootVolumeTaskStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStateNode.GetText()).c_str()).c_str());
      m_taskStateHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText());
      m_startTimeHasBeenSet = true;
    }
    XmlNode completeTimeNode = resultNode.FirstChild("completeTime");
    if(!completeTimeNode.IsNull())
    {
      m_completeTime = Aws::Utils::Xml::DecodeEscapedXmlText(completeTimeNode.GetText());
      m_completeTimeHasBeenSet = true;
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

void ReplaceRootVolumeTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replaceRootVolumeTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplaceRootVolumeTaskId=" << StringUtils::URLEncode(m_replaceRootVolumeTaskId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_taskStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskState=" << ReplaceRootVolumeTaskStateMapper::GetNameForReplaceRootVolumeTaskState(m_taskState) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.c_str()) << "&";
  }

  if(m_completeTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CompleteTime=" << StringUtils::URLEncode(m_completeTime.c_str()) << "&";
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

void ReplaceRootVolumeTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replaceRootVolumeTaskIdHasBeenSet)
  {
      oStream << location << ".ReplaceRootVolumeTaskId=" << StringUtils::URLEncode(m_replaceRootVolumeTaskId.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_taskStateHasBeenSet)
  {
      oStream << location << ".TaskState=" << ReplaceRootVolumeTaskStateMapper::GetNameForReplaceRootVolumeTaskState(m_taskState) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.c_str()) << "&";
  }
  if(m_completeTimeHasBeenSet)
  {
      oStream << location << ".CompleteTime=" << StringUtils::URLEncode(m_completeTime.c_str()) << "&";
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
