/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportKeyPairResponse.h>
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

ImportKeyPairResponse::ImportKeyPairResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ImportKeyPairResponse& ImportKeyPairResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ImportKeyPairResponse"))
  {
    resultNode = rootNode.FirstChild("ImportKeyPairResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode keyFingerprintNode = resultNode.FirstChild("keyFingerprint");
    if(!keyFingerprintNode.IsNull())
    {
      m_keyFingerprint = Aws::Utils::Xml::DecodeEscapedXmlText(keyFingerprintNode.GetText());
      m_keyFingerprintHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("keyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = Aws::Utils::Xml::DecodeEscapedXmlText(keyNameNode.GetText());
      m_keyNameHasBeenSet = true;
    }
    XmlNode keyPairIdNode = resultNode.FirstChild("keyPairId");
    if(!keyPairIdNode.IsNull())
    {
      m_keyPairId = Aws::Utils::Xml::DecodeEscapedXmlText(keyPairIdNode.GetText());
      m_keyPairIdHasBeenSet = true;
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
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ImportKeyPairResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
