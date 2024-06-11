﻿/**
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


    ///@{
    /**
     * <p>A list of <code>DataQualityRuleRecommendationRunDescription</code>
     * objects.</p>
     */
    inline const Aws::Vector<DataQualityRuleRecommendationRunDescription>& GetRuns() const{ return m_runs; }
    inline void SetRuns(const Aws::Vector<DataQualityRuleRecommendationRunDescription>& value) { m_runs = value; }
    inline void SetRuns(Aws::Vector<DataQualityRuleRecommendationRunDescription>&& value) { m_runs = std::move(value); }
    inline ListDataQualityRuleRecommendationRunsResult& WithRuns(const Aws::Vector<DataQualityRuleRecommendationRunDescription>& value) { SetRuns(value); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& WithRuns(Aws::Vector<DataQualityRuleRecommendationRunDescription>&& value) { SetRuns(std::move(value)); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& AddRuns(const DataQualityRuleRecommendationRunDescription& value) { m_runs.push_back(value); return *this; }
    inline ListDataQualityRuleRecommendationRunsResult& AddRuns(DataQualityRuleRecommendationRunDescription&& value) { m_runs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataQualityRuleRecommendationRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataQualityRuleRecommendationRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataQualityRuleRecommendationRunDescription> m_runs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
