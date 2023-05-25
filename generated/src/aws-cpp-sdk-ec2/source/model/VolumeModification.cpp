/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeModification.h>
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

VolumeModification::VolumeModification() : 
    m_volumeIdHasBeenSet(false),
    m_modificationState(VolumeModificationState::NOT_SET),
    m_modificationStateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_targetSize(0),
    m_targetSizeHasBeenSet(false),
    m_targetIops(0),
    m_targetIopsHasBeenSet(false),
    m_targetVolumeType(VolumeType::NOT_SET),
    m_targetVolumeTypeHasBeenSet(false),
    m_targetThroughput(0),
    m_targetThroughputHasBeenSet(false),
    m_targetMultiAttachEnabled(false),
    m_targetMultiAttachEnabledHasBeenSet(false),
    m_originalSize(0),
    m_originalSizeHasBeenSet(false),
    m_originalIops(0),
    m_originalIopsHasBeenSet(false),
    m_originalVolumeType(VolumeType::NOT_SET),
    m_originalVolumeTypeHasBeenSet(false),
    m_originalThroughput(0),
    m_originalThroughputHasBeenSet(false),
    m_originalMultiAttachEnabled(false),
    m_originalMultiAttachEnabledHasBeenSet(false),
    m_progress(0),
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

VolumeModification::VolumeModification(const XmlNode& xmlNode) : 
    m_volumeIdHasBeenSet(false),
    m_modificationState(VolumeModificationState::NOT_SET),
    m_modificationStateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_targetSize(0),
    m_targetSizeHasBeenSet(false),
    m_targetIops(0),
    m_targetIopsHasBeenSet(false),
    m_targetVolumeType(VolumeType::NOT_SET),
    m_targetVolumeTypeHasBeenSet(false),
    m_targetThroughput(0),
    m_targetThroughputHasBeenSet(false),
    m_targetMultiAttachEnabled(false),
    m_targetMultiAttachEnabledHasBeenSet(false),
    m_originalSize(0),
    m_originalSizeHasBeenSet(false),
    m_originalIops(0),
    m_originalIopsHasBeenSet(false),
    m_originalVolumeType(VolumeType::NOT_SET),
    m_originalVolumeTypeHasBeenSet(false),
    m_originalThroughput(0),
    m_originalThroughputHasBeenSet(false),
    m_originalMultiAttachEnabled(false),
    m_originalMultiAttachEnabledHasBeenSet(false),
    m_progress(0),
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeModification& VolumeModification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode modificationStateNode = resultNode.FirstChild("modificationState");
    if(!modificationStateNode.IsNull())
    {
      m_modificationState = VolumeModificationStateMapper::GetVolumeModificationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modificationStateNode.GetText()).c_str()).c_str());
      m_modificationStateHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode targetSizeNode = resultNode.FirstChild("targetSize");
    if(!targetSizeNode.IsNull())
    {
      m_targetSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetSizeNode.GetText()).c_str()).c_str());
      m_targetSizeHasBeenSet = true;
    }
    XmlNode targetIopsNode = resultNode.FirstChild("targetIops");
    if(!targetIopsNode.IsNull())
    {
      m_targetIops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetIopsNode.GetText()).c_str()).c_str());
      m_targetIopsHasBeenSet = true;
    }
    XmlNode targetVolumeTypeNode = resultNode.FirstChild("targetVolumeType");
    if(!targetVolumeTypeNode.IsNull())
    {
      m_targetVolumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetVolumeTypeNode.GetText()).c_str()).c_str());
      m_targetVolumeTypeHasBeenSet = true;
    }
    XmlNode targetThroughputNode = resultNode.FirstChild("targetThroughput");
    if(!targetThroughputNode.IsNull())
    {
      m_targetThroughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetThroughputNode.GetText()).c_str()).c_str());
      m_targetThroughputHasBeenSet = true;
    }
    XmlNode targetMultiAttachEnabledNode = resultNode.FirstChild("targetMultiAttachEnabled");
    if(!targetMultiAttachEnabledNode.IsNull())
    {
      m_targetMultiAttachEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetMultiAttachEnabledNode.GetText()).c_str()).c_str());
      m_targetMultiAttachEnabledHasBeenSet = true;
    }
    XmlNode originalSizeNode = resultNode.FirstChild("originalSize");
    if(!originalSizeNode.IsNull())
    {
      m_originalSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalSizeNode.GetText()).c_str()).c_str());
      m_originalSizeHasBeenSet = true;
    }
    XmlNode originalIopsNode = resultNode.FirstChild("originalIops");
    if(!originalIopsNode.IsNull())
    {
      m_originalIops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalIopsNode.GetText()).c_str()).c_str());
      m_originalIopsHasBeenSet = true;
    }
    XmlNode originalVolumeTypeNode = resultNode.FirstChild("originalVolumeType");
    if(!originalVolumeTypeNode.IsNull())
    {
      m_originalVolumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalVolumeTypeNode.GetText()).c_str()).c_str());
      m_originalVolumeTypeHasBeenSet = true;
    }
    XmlNode originalThroughputNode = resultNode.FirstChild("originalThroughput");
    if(!originalThroughputNode.IsNull())
    {
      m_originalThroughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalThroughputNode.GetText()).c_str()).c_str());
      m_originalThroughputHasBeenSet = true;
    }
    XmlNode originalMultiAttachEnabledNode = resultNode.FirstChild("originalMultiAttachEnabled");
    if(!originalMultiAttachEnabledNode.IsNull())
    {
      m_originalMultiAttachEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalMultiAttachEnabledNode.GetText()).c_str()).c_str());
      m_originalMultiAttachEnabledHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText()).c_str()).c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("endTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeModification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_modificationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ModificationState=" << VolumeModificationStateMapper::GetNameForVolumeModificationState(m_modificationState) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_targetSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetSize=" << m_targetSize << "&";
  }

  if(m_targetIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetIops=" << m_targetIops << "&";
  }

  if(m_targetVolumeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetVolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_targetVolumeType) << "&";
  }

  if(m_targetThroughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetThroughput=" << m_targetThroughput << "&";
  }

  if(m_targetMultiAttachEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetMultiAttachEnabled=" << std::boolalpha << m_targetMultiAttachEnabled << "&";
  }

  if(m_originalSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalSize=" << m_originalSize << "&";
  }

  if(m_originalIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalIops=" << m_originalIops << "&";
  }

  if(m_originalVolumeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalVolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_originalVolumeType) << "&";
  }

  if(m_originalThroughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalThroughput=" << m_originalThroughput << "&";
  }

  if(m_originalMultiAttachEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalMultiAttachEnabled=" << std::boolalpha << m_originalMultiAttachEnabled << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << m_progress << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void VolumeModification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_modificationStateHasBeenSet)
  {
      oStream << location << ".ModificationState=" << VolumeModificationStateMapper::GetNameForVolumeModificationState(m_modificationState) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_targetSizeHasBeenSet)
  {
      oStream << location << ".TargetSize=" << m_targetSize << "&";
  }
  if(m_targetIopsHasBeenSet)
  {
      oStream << location << ".TargetIops=" << m_targetIops << "&";
  }
  if(m_targetVolumeTypeHasBeenSet)
  {
      oStream << location << ".TargetVolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_targetVolumeType) << "&";
  }
  if(m_targetThroughputHasBeenSet)
  {
      oStream << location << ".TargetThroughput=" << m_targetThroughput << "&";
  }
  if(m_targetMultiAttachEnabledHasBeenSet)
  {
      oStream << location << ".TargetMultiAttachEnabled=" << std::boolalpha << m_targetMultiAttachEnabled << "&";
  }
  if(m_originalSizeHasBeenSet)
  {
      oStream << location << ".OriginalSize=" << m_originalSize << "&";
  }
  if(m_originalIopsHasBeenSet)
  {
      oStream << location << ".OriginalIops=" << m_originalIops << "&";
  }
  if(m_originalVolumeTypeHasBeenSet)
  {
      oStream << location << ".OriginalVolumeType=" << VolumeTypeMapper::GetNameForVolumeType(m_originalVolumeType) << "&";
  }
  if(m_originalThroughputHasBeenSet)
  {
      oStream << location << ".OriginalThroughput=" << m_originalThroughput << "&";
  }
  if(m_originalMultiAttachEnabledHasBeenSet)
  {
      oStream << location << ".OriginalMultiAttachEnabled=" << std::boolalpha << m_originalMultiAttachEnabled << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << m_progress << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
