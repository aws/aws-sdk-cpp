/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportImageResponse.h>
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

ImportImageResponse::ImportImageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ImportImageResponse& ImportImageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ImportImageResponse"))
  {
    resultNode = rootNode.FirstChild("ImportImageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText());
      m_architectureHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = Aws::Utils::Xml::DecodeEscapedXmlText(hypervisorNode.GetText());
      m_hypervisorHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode importTaskIdNode = resultNode.FirstChild("importTaskId");
    if(!importTaskIdNode.IsNull())
    {
      m_importTaskId = Aws::Utils::Xml::DecodeEscapedXmlText(importTaskIdNode.GetText());
      m_importTaskIdHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("kmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode licenseTypeNode = resultNode.FirstChild("licenseType");
    if(!licenseTypeNode.IsNull())
    {
      m_licenseType = Aws::Utils::Xml::DecodeEscapedXmlText(licenseTypeNode.GetText());
      m_licenseTypeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText());
      m_platformHasBeenSet = true;
    }
    XmlNode progressNode = resultNode.FirstChild("progress");
    if(!progressNode.IsNull())
    {
      m_progress = Aws::Utils::Xml::DecodeEscapedXmlText(progressNode.GetText());
      m_progressHasBeenSet = true;
    }
    XmlNode snapshotDetailsNode = resultNode.FirstChild("snapshotDetailSet");
    if(!snapshotDetailsNode.IsNull())
    {
      XmlNode snapshotDetailsMember = snapshotDetailsNode.FirstChild("item");
      m_snapshotDetailsHasBeenSet = !snapshotDetailsMember.IsNull();
      while(!snapshotDetailsMember.IsNull())
      {
        m_snapshotDetails.push_back(snapshotDetailsMember);
        snapshotDetailsMember = snapshotDetailsMember.NextNode("item");
      }

      m_snapshotDetailsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode licenseSpecificationsNode = resultNode.FirstChild("licenseSpecifications");
    if(!licenseSpecificationsNode.IsNull())
    {
      XmlNode licenseSpecificationsMember = licenseSpecificationsNode.FirstChild("item");
      m_licenseSpecificationsHasBeenSet = !licenseSpecificationsMember.IsNull();
      while(!licenseSpecificationsMember.IsNull())
      {
        m_licenseSpecifications.push_back(licenseSpecificationsMember);
        licenseSpecificationsMember = licenseSpecificationsMember.NextNode("item");
      }

      m_licenseSpecificationsHasBeenSet = true;
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
    XmlNode usageOperationNode = resultNode.FirstChild("usageOperation");
    if(!usageOperationNode.IsNull())
    {
      m_usageOperation = Aws::Utils::Xml::DecodeEscapedXmlText(usageOperationNode.GetText());
      m_usageOperationHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ImportImageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
