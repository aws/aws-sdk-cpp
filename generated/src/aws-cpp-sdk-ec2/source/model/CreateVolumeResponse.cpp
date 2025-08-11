/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVolumeResponse.h>
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

CreateVolumeResponse::CreateVolumeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateVolumeResponse& CreateVolumeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateVolumeResponse"))
  {
    resultNode = rootNode.FirstChild("CreateVolumeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
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
    XmlNode volumeTypeNode = resultNode.FirstChild("volumeType");
    if(!volumeTypeNode.IsNull())
    {
      m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeTypeNode.GetText()).c_str()));
      m_volumeTypeHasBeenSet = true;
    }
    XmlNode fastRestoredNode = resultNode.FirstChild("fastRestored");
    if(!fastRestoredNode.IsNull())
    {
      m_fastRestored = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fastRestoredNode.GetText()).c_str()).c_str());
      m_fastRestoredHasBeenSet = true;
    }
    XmlNode multiAttachEnabledNode = resultNode.FirstChild("multiAttachEnabled");
    if(!multiAttachEnabledNode.IsNull())
    {
      m_multiAttachEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAttachEnabledNode.GetText()).c_str()).c_str());
      m_multiAttachEnabledHasBeenSet = true;
    }
    XmlNode throughputNode = resultNode.FirstChild("throughput");
    if(!throughputNode.IsNull())
    {
      m_throughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(throughputNode.GetText()).c_str()).c_str());
      m_throughputHasBeenSet = true;
    }
    XmlNode sseTypeNode = resultNode.FirstChild("sseType");
    if(!sseTypeNode.IsNull())
    {
      m_sseType = SSETypeMapper::GetSSETypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sseTypeNode.GetText()).c_str()));
      m_sseTypeHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("operator");
    if(!operatorNode.IsNull())
    {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
    XmlNode volumeInitializationRateNode = resultNode.FirstChild("volumeInitializationRate");
    if(!volumeInitializationRateNode.IsNull())
    {
      m_volumeInitializationRate = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeInitializationRateNode.GetText()).c_str()).c_str());
      m_volumeInitializationRateHasBeenSet = true;
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
      m_volumeIdHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = VolumeStateMapper::GetVolumeStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode attachmentsNode = resultNode.FirstChild("attachmentSet");
    if(!attachmentsNode.IsNull())
    {
      XmlNode attachmentsMember = attachmentsNode.FirstChild("item");
      m_attachmentsHasBeenSet = !attachmentsMember.IsNull();
      while(!attachmentsMember.IsNull())
      {
        m_attachments.push_back(attachmentsMember);
        attachmentsMember = attachmentsMember.NextNode("item");
      }

      m_attachmentsHasBeenSet = true;
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
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateVolumeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
