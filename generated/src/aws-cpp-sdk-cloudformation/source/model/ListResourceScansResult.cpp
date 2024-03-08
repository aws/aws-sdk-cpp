/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListResourceScansResult.h>
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

ListResourceScansResult::ListResourceScansResult()
{
}

ListResourceScansResult::ListResourceScansResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListResourceScansResult& ListResourceScansResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListResourceScansResult"))
  {
    resultNode = rootNode.FirstChild("ListResourceScansResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resourceScanSummariesNode = resultNode.FirstChild("ResourceScanSummaries");
    if(!resourceScanSummariesNode.IsNull())
    {
      XmlNode resourceScanSummariesMember = resourceScanSummariesNode.FirstChild("member");
      while(!resourceScanSummariesMember.IsNull())
      {
        m_resourceScanSummaries.push_back(resourceScanSummariesMember);
        resourceScanSummariesMember = resourceScanSummariesMember.NextNode("member");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::ListResourceScansResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
