/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceImageMetadata.h>
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

InstanceImageMetadata::InstanceImageMetadata(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceImageMetadata& InstanceImageMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()));
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode launchTimeNode = resultNode.FirstChild("launchTime");
    if(!launchTimeNode.IsNull())
    {
      m_launchTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(launchTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_launchTimeHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode zoneIdNode = resultNode.FirstChild("zoneId");
    if(!zoneIdNode.IsNull())
    {
      m_zoneId = Aws::Utils::Xml::DecodeEscapedXmlText(zoneIdNode.GetText());
      m_zoneIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("instanceState");
    if(!stateNode.IsNull())
    {
      m_state = stateNode;
      m_stateHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("instanceOwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode imageMetadataNode = resultNode.FirstChild("imageMetadata");
    if(!imageMetadataNode.IsNull())
    {
      m_imageMetadata = imageMetadataNode;
      m_imageMetadataHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("operator");
    if(!operatorNode.IsNull())
    {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceImageMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
  }

  if(m_launchTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTime=" << StringUtils::URLEncode(m_launchTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_zoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      Aws::StringStream stateLocationAndMemberSs;
      stateLocationAndMemberSs << location << index << locationValue << ".State";
      m_state.OutputToStream(oStream, stateLocationAndMemberSs.str().c_str());
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_imageMetadataHasBeenSet)
  {
      Aws::StringStream imageMetadataLocationAndMemberSs;
      imageMetadataLocationAndMemberSs << location << index << locationValue << ".ImageMetadata";
      m_imageMetadata.OutputToStream(oStream, imageMetadataLocationAndMemberSs.str().c_str());
  }

  if(m_operatorHasBeenSet)
  {
      Aws::StringStream operatorLocationAndMemberSs;
      operatorLocationAndMemberSs << location << index << locationValue << ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMemberSs.str().c_str());
  }

}

void InstanceImageMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
  }
  if(m_launchTimeHasBeenSet)
  {
      oStream << location << ".LaunchTime=" << StringUtils::URLEncode(m_launchTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_zoneIdHasBeenSet)
  {
      oStream << location << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      Aws::String stateLocationAndMember(location);
      stateLocationAndMember += ".State";
      m_state.OutputToStream(oStream, stateLocationAndMember.c_str());
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_imageMetadataHasBeenSet)
  {
      Aws::String imageMetadataLocationAndMember(location);
      imageMetadataLocationAndMember += ".ImageMetadata";
      m_imageMetadata.OutputToStream(oStream, imageMetadataLocationAndMember.c_str());
  }
  if(m_operatorHasBeenSet)
  {
      Aws::String operatorLocationAndMember(location);
      operatorLocationAndMember += ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
