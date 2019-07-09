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

ExportToS3TaskSpecification::ExportToS3TaskSpecification() : 
    m_containerFormat(ContainerFormat::NOT_SET),
    m_containerFormatHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
}

ExportToS3TaskSpecification::ExportToS3TaskSpecification(const XmlNode& xmlNode) : 
    m_containerFormat(ContainerFormat::NOT_SET),
    m_containerFormatHasBeenSet(false),
    m_diskImageFormat(DiskImageFormat::NOT_SET),
    m_diskImageFormatHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
  *this = xmlNode;
}

ExportToS3TaskSpecification& ExportToS3TaskSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode containerFormatNode = resultNode.FirstChild("containerFormat");
    if(!containerFormatNode.IsNull())
    {
      m_containerFormat = ContainerFormatMapper::GetContainerFormatForName(StringUtils::Trim(containerFormatNode.GetText().c_str()).c_str());
      m_containerFormatHasBeenSet = true;
    }
    XmlNode diskImageFormatNode = resultNode.FirstChild("diskImageFormat");
    if(!diskImageFormatNode.IsNull())
    {
      m_diskImageFormat = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(diskImageFormatNode.GetText().c_str()).c_str());
      m_diskImageFormatHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("s3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = s3BucketNode.GetText();
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("s3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = s3PrefixNode.GetText();
      m_s3PrefixHasBeenSet = true;
    }
  }

  return *this;
}

void ExportToS3TaskSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }

}

void ExportToS3TaskSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_s3PrefixHasBeenSet)
  {
      oStream << location << ".S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
