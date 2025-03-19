/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/GetSAMLProviderResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetSAMLProviderResult::GetSAMLProviderResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetSAMLProviderResult& GetSAMLProviderResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetSAMLProviderResult"))
  {
    resultNode = rootNode.FirstChild("GetSAMLProviderResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sAMLProviderUUIDNode = resultNode.FirstChild("SAMLProviderUUID");
    if(!sAMLProviderUUIDNode.IsNull())
    {
      m_sAMLProviderUUID = Aws::Utils::Xml::DecodeEscapedXmlText(sAMLProviderUUIDNode.GetText());
      m_sAMLProviderUUIDHasBeenSet = true;
    }
    XmlNode sAMLMetadataDocumentNode = resultNode.FirstChild("SAMLMetadataDocument");
    if(!sAMLMetadataDocumentNode.IsNull())
    {
      m_sAMLMetadataDocument = Aws::Utils::Xml::DecodeEscapedXmlText(sAMLMetadataDocumentNode.GetText());
      m_sAMLMetadataDocumentHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode validUntilNode = resultNode.FirstChild("ValidUntil");
    if(!validUntilNode.IsNull())
    {
      m_validUntil = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validUntilNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validUntilHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("member");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("member");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode assertionEncryptionModeNode = resultNode.FirstChild("AssertionEncryptionMode");
    if(!assertionEncryptionModeNode.IsNull())
    {
      m_assertionEncryptionMode = AssertionEncryptionModeTypeMapper::GetAssertionEncryptionModeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(assertionEncryptionModeNode.GetText()).c_str()));
      m_assertionEncryptionModeHasBeenSet = true;
    }
    XmlNode privateKeyListNode = resultNode.FirstChild("PrivateKeyList");
    if(!privateKeyListNode.IsNull())
    {
      XmlNode privateKeyListMember = privateKeyListNode.FirstChild("member");
      m_privateKeyListHasBeenSet = !privateKeyListMember.IsNull();
      while(!privateKeyListMember.IsNull())
      {
        m_privateKeyList.push_back(privateKeyListMember);
        privateKeyListMember = privateKeyListMember.NextNode("member");
      }

      m_privateKeyListHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetSAMLProviderResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
