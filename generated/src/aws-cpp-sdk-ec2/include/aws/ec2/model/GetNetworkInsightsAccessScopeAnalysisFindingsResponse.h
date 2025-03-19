/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AnalysisStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AccessScopeAnalysisFinding.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetNetworkInsightsAccessScopeAnalysisFindingsResponse
  {
  public:
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse() = default;
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const { return m_networkInsightsAccessScopeAnalysisId; }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    void SetNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { m_networkInsightsAccessScopeAnalysisIdHasBeenSet = true; m_networkInsightsAccessScopeAnalysisId = std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value); }
    template<typename NetworkInsightsAccessScopeAnalysisIdT = Aws::String>
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNetworkInsightsAccessScopeAnalysisId(NetworkInsightsAccessScopeAnalysisIdT&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::forward<NetworkInsightsAccessScopeAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline AnalysisStatus GetAnalysisStatus() const { return m_analysisStatus; }
    inline void SetAnalysisStatus(AnalysisStatus value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisStatus(AnalysisStatus value) { SetAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline const Aws::Vector<AccessScopeAnalysisFinding>& GetAnalysisFindings() const { return m_analysisFindings; }
    template<typename AnalysisFindingsT = Aws::Vector<AccessScopeAnalysisFinding>>
    void SetAnalysisFindings(AnalysisFindingsT&& value) { m_analysisFindingsHasBeenSet = true; m_analysisFindings = std::forward<AnalysisFindingsT>(value); }
    template<typename AnalysisFindingsT = Aws::Vector<AccessScopeAnalysisFinding>>
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisFindings(AnalysisFindingsT&& value) { SetAnalysisFindings(std::forward<AnalysisFindingsT>(value)); return *this;}
    template<typename AnalysisFindingsT = AccessScopeAnalysisFinding>
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse& AddAnalysisFindings(AnalysisFindingsT&& value) { m_analysisFindingsHasBeenSet = true; m_analysisFindings.emplace_back(std::forward<AnalysisFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;
    bool m_networkInsightsAccessScopeAnalysisIdHasBeenSet = false;

    AnalysisStatus m_analysisStatus{AnalysisStatus::NOT_SET};
    bool m_analysisStatusHasBeenSet = false;

    Aws::Vector<AccessScopeAnalysisFinding> m_analysisFindings;
    bool m_analysisFindingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
