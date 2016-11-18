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
#include <aws/ec2/model/DiskImageVolumeDescription.h>
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

DiskImageVolumeDescription::DiskImageVolumeDescription() : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

DiskImageVolumeDescription::DiskImageVolumeDescription(const XmlNode& xmlNode) : 
    m_size(0),
    m_sizeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = xmlNode;
}

DiskImageVolumeDescription& DiskImageVolumeDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sizeNode = resultNode.FirstChild("size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(sizeNode.GetText().c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
    XmlNode idNode = resultNode.FirstChild("id");
    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
  }

  return *this;
}

void DiskImageVolumeDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

}

void DiskImageVolumeDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
