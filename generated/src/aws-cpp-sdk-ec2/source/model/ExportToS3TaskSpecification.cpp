/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExportToS3TaskSpecification.h>
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

ExportToS3TaskSpecification::ExportToS3TaskSpecification(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ExportToS3TaskSpecification& ExportToS3TaskSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode diskImageFormatNode = resultNode.FirstChild("diskImageFormat");
    if(!diskImageFormatNode.IsNull())
    {
      m_diskImageFormat = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(diskImageFormatNode.GetText()).c_str()));
      m_diskImageFormatHasBeenSet = true;
    }
    XmlNode containerFormatNode = resultNode.FirstChild("containerFormat");
    if(!containerFormatNode.IsNull())
    {
      m_containerFormat = ContainerFormatMapper::GetContainerFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(containerFormatNode.GetText()).c_str()));
      m_containerFormatHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("s3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("s3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3PrefixNode.GetText());
      m_s3PrefixHasBeenSet = true;
    }
  }

  return *this;
}

void ExportToS3TaskSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_diskImageFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".DiskImageFormat=" << StringUtils::URLEncode(DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat)) << "&";
  }

  if(m_containerFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContainerFormat=" << StringUtils::URLEncode(ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat)) << "&";
  }

  if(m_s3BucketHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }

  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }

}

void ExportToS3TaskSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_diskImageFormatHasBeenSet)
  {
      oStream << location << ".DiskImageFormat=" << StringUtils::URLEncode(DiskImageFormatMapper::GetNameForDiskImageFormat(m_diskImageFormat)) << "&";
  }
  if(m_containerFormatHasBeenSet)
  {
      oStream << location << ".ContainerFormat=" << StringUtils::URLEncode(ContainerFormatMapper::GetNameForContainerFormat(m_containerFormat)) << "&";
  }
  if(m_s3BucketHasBeenSet)
  {
      oStream << location << ".S3Bucket=" << StringUtils::URLEncode(m_s3Bucket.c_str()) << "&";
  }
  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
