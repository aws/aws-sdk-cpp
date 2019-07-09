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

#include <aws/ec2/model/EbsInstanceBlockDevice.h>
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

EbsInstanceBlockDevice::EbsInstanceBlockDevice() : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
}

EbsInstanceBlockDevice::EbsInstanceBlockDevice(const XmlNode& xmlNode) : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
  *this = xmlNode;
}

EbsInstanceBlockDevice& EbsInstanceBlockDevice::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attachTimeNode = resultNode.FirstChild("attachTime");
    if(!attachTimeNode.IsNull())
    {
      m_attachTime = DateTime(StringUtils::Trim(attachTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_attachTimeHasBeenSet = true;
    }
    XmlNode deleteOnTerminationNode = resultNode.FirstChild("deleteOnTermination");
    if(!deleteOnTerminationNode.IsNull())
    {
      m_deleteOnTermination = StringUtils::ConvertToBool(StringUtils::Trim(deleteOnTerminationNode.GetText().c_str()).c_str());
      m_deleteOnTerminationHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = AttachmentStatusMapper::GetAttachmentStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = volumeIdNode.GetText();
      m_volumeIdHasBeenSet = true;
    }
  }

  return *this;
}

void EbsInstanceBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_status) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

}

void EbsInstanceBlockDevice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attachTimeHasBeenSet)
  {
      oStream << location << ".AttachTime=" << StringUtils::URLEncode(m_attachTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deleteOnTerminationHasBeenSet)
  {
      oStream << location << ".DeleteOnTermination=" << std::boolalpha << m_deleteOnTermination << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << AttachmentStatusMapper::GetNameForAttachmentStatus(m_status) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
