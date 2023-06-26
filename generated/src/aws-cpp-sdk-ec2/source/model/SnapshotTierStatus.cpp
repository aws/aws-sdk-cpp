/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SnapshotTierStatus.h>
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

SnapshotTierStatus::SnapshotTierStatus() : 
    m_snapshotIdHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_status(SnapshotState::NOT_SET),
    m_statusHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_storageTier(StorageTier::NOT_SET),
    m_storageTierHasBeenSet(false),
    m_lastTieringStartTimeHasBeenSet(false),
    m_lastTieringProgress(0),
    m_lastTieringProgressHasBeenSet(false),
    m_lastTieringOperationStatus(TieringOperationStatus::NOT_SET),
    m_lastTieringOperationStatusHasBeenSet(false),
    m_lastTieringOperationStatusDetailHasBeenSet(false),
    m_archivalCompleteTimeHasBeenSet(false),
    m_restoreExpiryTimeHasBeenSet(false)
{
}

SnapshotTierStatus::SnapshotTierStatus(const XmlNode& xmlNode) : 
    m_snapshotIdHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_status(SnapshotState::NOT_SET),
    m_statusHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_storageTier(StorageTier::NOT_SET),
    m_storageTierHasBeenSet(false),
    m_lastTieringStartTimeHasBeenSet(false),
    m_lastTieringProgress(0),
    m_lastTieringProgressHasBeenSet(false),
    m_lastTieringOperationStatus(TieringOperationStatus::NOT_SET),
    m_lastTieringOperationStatusHasBeenSet(false),
    m_lastTieringOperationStatusDetailHasBeenSet(false),
    m_archivalCompleteTimeHasBeenSet(false),
    m_restoreExpiryTimeHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotTierStatus& SnapshotTierStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = SnapshotStateMapper::GetSnapshotStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode storageTierNode = resultNode.FirstChild("storageTier");
    if(!storageTierNode.IsNull())
    {
      m_storageTier = StorageTierMapper::GetStorageTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageTierNode.GetText()).c_str()).c_str());
      m_storageTierHasBeenSet = true;
    }
    XmlNode lastTieringStartTimeNode = resultNode.FirstChild("lastTieringStartTime");
    if(!lastTieringStartTimeNode.IsNull())
    {
      m_lastTieringStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastTieringStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastTieringStartTimeHasBeenSet = true;
    }
    XmlNode lastTieringProgressNode = resultNode.FirstChild("lastTieringProgress");
    if(!lastTieringProgressNode.IsNull())
    {
      m_lastTieringProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastTieringProgressNode.GetText()).c_str()).c_str());
      m_lastTieringProgressHasBeenSet = true;
    }
    XmlNode lastTieringOperationStatusNode = resultNode.FirstChild("lastTieringOperationStatus");
    if(!lastTieringOperationStatusNode.IsNull())
    {
      m_lastTieringOperationStatus = TieringOperationStatusMapper::GetTieringOperationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastTieringOperationStatusNode.GetText()).c_str()).c_str());
      m_lastTieringOperationStatusHasBeenSet = true;
    }
    XmlNode lastTieringOperationStatusDetailNode = resultNode.FirstChild("lastTieringOperationStatusDetail");
    if(!lastTieringOperationStatusDetailNode.IsNull())
    {
      m_lastTieringOperationStatusDetail = Aws::Utils::Xml::DecodeEscapedXmlText(lastTieringOperationStatusDetailNode.GetText());
      m_lastTieringOperationStatusDetailHasBeenSet = true;
    }
    XmlNode archivalCompleteTimeNode = resultNode.FirstChild("archivalCompleteTime");
    if(!archivalCompleteTimeNode.IsNull())
    {
      m_archivalCompleteTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(archivalCompleteTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_archivalCompleteTimeHasBeenSet = true;
    }
    XmlNode restoreExpiryTimeNode = resultNode.FirstChild("restoreExpiryTime");
    if(!restoreExpiryTimeNode.IsNull())
    {
      m_restoreExpiryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restoreExpiryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_restoreExpiryTimeHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotTierStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << SnapshotStateMapper::GetNameForSnapshotState(m_status) << "&";
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

  if(m_storageTierHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageTier=" << StorageTierMapper::GetNameForStorageTier(m_storageTier) << "&";
  }

  if(m_lastTieringStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastTieringStartTime=" << StringUtils::URLEncode(m_lastTieringStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastTieringProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastTieringProgress=" << m_lastTieringProgress << "&";
  }

  if(m_lastTieringOperationStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastTieringOperationStatus=" << TieringOperationStatusMapper::GetNameForTieringOperationStatus(m_lastTieringOperationStatus) << "&";
  }

  if(m_lastTieringOperationStatusDetailHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastTieringOperationStatusDetail=" << StringUtils::URLEncode(m_lastTieringOperationStatusDetail.c_str()) << "&";
  }

  if(m_archivalCompleteTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ArchivalCompleteTime=" << StringUtils::URLEncode(m_archivalCompleteTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_restoreExpiryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RestoreExpiryTime=" << StringUtils::URLEncode(m_restoreExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void SnapshotTierStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << SnapshotStateMapper::GetNameForSnapshotState(m_status) << "&";
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
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_storageTierHasBeenSet)
  {
      oStream << location << ".StorageTier=" << StorageTierMapper::GetNameForStorageTier(m_storageTier) << "&";
  }
  if(m_lastTieringStartTimeHasBeenSet)
  {
      oStream << location << ".LastTieringStartTime=" << StringUtils::URLEncode(m_lastTieringStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastTieringProgressHasBeenSet)
  {
      oStream << location << ".LastTieringProgress=" << m_lastTieringProgress << "&";
  }
  if(m_lastTieringOperationStatusHasBeenSet)
  {
      oStream << location << ".LastTieringOperationStatus=" << TieringOperationStatusMapper::GetNameForTieringOperationStatus(m_lastTieringOperationStatus) << "&";
  }
  if(m_lastTieringOperationStatusDetailHasBeenSet)
  {
      oStream << location << ".LastTieringOperationStatusDetail=" << StringUtils::URLEncode(m_lastTieringOperationStatusDetail.c_str()) << "&";
  }
  if(m_archivalCompleteTimeHasBeenSet)
  {
      oStream << location << ".ArchivalCompleteTime=" << StringUtils::URLEncode(m_archivalCompleteTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_restoreExpiryTimeHasBeenSet)
  {
      oStream << location << ".RestoreExpiryTime=" << StringUtils::URLEncode(m_restoreExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
