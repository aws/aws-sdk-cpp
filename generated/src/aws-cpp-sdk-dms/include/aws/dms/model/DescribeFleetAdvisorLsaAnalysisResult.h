/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/FleetAdvisorLsaAnalysisResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeFleetAdvisorLsaAnalysisResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorLsaAnalysisResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorLsaAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorLsaAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline const Aws::Vector<FleetAdvisorLsaAnalysisResponse>& GetAnalysis() const{ return m_analysis; }

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline void SetAnalysis(const Aws::Vector<FleetAdvisorLsaAnalysisResponse>& value) { m_analysis = value; }

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline void SetAnalysis(Aws::Vector<FleetAdvisorLsaAnalysisResponse>&& value) { m_analysis = std::move(value); }

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& WithAnalysis(const Aws::Vector<FleetAdvisorLsaAnalysisResponse>& value) { SetAnalysis(value); return *this;}

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& WithAnalysis(Aws::Vector<FleetAdvisorLsaAnalysisResponse>&& value) { SetAnalysis(std::move(value)); return *this;}

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& AddAnalysis(const FleetAdvisorLsaAnalysisResponse& value) { m_analysis.push_back(value); return *this; }

    /**
     * <p>A list of <code>FleetAdvisorLsaAnalysisResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& AddAnalysis(FleetAdvisorLsaAnalysisResponse&& value) { m_analysis.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorLsaAnalysisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FleetAdvisorLsaAnalysisResponse> m_analysis;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
