/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegisterPublisherResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RegisterPublisherResult::RegisterPublisherResult()
{
}

RegisterPublisherResult::RegisterPublisherResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RegisterPublisherResult& RegisterPublisherResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RegisterPublisherResult"))
  {
    resultNode = rootNode.FirstChild("RegisterPublisherResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::RegisterPublisherResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
