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

#include <aws/ec2/model/DiskImageDescription.h>
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

DiskImageDescription::DiskImageDescription() : 
    m_checksumHasBeenSet(false),
    m_format(DiskImageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_importManifestUrlHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

DiskImageDescription::DiskImageDescription(const XmlNode& xmlNode) : 
    m_checksumHasBeenSet(false),
    m_format(DiskImageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_importManifestUrlHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = xmlNode;
}

DiskImageDescription& DiskImageDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode checksumNode = resultNode.FirstChild("checksum");
    if(!checksumNode.IsNull())
    {
      m_checksum = checksumNode.GetText();
      m_checksumHasBeenSet = true;
    }
    XmlNode formatNode = resultNode.FirstChild("format");
    if(!formatNode.IsNull())
    {
      m_format = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(formatNode.GetText().c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode importManifestUrlNode = resultNode.FirstChild("importManifestUrl");
    if(!importManifestUrlNode.IsNull())
    {
      m_importManifestUrl = importManifestUrlNode.GetText();
      m_importManifestUrlHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(sizeNode.GetText().c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
  }

  return *this;
}

void DiskImageDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_checksumHasBeenSet)
  {
      oStream << location << index << locationValue << ".Checksum=" << StringUtils::URLEncode(m_checksum.c_str()) << "&";
  }

  if(m_formatHasBeenSet)
  {
      oStream << location << index << locationValue << ".Format=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_format) << "&";
  }

  if(m_importManifestUrlHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImportManifestUrl=" << StringUtils::URLEncode(m_importManifestUrl.c_str()) << "&";
  }

  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

}

void DiskImageDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_checksumHasBeenSet)
  {
      oStream << location << ".Checksum=" << StringUtils::URLEncode(m_checksum.c_str()) << "&";
  }
  if(m_formatHasBeenSet)
  {
      oStream << location << ".Format=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_format) << "&";
  }
  if(m_importManifestUrlHasBeenSet)
  {
      oStream << location << ".ImportManifestUrl=" << StringUtils::URLEncode(m_importManifestUrl.c_str()) << "&";
  }
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
