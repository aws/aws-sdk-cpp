/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInsightsAccessScopeResponse.h>
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

DeleteNetworkInsightsAccessScopeResponse::DeleteNetworkInsightsAccessScopeResponse()
{
}

DeleteNetworkInsightsAccessScopeResponse::DeleteNetworkInsightsAccessScopeResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteNetworkInsightsAccessScopeResponse& DeleteNetworkInsightsAccessScopeResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteNetworkInsightsAccessScopeResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteNetworkInsightsAccessScopeResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAccessScopeIdNode = resultNode.FirstChild("networkInsightsAccessScopeId");
    if(!networkInsightsAccessScopeIdNode.IsNull())
    {
      m_networkInsightsAccessScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteNetworkInsightsAccessScopeResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
