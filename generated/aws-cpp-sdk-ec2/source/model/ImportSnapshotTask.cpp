/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportSnapshotTask.h>
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

ImportSnapshotTask::ImportSnapshotTask() : 
    m_descriptionHasBeenSet(false),
    m_importTaskIdHasBeenSet(false),
    m_snapshotTaskDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ImportSnapshotTask::ImportSnapshotTask(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_importTaskIdHasBeenSet(false),
    m_snapshotTaskDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ImportSnapshotTask& ImportSnapshotTask::operator =(const XmlNode& xmlNode)
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
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(importTaskIdNode.GetText());
      m_importTaskIdHasBeenSet = true;
    }
    XmlNode snapshotTaskDetailNode = resultNode.FirstChild("snapshotTaskDetail");
    if(!snapshotTaskDetailNode.IsNull())
    {
      m_snapshotTaskDetail = snapshotTaskDetailNode;
      m_snapshotTaskDetailHasBeenSet = true;
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

void ImportSnapshotTask::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }

  if(m_snapshotTaskDetailHasBeenSet)
  {
      Aws::StringStream snapshotTaskDetailLocationAndMemberSs;
      snapshotTaskDetailLocationAndMemberSs << location << index << locationValue << ".SnapshotTaskDetail";
      m_snapshotTaskDetail.OutputToStream(oStream, snapshotTaskDetailLocationAndMemberSs.str().c_str());
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

void ImportSnapshotTask::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_importTaskIdHasBeenSet)
  {
      oStream << location << ".ImportTaskId=" << StringUtils::URLEncode(m_importTaskId.c_str()) << "&";
  }
  if(m_snapshotTaskDetailHasBeenSet)
  {
      Aws::String snapshotTaskDetailLocationAndMember(location);
      snapshotTaskDetailLocationAndMember += ".SnapshotTaskDetail";
      m_snapshotTaskDetail.OutputToStream(oStream, snapshotTaskDetailLocationAndMember.c_str());
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
