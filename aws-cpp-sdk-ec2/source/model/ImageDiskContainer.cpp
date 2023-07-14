﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImageDiskContainer.h>
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

ImageDiskContainer::ImageDiskContainer() : 
    m_descriptionHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_userBucketHasBeenSet(false)
{
}

ImageDiskContainer::ImageDiskContainer(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_userBucketHasBeenSet(false)
{
  *this = xmlNode;
}

ImageDiskContainer& ImageDiskContainer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode deviceNameNode = resultNode.FirstChild("DeviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNameNode.GetText());
      m_deviceNameHasBeenSet = true;
    }
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = Aws::Utils::Xml::DecodeEscapedXmlText(formatNode.GetText());
      m_formatHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("SnapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode urlNode = resultNode.FirstChild("Url");
    if(!urlNode.IsNull())
    {
      m_url = Aws::Utils::Xml::DecodeEscapedXmlText(urlNode.GetText());
      m_urlHasBeenSet = true;
    }
    XmlNode userBucketNode = resultNode.FirstChild("UserBucket");
    if(!userBucketNode.IsNull())
    {
      m_userBucket = userBucketNode;
      m_userBucketHasBeenSet = true;
    }
  }

  return *this;
}

void ImageDiskContainer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_formatHasBeenSet)
  {
      oStream << location << index << locationValue << ".Format=" << StringUtils::URLEncode(m_format.c_str()) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
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

void ImageDiskContainer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }
  if(m_formatHasBeenSet)
  {
      oStream << location << ".Format=" << StringUtils::URLEncode(m_format.c_str()) << "&";
  }
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
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
