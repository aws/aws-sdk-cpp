/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendationPreferences.h>
#include <aws/compute-optimizer/model/RDSDBRecommendationFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetRDSDatabaseRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRDSDatabaseRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN that identifies the Amazon Aurora or RDS database. </p> <p> The
     * following is the format of the ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:db:{resourceName}</code> </p> <p> The
     * following is the format of a DB Cluster ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:cluster:{resourceName}</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    GetRDSDatabaseRecommendationsRequest& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    GetRDSDatabaseRecommendationsRequest& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to advance to the next page of Amazon Aurora and RDS database
     * recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRDSDatabaseRecommendationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon Aurora and RDS database recommendations to
     * return with a single request.</p> <p>To retrieve the remaining results, make
     * another request with the returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetRDSDatabaseRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * Amazon Aurora and RDS database recommendations. </p>
     */
    inline const Aws::Vector<RDSDBRecommendationFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<RDSDBRecommendationFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<RDSDBRecommendationFilter>>
    GetRDSDatabaseRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = RDSDBRecommendationFilter>
    GetRDSDatabaseRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Return the Amazon Aurora and RDS database recommendations to the specified
     * Amazon Web Services account IDs. </p> <p>If your account is the management
     * account or the delegated administrator of an organization, use this parameter to
     * return the Amazon Aurora and RDS database recommendations to specific member
     * accounts.</p> <p>You can only specify one account ID per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    GetRDSDatabaseRecommendationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    GetRDSDatabaseRecommendationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const RecommendationPreferences& GetRecommendationPreferences() const { return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    void SetRecommendationPreferences(RecommendationPreferencesT&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::forward<RecommendationPreferencesT>(value); }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    GetRDSDatabaseRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferencesT&& value) { SetRecommendationPreferences(std::forward<RecommendationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<RDSDBRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
