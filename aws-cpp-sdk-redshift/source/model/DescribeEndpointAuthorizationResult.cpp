/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEndpointAuthorizationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeEndpointAuthorizationResult::DescribeEndpointAuthorizationResult()
{
}

DescribeEndpointAuthorizationResult::DescribeEndpointAuthorizationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeEndpointAuthorizationResult& DescribeEndpointAuthorizationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeEndpointAuthorizationResult"))
  {
    resultNode = rootNode.FirstChild("DescribeEndpointAuthorizationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode endpointAuthorizationListNode = resultNode.FirstChild("EndpointAuthorizationList");
    if(!endpointAuthorizationListNode.IsNull())
    {
      XmlNode endpointAuthorizationListMember = endpointAuthorizationListNode.FirstChild("member");
      while(!endpointAuthorizationListMember.IsNull())
      {
        m_endpointAuthorizationList.push_back(endpointAuthorizationListMember);
        endpointAuthorizationListMember = endpointAuthorizationListMember.NextNode("member");
      }

    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeEndpointAuthorizationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
