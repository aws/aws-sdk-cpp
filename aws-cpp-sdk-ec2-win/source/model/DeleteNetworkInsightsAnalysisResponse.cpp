/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteNetworkInsightsAnalysisResponse.h>
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

DeleteNetworkInsightsAnalysisResponse::DeleteNetworkInsightsAnalysisResponse()
{
}

DeleteNetworkInsightsAnalysisResponse::DeleteNetworkInsightsAnalysisResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteNetworkInsightsAnalysisResponse& DeleteNetworkInsightsAnalysisResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteNetworkInsightsAnalysisResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteNetworkInsightsAnalysisResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAnalysisIdNode = resultNode.FirstChild("networkInsightsAnalysisId");
    if(!networkInsightsAnalysisIdNode.IsNull())
    {
      m_networkInsightsAnalysisId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAnalysisIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteNetworkInsightsAnalysisResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
