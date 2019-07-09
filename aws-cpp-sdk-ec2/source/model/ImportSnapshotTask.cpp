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
    m_snapshotTaskDetailHasBeenSet(false)
{
}

ImportSnapshotTask::ImportSnapshotTask(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_importTaskIdHasBeenSet(false),
    m_snapshotTaskDetailHasBeenSet(false)
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
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = importTaskIdNode.GetText();
      m_importTaskIdHasBeenSet = true;
    }
    XmlNode snapshotTaskDetailNode = resultNode.FirstChild("snapshotTaskDetail");
    if(!snapshotTaskDetailNode.IsNull())
    {
      m_snapshotTaskDetail = snapshotTaskDetailNode;
      m_snapshotTaskDetailHasBeenSet = true;
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
