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
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse();
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetNetworkInsightsAccessScopeAnalysisFindingsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline const Aws::String& GetNetworkInsightsAccessScopeAnalysisId() const{ return m_networkInsightsAccessScopeAnalysisId; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { m_networkInsightsAccessScopeAnalysisId = value; }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { m_networkInsightsAccessScopeAnalysisId = std::move(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline void SetNetworkInsightsAccessScopeAnalysisId(const char* value) { m_networkInsightsAccessScopeAnalysisId.assign(value); }

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNetworkInsightsAccessScopeAnalysisId(const Aws::String& value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNetworkInsightsAccessScopeAnalysisId(Aws::String&& value) { SetNetworkInsightsAccessScopeAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Network Access Scope analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNetworkInsightsAccessScopeAnalysisId(const char* value) { SetNetworkInsightsAccessScopeAnalysisId(value); return *this;}


    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline const AnalysisStatus& GetAnalysisStatus() const{ return m_analysisStatus; }

    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline void SetAnalysisStatus(const AnalysisStatus& value) { m_analysisStatus = value; }

    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline void SetAnalysisStatus(AnalysisStatus&& value) { m_analysisStatus = std::move(value); }

    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisStatus(const AnalysisStatus& value) { SetAnalysisStatus(value); return *this;}

    /**
     * <p>The status of Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisStatus(AnalysisStatus&& value) { SetAnalysisStatus(std::move(value)); return *this;}


    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline const Aws::Vector<AccessScopeAnalysisFinding>& GetAnalysisFindings() const{ return m_analysisFindings; }

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline void SetAnalysisFindings(const Aws::Vector<AccessScopeAnalysisFinding>& value) { m_analysisFindings = value; }

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline void SetAnalysisFindings(Aws::Vector<AccessScopeAnalysisFinding>&& value) { m_analysisFindings = std::move(value); }

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisFindings(const Aws::Vector<AccessScopeAnalysisFinding>& value) { SetAnalysisFindings(value); return *this;}

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithAnalysisFindings(Aws::Vector<AccessScopeAnalysisFinding>&& value) { SetAnalysisFindings(std::move(value)); return *this;}

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& AddAnalysisFindings(const AccessScopeAnalysisFinding& value) { m_analysisFindings.push_back(value); return *this; }

    /**
     * <p>The findings associated with Network Access Scope Analysis.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& AddAnalysisFindings(AccessScopeAnalysisFinding&& value) { m_analysisFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetNetworkInsightsAccessScopeAnalysisFindingsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_networkInsightsAccessScopeAnalysisId;

    AnalysisStatus m_analysisStatus;

    Aws::Vector<AccessScopeAnalysisFinding> m_analysisFindings;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
