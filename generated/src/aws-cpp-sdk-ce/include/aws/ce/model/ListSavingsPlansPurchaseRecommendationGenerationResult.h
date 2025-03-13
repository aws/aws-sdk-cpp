/**
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
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult() = default;
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of historical recommendation generations.</p>
     */
    inline const Aws::Vector<GenerationSummary>& GetGenerationSummaryList() const { return m_generationSummaryList; }
    template<typename GenerationSummaryListT = Aws::Vector<GenerationSummary>>
    void SetGenerationSummaryList(GenerationSummaryListT&& value) { m_generationSummaryListHasBeenSet = true; m_generationSummaryList = std::forward<GenerationSummaryListT>(value); }
    template<typename GenerationSummaryListT = Aws::Vector<GenerationSummary>>
    ListSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationSummaryList(GenerationSummaryListT&& value) { SetGenerationSummaryList(std::forward<GenerationSummaryListT>(value)); return *this;}
    template<typename GenerationSummaryListT = GenerationSummary>
    ListSavingsPlansPurchaseRecommendationGenerationResult& AddGenerationSummaryList(GenerationSummaryListT&& value) { m_generationSummaryListHasBeenSet = true; m_generationSummaryList.emplace_back(std::forward<GenerationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListSavingsPlansPurchaseRecommendationGenerationResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GenerationSummary> m_generationSummaryList;
    bool m_generationSummaryListHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
