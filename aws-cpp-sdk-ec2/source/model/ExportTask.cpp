﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportTask.h>
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

ExportTask::ExportTask() : 
    m_descriptionHasBeenSet(false),
    m_exportTaskIdHasBeenSet(false),
    m_exportToS3TaskHasBeenSet(false),
    m_instanceExportDetailsHasBeenSet(false),
    m_state(ExportTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ExportTask::ExportTask(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_exportTaskIdHasBeenSet(false),
    m_exportToS3TaskHasBeenSet(false),
    m_instanceExportDetailsHasBeenSet(false),
    m_state(ExportTaskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ExportTask& ExportTask::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode exportTaskIdNode = resultNode.FirstChild("exportTaskId");
    if(!exportTaskIdNode.IsNull())
    {
      m_exportTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(exportTaskIdNode.GetText());
      m_exportTaskIdHasBeenSet = true;
    }
    XmlNode exportToS3TaskNode = resultNode.FirstChild("exportToS3");
    if(!exportToS3TaskNode.IsNull())
    {
      m_exportToS3Task = exportToS3TaskNode;
      m_exportToS3TaskHasBeenSet = true;
    }
    XmlNode instanceExportDetailsNode = resultNode.FirstChild("instanceExport");
    if(!instanceExportDetailsNode.IsNull())
    {
      m_instanceExportDetails = instanceExportDetailsNode;
      m_instanceExportDetailsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ExportTaskStateMapper::GetExportTaskStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
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

void ExportTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_exportTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExportTaskId=" << StringUtils::URLEncode(m_exportTaskId.c_str()) << "&";
  }

  if(m_exportToS3TaskHasBeenSet)
  {
      Aws::StringStream exportToS3TaskLocationAndMemberSs;
      exportToS3TaskLocationAndMemberSs << location << index << locationValue << ".ExportToS3Task";
      m_exportToS3Task.OutputToStream(oStream, exportToS3TaskLocationAndMemberSs.str().c_str());
  }

  if(m_instanceExportDetailsHasBeenSet)
  {
      Aws::StringStream instanceExportDetailsLocationAndMemberSs;
      instanceExportDetailsLocationAndMemberSs << location << index << locationValue << ".InstanceExportDetails";
      m_instanceExportDetails.OutputToStream(oStream, instanceExportDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ExportTaskStateMapper::GetNameForExportTaskState(m_state) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
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

void ExportTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_exportTaskIdHasBeenSet)
  {
      oStream << location << ".ExportTaskId=" << StringUtils::URLEncode(m_exportTaskId.c_str()) << "&";
  }
  if(m_exportToS3TaskHasBeenSet)
  {
      Aws::String exportToS3TaskLocationAndMember(location);
      exportToS3TaskLocationAndMember += ".ExportToS3Task";
      m_exportToS3Task.OutputToStream(oStream, exportToS3TaskLocationAndMember.c_str());
  }
  if(m_instanceExportDetailsHasBeenSet)
  {
      Aws::String instanceExportDetailsLocationAndMember(location);
      instanceExportDetailsLocationAndMember += ".InstanceExportDetails";
      m_instanceExportDetails.OutputToStream(oStream, instanceExportDetailsLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ExportTaskStateMapper::GetNameForExportTaskState(m_state) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
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
