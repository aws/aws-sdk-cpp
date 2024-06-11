﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/GenerationSummary.h>
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
namespace CostExplorer
{
namespace Model
{
  class ListSavingsPlansPurchaseRecommendationGenerationResult
  {
  public:
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult();
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of historical recommendation generations.</p>
     */
    inline const Aws::Vector<GenerationSummary>& GetGenerationSummaryList() const{ return m_generationSummaryList; }
    inline void SetGenerationSummaryList(const Aws::Vector<GenerationSummary>& value) { m_generationSummaryList = value; }
    inline void SetGenerationSummaryList(Aws::Vector<GenerationSummary>&& value) { m_generationSummaryList = std::move(value); }
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationSummaryList(const Aws::Vector<GenerationSummary>& value) { SetGenerationSummaryList(value); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationSummaryList(Aws::Vector<GenerationSummary>&& value) { SetGenerationSummaryList(std::move(value)); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& AddGenerationSummaryList(const GenerationSummary& value) { m_generationSummaryList.push_back(value); return *this; }
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& AddGenerationSummaryList(GenerationSummary&& value) { m_generationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GenerationSummary> m_generationSummaryList;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
