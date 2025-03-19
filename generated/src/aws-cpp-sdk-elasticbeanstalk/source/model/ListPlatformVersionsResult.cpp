/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ListPlatformVersionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ListPlatformVersionsResult::ListPlatformVersionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListPlatformVersionsResult& ListPlatformVersionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ListPlatformVersionsResult"))
  {
    resultNode = rootNode.FirstChild("ListPlatformVersionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode platformSummaryListNode = resultNode.FirstChild("PlatformSummaryList");
    if(!platformSummaryListNode.IsNull())
    {
      XmlNode platformSummaryListMember = platformSummaryListNode.FirstChild("member");
      m_platformSummaryListHasBeenSet = !platformSummaryListMember.IsNull();
      while(!platformSummaryListMember.IsNull())
      {
        m_platformSummaryList.push_back(platformSummaryListMember);
        platformSummaryListMember = platformSummaryListMember.NextNode("member");
      }

      m_platformSummaryListHasBeenSet = true;
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
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::ListPlatformVersionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
