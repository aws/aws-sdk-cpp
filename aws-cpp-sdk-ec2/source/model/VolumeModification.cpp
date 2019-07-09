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
    m_originalSize(0),
    m_originalSizeHasBeenSet(false),
    m_originalIops(0),
    m_originalIopsHasBeenSet(false),
    m_originalVolumeType(VolumeType::NOT_SET),
    m_originalVolumeTypeHasBeenSet(false),
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
    m_originalSize(0),
    m_originalSizeHasBeenSet(false),
    m_originalIops(0),
    m_originalIopsHasBeenSet(false),
    m_originalVolumeType(VolumeType::NOT_SET),
    m_originalVolumeTypeHasBeenSet(false),
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
      m_volumeId = volumeIdNode.GetText();
      m_volumeIdHasBeenSet = true;
    }
    XmlNode modificationStateNode = resultNode.FirstChild("modificationState");
    if(!modificationStateNode.IsNull())
    {
      m_modificationState = VolumeModificationStateMapper::GetVolumeModificationStateForName(StringUtils::Trim(modificationStateNode.GetText().c_str()).c_str());
      m_modificationStateHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
    }
    XmlNode targetSizeNode = resultNode.FirstChild("targetSize");
    if(!targetSizeNode.IsNull())
    {
      m_targetSize = StringUtils::ConvertToInt32(StringUtils::Trim(targetSizeNode.GetText().c_str()).c_str());
      m_targetSizeHasBeenSet = true;
    }
    XmlNode targetIopsNode = resultNode.FirstChild("targetIops");
    if(!targetIopsNode.IsNull())
    {
      m_targetIops = StringUtils::ConvertToInt32(StringUtils::Trim(targetIopsNode.GetText().c_str()).c_str());
      m_targetIopsHasBeenSet = true;
    }
    XmlNode targetVolumeTypeNode = resultNode.FirstChild("targetVolumeType");
    if(!targetVolumeTypeNode.IsNull())
    {
      m_targetVolumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(targetVolumeTypeNode.GetText().c_str()).c_str());
      m_targetVolumeTypeHasBeenSet = true;
    }
    XmlNode originalSizeNode = resultNode.FirstChild("originalSize");
    if(!originalSizeNode.IsNull())
    {
      m_originalSize = StringUtils::ConvertToInt32(StringUtils::Trim(originalSizeNode.GetText().c_str()).c_str());
      m_originalSizeHasBeenSet = true;
    }
    XmlNode originalIopsNode = resultNode.FirstChild("originalIops");
    if(!originalIopsNode.IsNull())
    {
      m_originalIops = StringUtils::ConvertToInt32(StringUtils::Trim(originalIopsNode.GetText().c_str()).c_str());
      m_originalIopsHasBeenSet = true;
    }
    XmlNode originalVolumeTypeNode = resultNode.FirstChild("originalVolumeType");
    if(!originalVolumeTypeNode.IsNull())
    {
      m_originalVolumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(originalVolumeTypeNode.GetText().c_str()).c_str());
      m_originalVolumeTypeHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = StringUtils::ConvertToInt64(StringUtils::Trim(progressNode.GetText().c_str()).c_str());
      m_progressHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("endTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(endTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << m_progress << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << m_progress << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
