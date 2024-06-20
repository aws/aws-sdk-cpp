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
    AWS_COMPUTEOPTIMIZER_API GetRDSDatabaseRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRDSDatabaseRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN that identifies the Amazon RDS. </p> <p> The following is the format
     * of the ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:db:{resourceName}</code> </p> <p> The
     * following is the format of a DB Cluster ARN: </p> <p>
     * <code>arn:aws:rds:{region}:{accountId}:cluster:{resourceName}</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }
    inline GetRDSDatabaseRecommendationsRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    inline GetRDSDatabaseRecommendationsRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }
    inline GetRDSDatabaseRecommendationsRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to advance to the next page of Amazon RDS recommendations. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetRDSDatabaseRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon RDS recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetRDSDatabaseRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * Amazon RDS recommendations. </p>
     */
    inline const Aws::Vector<RDSDBRecommendationFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<RDSDBRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<RDSDBRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetRDSDatabaseRecommendationsRequest& WithFilters(const Aws::Vector<RDSDBRecommendationFilter>& value) { SetFilters(value); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithFilters(Aws::Vector<RDSDBRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& AddFilters(const RDSDBRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetRDSDatabaseRecommendationsRequest& AddFilters(RDSDBRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Return the Amazon RDS recommendations to the specified Amazon Web Services
     * account IDs. </p> <p>If your account is the management account or the delegated
     * administrator of an organization, use this parameter to return the Amazon RDS
     * recommendations to specific member accounts.</p> <p>You can only specify one
     * account ID per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline GetRDSDatabaseRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline GetRDSDatabaseRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline GetRDSDatabaseRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const RecommendationPreferences& GetRecommendationPreferences() const{ return m_recommendationPreferences; }
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }
    inline void SetRecommendationPreferences(const RecommendationPreferences& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = value; }
    inline void SetRecommendationPreferences(RecommendationPreferences&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::move(value); }
    inline GetRDSDatabaseRecommendationsRequest& WithRecommendationPreferences(const RecommendationPreferences& value) { SetRecommendationPreferences(value); return *this;}
    inline GetRDSDatabaseRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferences&& value) { SetRecommendationPreferences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
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
