/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra-ranking/model/RescoreResultItem.h>
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
  class RescoreResult
  {
  public:
    AWS_KENDRARANKING_API RescoreResult();
    AWS_KENDRARANKING_API RescoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API RescoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline const Aws::String& GetRescoreId() const{ return m_rescoreId; }

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline void SetRescoreId(const Aws::String& value) { m_rescoreId = value; }

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline void SetRescoreId(Aws::String&& value) { m_rescoreId = std::move(value); }

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline void SetRescoreId(const char* value) { m_rescoreId.assign(value); }

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline RescoreResult& WithRescoreId(const Aws::String& value) { SetRescoreId(value); return *this;}

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline RescoreResult& WithRescoreId(Aws::String&& value) { SetRescoreId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline RescoreResult& WithRescoreId(const char* value) { SetRescoreId(value); return *this;}


    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline const Aws::Vector<RescoreResultItem>& GetResultItems() const{ return m_resultItems; }

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline void SetResultItems(const Aws::Vector<RescoreResultItem>& value) { m_resultItems = value; }

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline void SetResultItems(Aws::Vector<RescoreResultItem>&& value) { m_resultItems = std::move(value); }

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline RescoreResult& WithResultItems(const Aws::Vector<RescoreResultItem>& value) { SetResultItems(value); return *this;}

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline RescoreResult& WithResultItems(Aws::Vector<RescoreResultItem>&& value) { SetResultItems(std::move(value)); return *this;}

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline RescoreResult& AddResultItems(const RescoreResultItem& value) { m_resultItems.push_back(value); return *this; }

    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline RescoreResult& AddResultItems(RescoreResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RescoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RescoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RescoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_rescoreId;

    Aws::Vector<RescoreResultItem> m_resultItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
