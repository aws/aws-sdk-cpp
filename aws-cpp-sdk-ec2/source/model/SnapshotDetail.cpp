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

#include <aws/ec2/model/SnapshotDetail.h>
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

SnapshotDetail::SnapshotDetail() : 
    m_descriptionHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_diskImageSize(0.0),
    m_diskImageSizeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_userBucketHasBeenSet(false)
{
}

SnapshotDetail::SnapshotDetail(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_diskImageSize(0.0),
    m_diskImageSizeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_userBucketHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotDetail& SnapshotDetail::operator =(const XmlNode& xmlNode)
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
    XmlNode deviceNameNode = resultNode.FirstChild("deviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = deviceNameNode.GetText();
      m_deviceNameHasBeenSet = true;
    }
    XmlNode diskImageSizeNode = resultNode.FirstChild("diskImageSize");
    if(!diskImageSizeNode.IsNull())
    {
      m_diskImageSize = StringUtils::ConvertToDouble(StringUtils::Trim(diskImageSizeNode.GetText().c_str()).c_str());
      m_diskImageSizeHasBeenSet = true;
    }
    XmlNode formatNode = resultNode.FirstChild("format");
    if(!formatNode.IsNull())
    {
      m_format = formatNode.GetText();
      m_formatHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = progressNode.GetText();
      m_progressHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = snapshotIdNode.GetText();
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
    }
    XmlNode urlNode = resultNode.FirstChild("url");
    if(!urlNode.IsNull())
    {
      m_url = urlNode.GetText();
      m_urlHasBeenSet = true;
    }
    XmlNode userBucketNode = resultNode.FirstChild("userBucket");
    if(!userBucketNode.IsNull())
    {
      m_userBucket = userBucketNode;
      m_userBucketHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_diskImageSizeHasBeenSet)
  {
        oStream << location << index << locationValue << ".DiskImageSize=" << StringUtils::URLEncode(m_diskImageSize) << "&";
  }

  if(m_formatHasBeenSet)
  {
      oStream << location << index << locationValue << ".Format=" << StringUtils::URLEncode(m_format.c_str()) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_urlHasBeenSet)
  {
      oStream << location << index << locationValue << ".Url=" << StringUtils::URLEncode(m_url.c_str()) << "&";
  }

  if(m_userBucketHasBeenSet)
  {
      Aws::StringStream userBucketLocationAndMemberSs;
      userBucketLocationAndMemberSs << location << index << locationValue << ".UserBucket";
      m_userBucket.OutputToStream(oStream, userBucketLocationAndMemberSs.str().c_str());
  }

}

void SnapshotDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }
  if(m_diskImageSizeHasBeenSet)
  {
        oStream << location << ".DiskImageSize=" << StringUtils::URLEncode(m_diskImageSize) << "&";
  }
  if(m_formatHasBeenSet)
  {
      oStream << location << ".Format=" << StringUtils::URLEncode(m_format.c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_urlHasBeenSet)
  {
      oStream << location << ".Url=" << StringUtils::URLEncode(m_url.c_str()) << "&";
  }
  if(m_userBucketHasBeenSet)
  {
      Aws::String userBucketLocationAndMember(location);
      userBucketLocationAndMember += ".UserBucket";
      m_userBucket.OutputToStream(oStream, userBucketLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
