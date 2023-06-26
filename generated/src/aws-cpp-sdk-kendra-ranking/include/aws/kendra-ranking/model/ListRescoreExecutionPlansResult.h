/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanSummary.h>
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
namespace KendraRanking
{
namespace Model
{
  class ListRescoreExecutionPlansResult
  {
  public:
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult();
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API ListRescoreExecutionPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline const Aws::Vector<RescoreExecutionPlanSummary>& GetSummaryItems() const{ return m_summaryItems; }

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline void SetSummaryItems(const Aws::Vector<RescoreExecutionPlanSummary>& value) { m_summaryItems = value; }

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline void SetSummaryItems(Aws::Vector<RescoreExecutionPlanSummary>&& value) { m_summaryItems = std::move(value); }

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansResult& WithSummaryItems(const Aws::Vector<RescoreExecutionPlanSummary>& value) { SetSummaryItems(value); return *this;}

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansResult& WithSummaryItems(Aws::Vector<RescoreExecutionPlanSummary>&& value) { SetSummaryItems(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansResult& AddSummaryItems(const RescoreExecutionPlanSummary& value) { m_summaryItems.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansResult& AddSummaryItems(RescoreExecutionPlanSummary&& value) { m_summaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline ListRescoreExecutionPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline ListRescoreExecutionPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response.</p>
     */
    inline ListRescoreExecutionPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRescoreExecutionPlansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRescoreExecutionPlansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRescoreExecutionPlansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RescoreExecutionPlanSummary> m_summaryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
