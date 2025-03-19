/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/BuildSuggestersResult.h>
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

BuildSuggestersResult::BuildSuggestersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BuildSuggestersResult& BuildSuggestersResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BuildSuggestersResult"))
  {
    resultNode = rootNode.FirstChild("BuildSuggestersResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode fieldNamesNode = resultNode.FirstChild("FieldNames");
    if(!fieldNamesNode.IsNull())
    {
      XmlNode fieldNamesMember = fieldNamesNode.FirstChild("member");
      m_fieldNamesHasBeenSet = !fieldNamesMember.IsNull();
      while(!fieldNamesMember.IsNull())
      {
        m_fieldNames.push_back(fieldNamesMember.GetText());
        fieldNamesMember = fieldNamesMember.NextNode("member");
      }

      m_fieldNamesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::CloudSearch::Model::BuildSuggestersResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
