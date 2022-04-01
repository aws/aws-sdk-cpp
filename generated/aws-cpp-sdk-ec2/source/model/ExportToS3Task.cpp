﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportToS3Task.h>
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

ExportToS3Task::ExportToS3Task() : 
    m_containerFormat(ContainerFormat::NOT_SET),
    m_containerFormatHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

ExportToS3Task::ExportToS3Task(const XmlNode& xmlNode) : 
    m_containerFormat(ContainerFormat::NOT_SET),
    m_containerFormatHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = xmlNode;
}

ExportToS3Task& ExportToS3Task::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode containerFormatNode = resultNode.FirstChild("containerFormat");
    if(!containerFormatNode.IsNull())
    {
      m_containerFormat = ContainerFormatMapper::GetContainerFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(containerFormatNode.GetText()).c_str()).c_str());
      m_containerFormatHasBeenSet = true;
    }
    XmlNode diskImageFormatNode = resultNode.FirstChild("diskImageFormat");
    if(!diskImageFormatNode.IsNull())
    {
      m_diskImageFormat = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(diskImageFormatNode.GetText()).c_str()).c_str());
      m_diskImageFormatHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("s3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3KeyNode = resultNode.FirstChild("s3Key");
    if(!s3KeyNode.IsNull())
    {
      m_s3Key = Aws::Utils::Xml::DecodeEscapedXmlText(s3KeyNode.GetText());
      m_s3KeyHasBeenSet = true;
    }
  }

  return *this;
}

void ExportToS3Task::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_containerFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContainerFormat=" << ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat) << "&";
  }

  if(m_diskImageFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".DiskImageFormat=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat) << "&";
  }

  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3KeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }

}

void ExportToS3Task::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_containerFormatHasBeenSet)
  {
      oStream << location << ".ContainerFormat=" << ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat) << "&";
  }
  if(m_diskImageFormatHasBeenSet)
  {
      oStream << location << ".DiskImageFormat=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat) << "&";
  }
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3KeyHasBeenSet)
  {
      oStream << location << ".S3Key=" << StringUtils::URLEncode(m_s3Key.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
