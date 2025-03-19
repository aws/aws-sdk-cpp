/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Snapshot.h>
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

Snapshot::Snapshot(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Snapshot& Snapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAliasNode.GetText());
      m_ownerAliasHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
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
    XmlNode storageTierNode = resultNode.FirstChild("storageTier");
    if(!storageTierNode.IsNull())
    {
      m_storageTier = StorageTierMapper::GetStorageTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageTierNode.GetText()).c_str()));
      m_storageTierHasBeenSet = true;
    }
    XmlNode restoreExpiryTimeNode = resultNode.FirstChild("restoreExpiryTime");
    if(!restoreExpiryTimeNode.IsNull())
    {
      m_restoreExpiryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restoreExpiryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_restoreExpiryTimeHasBeenSet = true;
    }
    XmlNode sseTypeNode = resultNode.FirstChild("sseType");
    if(!sseTypeNode.IsNull())
    {
      m_sseType = SSETypeMapper::GetSSETypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sseTypeNode.GetText()).c_str()));
      m_sseTypeHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode transferTypeNode = resultNode.FirstChild("transferType");
    if(!transferTypeNode.IsNull())
    {
      m_transferType = TransferTypeMapper::GetTransferTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transferTypeNode.GetText()).c_str()));
      m_transferTypeHasBeenSet = true;
    }
    XmlNode completionDurationMinutesNode = resultNode.FirstChild("completionDurationMinutes");
    if(!completionDurationMinutesNode.IsNull())
    {
      m_completionDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completionDurationMinutesNode.GetText()).c_str()).c_str());
      m_completionDurationMinutesHasBeenSet = true;
    }
    XmlNode completionTimeNode = resultNode.FirstChild("completionTime");
    if(!completionTimeNode.IsNull())
    {
      m_completionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_completionTimeHasBeenSet = true;
    }
    XmlNode fullSnapshotSizeInBytesNode = resultNode.FirstChild("fullSnapshotSizeInBytes");
    if(!fullSnapshotSizeInBytesNode.IsNull())
    {
      m_fullSnapshotSizeInBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fullSnapshotSizeInBytesNode.GetText()).c_str()).c_str());
      m_fullSnapshotSizeInBytesHasBeenSet = true;
    }
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
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = SnapshotStateMapper::GetSnapshotStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("statusMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
      m_progressHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("volumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeSizeNode.GetText()).c_str()).c_str());
      m_volumeSizeHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dataEncryptionKeyIdNode = resultNode.FirstChild("dataEncryptionKeyId");
    if(!dataEncryptionKeyIdNode.IsNull())
    {
      m_dataEncryptionKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(dataEncryptionKeyIdNode.GetText());
      m_dataEncryptionKeyIdHasBeenSet = true;
    }
  }

  return *this;
}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
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
      oStream << location << index << locationValue << ".StorageTier=" << StringUtils::URLEncode(StorageTierMapper::GetNameForStorageTier(m_storageTier)) << "&";
  }

  if(m_restoreExpiryTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RestoreExpiryTime=" << StringUtils::URLEncode(m_restoreExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sseTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SseType=" << StringUtils::URLEncode(SSETypeMapper::GetNameForSSEType(m_sseType)) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_transferTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransferType=" << StringUtils::URLEncode(TransferTypeMapper::GetNameForTransferType(m_transferType)) << "&";
  }

  if(m_completionDurationMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".CompletionDurationMinutes=" << m_completionDurationMinutes << "&";
  }

  if(m_completionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CompletionTime=" << StringUtils::URLEncode(m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_fullSnapshotSizeInBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".FullSnapshotSizeInBytes=" << m_fullSnapshotSizeInBytes << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_volumeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(SnapshotStateMapper::GetNameForSnapshotState(m_state)) << "&";
  }

  if(m_stateMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_progressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_volumeSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VolumeSize=" << m_volumeSize << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dataEncryptionKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataEncryptionKeyId=" << StringUtils::URLEncode(m_dataEncryptionKeyId.c_str()) << "&";
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void Snapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerAliasHasBeenSet)
  {
      oStream << location << ".OwnerAlias=" << StringUtils::URLEncode(m_ownerAlias.c_str()) << "&";
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
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
  if(m_storageTierHasBeenSet)
  {
      oStream << location << ".StorageTier=" << StringUtils::URLEncode(StorageTierMapper::GetNameForStorageTier(m_storageTier)) << "&";
  }
  if(m_restoreExpiryTimeHasBeenSet)
  {
      oStream << location << ".RestoreExpiryTime=" << StringUtils::URLEncode(m_restoreExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sseTypeHasBeenSet)
  {
      oStream << location << ".SseType=" << StringUtils::URLEncode(SSETypeMapper::GetNameForSSEType(m_sseType)) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_transferTypeHasBeenSet)
  {
      oStream << location << ".TransferType=" << StringUtils::URLEncode(TransferTypeMapper::GetNameForTransferType(m_transferType)) << "&";
  }
  if(m_completionDurationMinutesHasBeenSet)
  {
      oStream << location << ".CompletionDurationMinutes=" << m_completionDurationMinutes << "&";
  }
  if(m_completionTimeHasBeenSet)
  {
      oStream << location << ".CompletionTime=" << StringUtils::URLEncode(m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_fullSnapshotSizeInBytesHasBeenSet)
  {
      oStream << location << ".FullSnapshotSizeInBytes=" << m_fullSnapshotSizeInBytes << "&";
  }
  if(m_snapshotIdHasBeenSet)
  {
      oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
  if(m_volumeIdHasBeenSet)
  {
      oStream << location << ".VolumeId=" << StringUtils::URLEncode(m_volumeId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(SnapshotStateMapper::GetNameForSnapshotState(m_state)) << "&";
  }
  if(m_stateMessageHasBeenSet)
  {
      oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_progressHasBeenSet)
  {
      oStream << location << ".Progress=" << StringUtils::URLEncode(m_progress.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_volumeSizeHasBeenSet)
  {
      oStream << location << ".VolumeSize=" << m_volumeSize << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dataEncryptionKeyIdHasBeenSet)
  {
      oStream << location << ".DataEncryptionKeyId=" << StringUtils::URLEncode(m_dataEncryptionKeyId.c_str()) << "&";
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace EC2
} // namespace Aws
