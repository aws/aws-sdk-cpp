/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacModificationTask.h>
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

MacModificationTask::MacModificationTask(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MacModificationTask& MacModificationTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode macModificationTaskIdNode = resultNode.FirstChild("macModificationTaskId");
    if(!macModificationTaskIdNode.IsNull())
    {
      m_macModificationTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(macModificationTaskIdNode.GetText());
      m_macModificationTaskIdHasBeenSet = true;
    }
    XmlNode macSystemIntegrityProtectionConfigNode = resultNode.FirstChild("macSystemIntegrityProtectionConfig");
    if(!macSystemIntegrityProtectionConfigNode.IsNull())
    {
      m_macSystemIntegrityProtectionConfig = macSystemIntegrityProtectionConfigNode;
      m_macSystemIntegrityProtectionConfigHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode taskStateNode = resultNode.FirstChild("taskState");
    if(!taskStateNode.IsNull())
    {
      m_taskState = MacModificationTaskStateMapper::GetMacModificationTaskStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStateNode.GetText()).c_str()));
      m_taskStateHasBeenSet = true;
    }
    XmlNode taskTypeNode = resultNode.FirstChild("taskType");
    if(!taskTypeNode.IsNull())
    {
      m_taskType = MacModificationTaskTypeMapper::GetMacModificationTaskTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskTypeNode.GetText()).c_str()));
      m_taskTypeHasBeenSet = true;
    }
  }

  return *this;
}

void MacModificationTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_macModificationTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MacModificationTaskId=" << StringUtils::URLEncode(m_macModificationTaskId.c_str()) << "&";
  }

  if(m_macSystemIntegrityProtectionConfigHasBeenSet)
  {
      Aws::StringStream macSystemIntegrityProtectionConfigLocationAndMemberSs;
      macSystemIntegrityProtectionConfigLocationAndMemberSs << location << index << locationValue << ".MacSystemIntegrityProtectionConfig";
      m_macSystemIntegrityProtectionConfig.OutputToStream(oStream, macSystemIntegrityProtectionConfigLocationAndMemberSs.str().c_str());
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_taskStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskState=" << StringUtils::URLEncode(MacModificationTaskStateMapper::GetNameForMacModificationTaskState(m_taskState)) << "&";
  }

  if(m_taskTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskType=" << StringUtils::URLEncode(MacModificationTaskTypeMapper::GetNameForMacModificationTaskType(m_taskType)) << "&";
  }

}

void MacModificationTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_macModificationTaskIdHasBeenSet)
  {
      oStream << location << ".MacModificationTaskId=" << StringUtils::URLEncode(m_macModificationTaskId.c_str()) << "&";
  }
  if(m_macSystemIntegrityProtectionConfigHasBeenSet)
  {
      Aws::String macSystemIntegrityProtectionConfigLocationAndMember(location);
      macSystemIntegrityProtectionConfigLocationAndMember += ".MacSystemIntegrityProtectionConfig";
      m_macSystemIntegrityProtectionConfig.OutputToStream(oStream, macSystemIntegrityProtectionConfigLocationAndMember.c_str());
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_taskStateHasBeenSet)
  {
      oStream << location << ".TaskState=" << StringUtils::URLEncode(MacModificationTaskStateMapper::GetNameForMacModificationTaskState(m_taskState)) << "&";
  }
  if(m_taskTypeHasBeenSet)
  {
      oStream << location << ".TaskType=" << StringUtils::URLEncode(MacModificationTaskTypeMapper::GetNameForMacModificationTaskType(m_taskType)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
