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
    AWS_COSTEXPLORER_API ListSavingsPlansPurchaseRecommendationGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSavingsPlansPurchaseRecommendationGeneration"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline const GenerationStatus& GetGenerationStatus() const{ return m_generationStatus; }

    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }

    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline void SetGenerationStatus(const GenerationStatus& value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }

    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline void SetGenerationStatus(GenerationStatus&& value) { m_generationStatusHasBeenSet = true; m_generationStatus = std::move(value); }

    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithGenerationStatus(const GenerationStatus& value) { SetGenerationStatus(value); return *this;}

    /**
     * <p>The status of the recommendation generation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithGenerationStatus(GenerationStatus&& value) { SetGenerationStatus(std::move(value)); return *this;}


    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationIds() const{ return m_recommendationIds; }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline bool RecommendationIdsHasBeenSet() const { return m_recommendationIdsHasBeenSet; }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline void SetRecommendationIds(const Aws::Vector<Aws::String>& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = value; }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline void SetRecommendationIds(Aws::Vector<Aws::String>&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds = std::move(value); }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithRecommendationIds(const Aws::Vector<Aws::String>& value) { SetRecommendationIds(value); return *this;}

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithRecommendationIds(Aws::Vector<Aws::String>&& value) { SetRecommendationIds(std::move(value)); return *this;}

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& AddRecommendationIds(const Aws::String& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& AddRecommendationIds(Aws::String&& value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs for each specific recommendation.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& AddRecommendationIds(const char* value) { m_recommendationIdsHasBeenSet = true; m_recommendationIds.push_back(value); return *this; }


    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of recommendations that you want returned in a single response
     * object.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListSavingsPlansPurchaseRecommendationGenerationRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    GenerationStatus m_generationStatus;
    bool m_generationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationIds;
    bool m_recommendationIdsHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
