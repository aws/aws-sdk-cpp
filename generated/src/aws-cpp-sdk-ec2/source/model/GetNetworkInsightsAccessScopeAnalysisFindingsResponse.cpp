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

GetNetworkInsightsAccessScopeAnalysisFindingsResponse::GetNetworkInsightsAccessScopeAnalysisFindingsResponse() : 
    m_analysisStatus(AnalysisStatus::NOT_SET)
{
}

GetNetworkInsightsAccessScopeAnalysisFindingsResponse::GetNetworkInsightsAccessScopeAnalysisFindingsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_analysisStatus(AnalysisStatus::NOT_SET)
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
    }
    XmlNode analysisStatusNode = resultNode.FirstChild("analysisStatus");
    if(!analysisStatusNode.IsNull())
    {
      m_analysisStatus = AnalysisStatusMapper::GetAnalysisStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(analysisStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode analysisFindingsNode = resultNode.FirstChild("analysisFindingSet");
    if(!analysisFindingsNode.IsNull())
    {
      XmlNode analysisFindingsMember = analysisFindingsNode.FirstChild("item");
      while(!analysisFindingsMember.IsNull())
      {
        m_analysisFindings.push_back(analysisFindingsMember);
        analysisFindingsMember = analysisFindingsMember.NextNode("item");
      }

    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetNetworkInsightsAccessScopeAnalysisFindingsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
