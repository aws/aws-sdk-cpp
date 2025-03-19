/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetNetworkInsightsAccessScopeAnalysisFindingsResponse.h>
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

GetNetworkInsightsAccessScopeAnalysisFindingsResponse::GetNetworkInsightsAccessScopeAnalysisFindingsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetNetworkInsightsAccessScopeAnalysisFindingsResponse& GetNetworkInsightsAccessScopeAnalysisFindingsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetNetworkInsightsAccessScopeAnalysisFindingsResponse"))
  {
    resultNode = rootNode.FirstChild("GetNetworkInsightsAccessScopeAnalysisFindingsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAccessScopeAnalysisIdNode = resultNode.FirstChild("networkInsightsAccessScopeAnalysisId");
    if(!networkInsightsAccessScopeAnalysisIdNode.IsNull())
    {
      m_networkInsightsAccessScopeAnalysisId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeAnalysisIdNode.GetText());
      m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true;
    }
    XmlNode analysisStatusNode = resultNode.FirstChild("analysisStatus");
    if(!analysisStatusNode.IsNull())
    {
      m_analysisStatus = AnalysisStatusMapper::GetAnalysisStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(analysisStatusNode.GetText()).c_str()));
      m_analysisStatusHasBeenSet = true;
    }
    XmlNode analysisFindingsNode = resultNode.FirstChild("analysisFindingSet");
    if(!analysisFindingsNode.IsNull())
    {
      XmlNode analysisFindingsMember = analysisFindingsNode.FirstChild("item");
      m_analysisFindingsHasBeenSet = !analysisFindingsMember.IsNull();
      while(!analysisFindingsMember.IsNull())
      {
        m_analysisFindings.push_back(analysisFindingsMember);
        analysisFindingsMember = analysisFindingsMember.NextNode("item");
      }

      m_analysisFindingsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetNetworkInsightsAccessScopeAnalysisFindingsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
