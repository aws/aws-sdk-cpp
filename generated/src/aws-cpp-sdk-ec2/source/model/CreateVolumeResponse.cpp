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

CreateVolumeResponse::CreateVolumeResponse() : 
    m_encrypted(false),
    m_size(0),
    m_state(VolumeState::NOT_SET),
    m_iops(0),
    m_volumeType(VolumeType::NOT_SET),
    m_fastRestored(false),
    m_multiAttachEnabled(false),
    m_throughput(0)
{
}

CreateVolumeResponse::CreateVolumeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_encrypted(false),
    m_size(0),
    m_state(VolumeState::NOT_SET),
    m_iops(0),
    m_volumeType(VolumeType::NOT_SET),
    m_fastRestored(false),
    m_multiAttachEnabled(false),
    m_throughput(0)
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
    XmlNode attachmentsNode = resultNode.FirstChild("attachmentSet");
    if(!attachmentsNode.IsNull())
    {
      XmlNode attachmentsMember = attachmentsNode.FirstChild("item");
      while(!attachmentsMember.IsNull())
      {
        m_attachments.push_back(attachmentsMember);
        attachmentsMember = attachmentsMember.NextNode("item");
      }

    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
    }
    XmlNode sizeNode = resultNode.FirstChild("size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if(!snapshotIdNode.IsNull())
    {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
    }
    XmlNode stateNode = resultNode.FirstChild("status");
    if(!stateNode.IsNull())
    {
      m_state = VolumeStateMapper::GetVolumeStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
    }
    XmlNode volumeIdNode = resultNode.FirstChild("volumeId");
    if(!volumeIdNode.IsNull())
    {
      m_volumeId = Aws::Utils::Xml::DecodeEscapedXmlText(volumeIdNode.GetText());
    }
    XmlNode iopsNode = resultNode.FirstChild("iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
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
    XmlNode volumeTypeNode = resultNode.FirstChild("volumeType");
    if(!volumeTypeNode.IsNull())
    {
      m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(volumeTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode fastRestoredNode = resultNode.FirstChild("fastRestored");
    if(!fastRestoredNode.IsNull())
    {
      m_fastRestored = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fastRestoredNode.GetText()).c_str()).c_str());
    }
    XmlNode multiAttachEnabledNode = resultNode.FirstChild("multiAttachEnabled");
    if(!multiAttachEnabledNode.IsNull())
    {
      m_multiAttachEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAttachEnabledNode.GetText()).c_str()).c_str());
    }
    XmlNode throughputNode = resultNode.FirstChild("throughput");
    if(!throughputNode.IsNull())
    {
      m_throughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(throughputNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateVolumeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
