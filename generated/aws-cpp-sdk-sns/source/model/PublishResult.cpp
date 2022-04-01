/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PublishResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

PublishResult::PublishResult()
{
}

PublishResult::PublishResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PublishResult& PublishResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PublishResult"))
  {
    resultNode = rootNode.FirstChild("PublishResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = Aws::Utils::Xml::DecodeEscapedXmlText(messageIdNode.GetText());
    }
    XmlNode sequenceNumberNode = resultNode.FirstChild("SequenceNumber");
    if(!sequenceNumberNode.IsNull())
    {
      m_sequenceNumber = Aws::Utils::Xml::DecodeEscapedXmlText(sequenceNumberNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::PublishResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
