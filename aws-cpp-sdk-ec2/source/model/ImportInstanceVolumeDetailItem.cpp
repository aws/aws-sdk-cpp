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

#include <aws/ec2/model/ImportInstanceVolumeDetailItem.h>
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

ImportInstanceVolumeDetailItem::ImportInstanceVolumeDetailItem() : 
    m_availabilityZoneHasBeenSet(false),
    m_bytesConverted(0),
    m_bytesConvertedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

ImportInstanceVolumeDetailItem::ImportInstanceVolumeDetailItem(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_bytesConverted(0),
    m_bytesConvertedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
  *this = xmlNode;
}

ImportInstanceVolumeDetailItem& ImportInstanceVolumeDetailItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode bytesConvertedNode = resultNode.FirstChild("bytesConverted");
    if(!bytesConvertedNode.IsNull())
    {
      m_bytesConverted = StringUtils::ConvertToInt64(StringUtils::Trim(bytesConvertedNode.GetText().c_str()).c_str());
      m_bytesConvertedHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode imageNode = resultNode.FirstChild("image");
    if(!imageNode.IsNull())
    {
      m_image = imageNode;
      m_imageHasBeenSet = true;
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
    XmlNode volumeNode = resultNode.FirstChild("volume");
    if(!volumeNode.IsNull())
    {
      m_volume = volumeNode;
      m_volumeHasBeenSet = true;
    }
  }

  return *this;
}

void ImportInstanceVolumeDetailItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_bytesConvertedHasBeenSet)
  {
      oStream << location << index << locationValue << ".BytesConverted=" << m_bytesConverted << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_imageHasBeenSet)
  {
      Aws::StringStream imageLocationAndMemberSs;
      imageLocationAndMemberSs << location << index << locationValue << ".Image";
      m_image.OutputToStream(oStream, imageLocationAndMemberSs.str().c_str());
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_volumeHasBeenSet)
  {
      Aws::StringStream volumeLocationAndMemberSs;
      volumeLocationAndMemberSs << location << index << locationValue << ".Volume";
      m_volume.OutputToStream(oStream, volumeLocationAndMemberSs.str().c_str());
  }

}

void ImportInstanceVolumeDetailItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_bytesConvertedHasBeenSet)
  {
      oStream << location << ".BytesConverted=" << m_bytesConverted << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_imageHasBeenSet)
  {
      Aws::String imageLocationAndMember(location);
      imageLocationAndMember += ".Image";
      m_image.OutputToStream(oStream, imageLocationAndMember.c_str());
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_volumeHasBeenSet)
  {
      Aws::String volumeLocationAndMember(location);
      volumeLocationAndMember += ".Volume";
      m_volume.OutputToStream(oStream, volumeLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
