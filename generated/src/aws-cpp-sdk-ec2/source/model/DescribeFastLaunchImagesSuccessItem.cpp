/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeFastLaunchImagesSuccessItem.h>
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

DescribeFastLaunchImagesSuccessItem::DescribeFastLaunchImagesSuccessItem() : 
    m_imageIdHasBeenSet(false),
    m_resourceType(FastLaunchResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_maxParallelLaunches(0),
    m_maxParallelLaunchesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_state(FastLaunchStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_stateTransitionTimeHasBeenSet(false)
{
}

DescribeFastLaunchImagesSuccessItem::DescribeFastLaunchImagesSuccessItem(const XmlNode& xmlNode) : 
    m_imageIdHasBeenSet(false),
    m_resourceType(FastLaunchResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_maxParallelLaunches(0),
    m_maxParallelLaunchesHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_state(FastLaunchStateCode::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_stateTransitionTimeHasBeenSet(false)
{
  *this = xmlNode;
}

DescribeFastLaunchImagesSuccessItem& DescribeFastLaunchImagesSuccessItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = FastLaunchResourceTypeMapper::GetFastLaunchResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode snapshotConfigurationNode = resultNode.FirstChild("snapshotConfiguration");
    if(!snapshotConfigurationNode.IsNull())
    {
      m_snapshotConfiguration = snapshotConfigurationNode;
      m_snapshotConfigurationHasBeenSet = true;
    }
    XmlNode launchTemplateNode = resultNode.FirstChild("launchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode maxParallelLaunchesNode = resultNode.FirstChild("maxParallelLaunches");
    if(!maxParallelLaunchesNode.IsNull())
    {
      m_maxParallelLaunches = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxParallelLaunchesNode.GetText()).c_str()).c_str());
      m_maxParallelLaunchesHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = FastLaunchStateCodeMapper::GetFastLaunchStateCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode stateTransitionReasonNode = resultNode.FirstChild("stateTransitionReason");
    if(!stateTransitionReasonNode.IsNull())
    {
      m_stateTransitionReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionReasonNode.GetText());
      m_stateTransitionReasonHasBeenSet = true;
    }
    XmlNode stateTransitionTimeNode = resultNode.FirstChild("stateTransitionTime");
    if(!stateTransitionTimeNode.IsNull())
    {
      m_stateTransitionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_stateTransitionTimeHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeFastLaunchImagesSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << FastLaunchResourceTypeMapper::GetNameForFastLaunchResourceType(m_resourceType) << "&";
  }

  if(m_snapshotConfigurationHasBeenSet)
  {
      Aws::StringStream snapshotConfigurationLocationAndMemberSs;
      snapshotConfigurationLocationAndMemberSs << location << index << locationValue << ".SnapshotConfiguration";
      m_snapshotConfiguration.OutputToStream(oStream, snapshotConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_launchTemplateHasBeenSet)
  {
      Aws::StringStream launchTemplateLocationAndMemberSs;
      launchTemplateLocationAndMemberSs << location << index << locationValue << ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMemberSs.str().c_str());
  }

  if(m_maxParallelLaunchesHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxParallelLaunches=" << m_maxParallelLaunches << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << FastLaunchStateCodeMapper::GetNameForFastLaunchStateCode(m_state) << "&";
  }

  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }

  if(m_stateTransitionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionTime=" << StringUtils::URLEncode(m_stateTransitionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DescribeFastLaunchImagesSuccessItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << FastLaunchResourceTypeMapper::GetNameForFastLaunchResourceType(m_resourceType) << "&";
  }
  if(m_snapshotConfigurationHasBeenSet)
  {
      Aws::String snapshotConfigurationLocationAndMember(location);
      snapshotConfigurationLocationAndMember += ".SnapshotConfiguration";
      m_snapshotConfiguration.OutputToStream(oStream, snapshotConfigurationLocationAndMember.c_str());
  }
  if(m_launchTemplateHasBeenSet)
  {
      Aws::String launchTemplateLocationAndMember(location);
      launchTemplateLocationAndMember += ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMember.c_str());
  }
  if(m_maxParallelLaunchesHasBeenSet)
  {
      oStream << location << ".MaxParallelLaunches=" << m_maxParallelLaunches << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << FastLaunchStateCodeMapper::GetNameForFastLaunchStateCode(m_state) << "&";
  }
  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }
  if(m_stateTransitionTimeHasBeenSet)
  {
      oStream << location << ".StateTransitionTime=" << StringUtils::URLEncode(m_stateTransitionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
