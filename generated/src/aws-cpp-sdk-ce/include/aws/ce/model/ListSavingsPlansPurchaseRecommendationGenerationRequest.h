/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/GenerationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class ListSavingsPlansPurchaseRecommendationGenerationRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSavingsPlansPurchaseRecommendationGeneration"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline GenerationStatus GetGenerationStatus() const { return m_generationStatus; }
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }
    inline void SetGenerationStatus(GenerationStatus value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithGenerationStatus(GenerationStatus value) { SetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const { return m_recommendationIds; }
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    void SetRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::forward<RecommendationIdsT>(value); }
    template<typename RecommendationIdsT = Aws::Vector<Aws::String>>
    ListSavingsPlansPurchaseRecommendationGenerationRequest& WithRecommendationIds(RecommendationIdsT&& value) { SetRecommendationIds(std::forward<RecommendationIdsT>(value)); return *this;}
    template<typename RecommendationIdsT = Aws::String>
    ListSavingsPlansPurchaseRecommendationGenerationRequest& AddRecommendationIds(RecommendationIdsT&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.emplace_back(std::forward<RecommendationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListSavingsPlansPurchaseRecommendationGenerationRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}
  private:

    GenerationStatus m_generationStatus{GenerationStatus::NOT_SET};
    bool m_generationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
