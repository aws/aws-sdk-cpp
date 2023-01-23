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
    AWS_COMPUTEOPTIMIZER_API GetEC2InstanceRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEC2InstanceRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceArns() const{ return m_instanceArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline bool InstanceArnsHasBeenSet() const { return m_instanceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline void SetInstanceArns(const Aws::Vector<Aws::String>& value) { m_instanceArnsHasBeenSet = true; m_instanceArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline void SetInstanceArns(Aws::Vector<Aws::String>&& value) { m_instanceArnsHasBeenSet = true; m_instanceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithInstanceArns(const Aws::Vector<Aws::String>& value) { SetInstanceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithInstanceArns(Aws::Vector<Aws::String>&& value) { SetInstanceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddInstanceArns(const Aws::String& value) { m_instanceArnsHasBeenSet = true; m_instanceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddInstanceArns(Aws::String&& value) { m_instanceArnsHasBeenSet = true; m_instanceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the instances for which to return
     * recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddInstanceArns(const char* value) { m_instanceArnsHasBeenSet = true; m_instanceArns.push_back(value); return *this; }


    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of instance recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of instance recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of instance recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of instance recommendations to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * instance recommendations.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return instance
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return instance recommendations.</p> <p>Only one account ID can be
     * specified per request.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline const RecommendationPreferences& GetRecommendationPreferences() const{ return m_recommendationPreferences; }

    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline bool RecommendationPreferencesHasBeenSet() const { return m_recommendationPreferencesHasBeenSet; }

    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline void SetRecommendationPreferences(const RecommendationPreferences& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = value; }

    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline void SetRecommendationPreferences(RecommendationPreferences&& value) { m_recommendationPreferencesHasBeenSet = true; m_recommendationPreferences = std::move(value); }

    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithRecommendationPreferences(const RecommendationPreferences& value) { SetRecommendationPreferences(value); return *this;}

    /**
     * <p>An object to specify the preferences for the Amazon EC2 instance
     * recommendations to return in the response.</p>
     */
    inline GetEC2InstanceRecommendationsRequest& WithRecommendationPreferences(RecommendationPreferences&& value) { SetRecommendationPreferences(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceArns;
    bool m_instanceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
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
