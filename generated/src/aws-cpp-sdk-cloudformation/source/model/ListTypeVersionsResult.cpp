/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListTypeVersionsResult.h>
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

ListTypeVersionsResult::ListTypeVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTypeVersionsResult& ListTypeVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListTypeVersionsResult"))
  {
    resultNode = rootNode.FirstChild("ListTypeVersionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode typeVersionSummariesNode = resultNode.FirstChild("TypeVersionSummaries");
    if(!typeVersionSummariesNode.IsNull())
    {
      XmlNode typeVersionSummariesMember = typeVersionSummariesNode.FirstChild("member");
      m_typeVersionSummariesHasBeenSet = !typeVersionSummariesMember.IsNull();
      while(!typeVersionSummariesMember.IsNull())
      {
        m_typeVersionSummaries.push_back(typeVersionSummariesMember);
        typeVersionSummariesMember = typeVersionSummariesMember.NextNode("member");
      }

      m_typeVersionSummariesHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::ListTypeVersionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
