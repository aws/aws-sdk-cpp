﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/DiskImageDetail.h>
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

DiskImageDetail::DiskImageDetail() : 
    m_format(DiskImageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_bytes(0),
    m_bytesHasBeenSet(false),
    m_importManifestUrlHasBeenSet(false)
{
}

DiskImageDetail::DiskImageDetail(const XmlNode& xmlNode) : 
    m_format(DiskImageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_bytes(0),
    m_bytesHasBeenSet(false),
    m_importManifestUrlHasBeenSet(false)
{
  *this = xmlNode;
}

DiskImageDetail& DiskImageDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode formatNode = resultNode.FirstChild("format");
    if(!formatNode.IsNull())
    {
      m_format = DiskImageFormatMapper::GetDiskImageFormatForName(StringUtils::Trim(formatNode.GetText().c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode bytesNode = resultNode.FirstChild("bytes");
    if(!bytesNode.IsNull())
    {
      m_bytes = StringUtils::ConvertToInt64(StringUtils::Trim(bytesNode.GetText().c_str()).c_str());
      m_bytesHasBeenSet = true;
    }
    XmlNode importManifestUrlNode = resultNode.FirstChild("importManifestUrl");
    if(!importManifestUrlNode.IsNull())
    {
      m_importManifestUrl = StringUtils::Trim(importManifestUrlNode.GetText().c_str());
      m_importManifestUrlHasBeenSet = true;
    }
  }

  return *this;
}

void DiskImageDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_formatHasBeenSet)
  {
      oStream << location << index << locationValue << ".Format=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_format) << "&";
  }

  if(m_bytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".Bytes=" << m_bytes << "&";
  }

  if(m_importManifestUrlHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImportManifestUrl=" << StringUtils::URLEncode(m_importManifestUrl.c_str()) << "&";
  }

}

void DiskImageDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_formatHasBeenSet)
  {
      oStream << location << ".Format=" << DiskImageFormatMapper::GetNameForDiskImageFormat(m_format) << "&";
  }
  if(m_bytesHasBeenSet)
  {
      oStream << location << ".Bytes=" << m_bytes << "&";
  }
  if(m_importManifestUrlHasBeenSet)
  {
      oStream << location << ".ImportManifestUrl=" << StringUtils::URLEncode(m_importManifestUrl.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
