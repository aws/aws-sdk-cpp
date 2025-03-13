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
#include <aws/compute-optimizer/model/Filter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetEC2InstanceRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEC2InstanceRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceArns() const { return m_instanceArns; }
    inline bool InstanceArnsHasBeenSet() const { return m_instanceArnsHasBeenSet; }
    template<typename InstanceArnsT = Aws::Vector<Aws::String>>
    void SetInstanceArns(InstanceArnsT&& value) { m_instanceArnsHasBeenSet = true; m_instanceArns = std::forward<InstanceArnsT>(value); }
    template<typename InstanceArnsT = Aws::Vector<Aws::String>>
    GetEC2InstanceRecommendationsRequest& WithInstanceArns(InstanceArnsT&& value) { SetInstanceArns(std::forward<InstanceArnsT>(value)); return *this;}
    template<typename InstanceArnsT = Aws::String>
    GetEC2InstanceRecommendationsRequest& AddInstanceArns(InstanceArnsT&& value) { m_instanceArnsHasBeenSet = true; m_instanceArns.emplace_back(std::forward<InstanceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEC2InstanceRecommendationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of instance recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetEC2InstanceRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    GetEC2InstanceRecommendationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    GetEC2InstanceRecommendationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    GetEC2InstanceRecommendationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    GetEC2InstanceRecommendationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const { return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    void SetRecommendationPreferences(RecommendationPreferencesT&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::forward<RecommendationPreferencesT>(value); }
    template<typename RecommendationPreferencesT = RecommendationPreferences>
    GetEC2InstanceRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferencesT&& value) { SetRecommendationPreferences(std::forward<RecommendationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceArns;
    bool m_instanceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    RecommendationPreferences m_recommendationPreferences;
    bool m_recommendationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
