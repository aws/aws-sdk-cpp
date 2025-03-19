/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/ListTemplatesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListTemplatesResult::ListTemplatesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTemplatesResult& ListTemplatesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListTemplatesResult"))
  {
    resultNode = rootNode.FirstChild("ListTemplatesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode templatesMetadataNode = resultNode.FirstChild("TemplatesMetadata");
    if(!templatesMetadataNode.IsNull())
    {
      XmlNode templatesMetadataMember = templatesMetadataNode.FirstChild("member");
      m_templatesMetadataHasBeenSet = !templatesMetadataMember.IsNull();
      while(!templatesMetadataMember.IsNull())
      {
        m_templatesMetadata.push_back(templatesMetadataMember);
        templatesMetadataMember = templatesMetadataMember.NextNode("member");
      }

      m_templatesMetadataHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SES::Model::ListTemplatesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
