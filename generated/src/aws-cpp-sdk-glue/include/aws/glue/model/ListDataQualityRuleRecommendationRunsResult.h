/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityRuleRecommendationRunDescription.h>
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
namespace Glue
{
namespace Model
{
  class ListDataQualityRuleRecommendationRunsResult
  {
  public:
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult();
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityRuleRecommendationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline const Aws::Vector<DataQualityRuleRecommendationRunDescription>& GetRuns() const{ return m_runs; }

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline void SetRuns(const Aws::Vector<DataQualityRuleRecommendationRunDescription>& value) { m_runs = value; }

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline void SetRuns(Aws::Vector<DataQualityRuleRecommendationRunDescription>&& value) { m_runs = std::move(value); }

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& WithRuns(const Aws::Vector<DataQualityRuleRecommendationRunDescription>& value) { SetRuns(value); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& WithRuns(Aws::Vector<DataQualityRuleRecommendationRunDescription>&& value) { SetRuns(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& AddRuns(const DataQualityRuleRecommendationRunDescription& value) { m_runs.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& AddRuns(DataQualityRuleRecommendationRunDescription&& value) { m_runs.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataQualityRuleRecommendationRunDescription> m_runs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
