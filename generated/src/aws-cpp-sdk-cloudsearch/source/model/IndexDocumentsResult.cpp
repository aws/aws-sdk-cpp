/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/IndexDocumentsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudSearch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

IndexDocumentsResult::IndexDocumentsResult()
{
}

IndexDocumentsResult::IndexDocumentsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

IndexDocumentsResult& IndexDocumentsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "IndexDocumentsResult"))
  {
    resultNode = rootNode.FirstChild("IndexDocumentsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode fieldNamesNode = resultNode.FirstChild("FieldNames");
    if(!fieldNamesNode.IsNull())
    {
      XmlNode fieldNamesMember = fieldNamesNode.FirstChild("member");
      while(!fieldNamesMember.IsNull())
      {
        m_fieldNames.push_back(fieldNamesMember.GetText());
        fieldNamesMember = fieldNamesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::IndexDocumentsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
