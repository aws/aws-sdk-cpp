﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/ECSServiceRecommendationFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetECSServiceRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetECSServiceRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetECSServiceRecommendations"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN that identifies the Amazon ECS service. </p> <p> The following is
     * the format of the ARN: </p> <p>
     * <code>arn:aws:ecs:region:aws_account_id:service/cluster-name/service-name</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const{ return m_serviceArns; }
    inline bool ServiceArnsHasBeenSet() const { return m_serviceArnsHasBeenSet; }
    inline void SetServiceArns(const Aws::Vector<Aws::String>& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = value; }
    inline void SetServiceArns(Aws::Vector<Aws::String>&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns = std::move(value); }
    inline GetECSServiceRecommendationsRequest& WithServiceArns(const Aws::Vector<Aws::String>& value) { SetServiceArns(value); return *this;}
    inline GetECSServiceRecommendationsRequest& WithServiceArns(Aws::Vector<Aws::String>&& value) { SetServiceArns(std::move(value)); return *this;}
    inline GetECSServiceRecommendationsRequest& AddServiceArns(const Aws::String& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }
    inline GetECSServiceRecommendationsRequest& AddServiceArns(Aws::String&& value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(std::move(value)); return *this; }
    inline GetECSServiceRecommendationsRequest& AddServiceArns(const char* value) { m_serviceArnsHasBeenSet = true; m_serviceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to advance to the next page of Amazon ECS service recommendations.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetECSServiceRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetECSServiceRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetECSServiceRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of Amazon ECS service recommendations to return with a
     * single request. </p> <p>To retrieve the remaining results, make another request
     * with the returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetECSServiceRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects to specify a filter that returns a more specific list of
     * Amazon ECS service recommendations. </p>
     */
    inline const Aws::Vector<ECSServiceRecommendationFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ECSServiceRecommendationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ECSServiceRecommendationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetECSServiceRecommendationsRequest& WithFilters(const Aws::Vector<ECSServiceRecommendationFilter>& value) { SetFilters(value); return *this;}
    inline GetECSServiceRecommendationsRequest& WithFilters(Aws::Vector<ECSServiceRecommendationFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetECSServiceRecommendationsRequest& AddFilters(const ECSServiceRecommendationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetECSServiceRecommendationsRequest& AddFilters(ECSServiceRecommendationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Return the Amazon ECS service recommendations to the specified Amazon Web
     * Services account IDs. </p> <p>If your account is the management account or the
     * delegated administrator of an organization, use this parameter to return the
     * Amazon ECS service recommendations to specific member accounts.</p> <p>You can
     * only specify one account ID per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline GetECSServiceRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline GetECSServiceRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline GetECSServiceRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline GetECSServiceRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    inline GetECSServiceRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceArns;
    bool m_serviceArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ECSServiceRecommendationFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
