/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateSnapshotResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateSnapshotResponse::CreateSnapshotResponse() : 
    m_storageTier(StorageTier::NOT_SET),
    m_sseType(SSEType::NOT_SET),
    m_transferType(TransferType::NOT_SET),
    m_completionDurationMinutes(0),
    m_state(SnapshotState::NOT_SET),
    m_volumeSize(0),
    m_encrypted(false)
{
}

CreateSnapshotResponse::CreateSnapshotResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : CreateSnapshotResponse()
{
  *this = result;
}

CreateSnapshotResponse& CreateSnapshotResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateSnapshotResponse"))
  {
    resultNode = rootNode.FirstChild("CreateSnapshotResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ownerAliasNode = resultNode.FirstChild("ownerAlias");
    if(!ownerAliasNode.IsNull())
    {
      m_ownerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAliasNode.GetText());
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
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

    }
    XmlNode storageTierNode = resultNode.FirstChild("storageTier");
    if(!storageTierNode.IsNull())
    {
      m_storageTier = StorageTierMapper::GetStorageTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageTierNode.GetText()).c_str()).c_str());
    }
    XmlNode restoreExpiryTimeNode = resultNode.FirstChild("restoreExpiryTime");
    if(!restoreExpiryTimeNode.IsNull())
    {
      m_restoreExpiryTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(restoreExpiryTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode sseTypeNode = resultNode.FirstChild("sseType");
    if(!sseTypeNode.IsNull())
    {
      m_sseType = SSETypeMapper::GetSSETypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sseTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
    }
    XmlNode transferTypeNode = resultNode.FirstChild("transferType");
    if(!transferTypeNode.IsNull())
    {
      m_transferType = TransferTypeMapper::GetTransferTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(transferTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode completionDurationMinutesNode = resultNode.FirstChild("completionDurationMinutes");
    if(!completionDurationMinutesNode.IsNull())
    {
      m_completionDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completionDurationMinutesNode.GetText()).c_str()).c_str());
    }
    XmlNode completionTimeNode = resultNode.FirstChild("completionTime");
    if(!completionTimeNode.IsNull())
    {
      m_completionTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(completionTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = SnapshotStateMapper::GetSnapshotStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
    }
    XmlNode stateMessageNode = resultNode.FirstChild("statusMessage");
    if(!stateMessageNode.IsNull())
    {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
    }
    XmlNode startTimeNode = resultNode.FirstChild("startTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode volumeSizeNode = resultNode.FirstChild("volumeSize");
    if(!volumeSizeNode.IsNull())
    {
      m_volumeSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeSizeNode.GetText()).c_str()).c_str());
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
    }
    XmlNode dataEncryptionKeyIdNode = resultNode.FirstChild("dataEncryptionKeyId");
    if(!dataEncryptionKeyIdNode.IsNull())
    {
      m_dataEncryptionKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(dataEncryptionKeyIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateSnapshotResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
