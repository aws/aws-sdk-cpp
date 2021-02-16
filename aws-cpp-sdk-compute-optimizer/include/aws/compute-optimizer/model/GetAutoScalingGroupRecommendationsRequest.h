﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_COMPUTEOPTIMIZER_API GetAutoScalingGroupRecommendationsRequest : public ComputeOptimizerRequest
  {
  public:
    GetAutoScalingGroupRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutoScalingGroupRecommendations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the AWS account for which to return Auto Scaling group
     * recommendations.</p> <p>If your account is the management account of an
     * organization, use this parameter to specify the member account for which you
     * want to return Auto Scaling group recommendations.</p> <p>Only one account ID
     * can be specified per request.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupArns() const{ return m_autoScalingGroupArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline bool AutoScalingGroupArnsHasBeenSet() const { return m_autoScalingGroupArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline void SetAutoScalingGroupArns(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupArnsHasBeenSet = true; m_autoScalingGroupArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline void SetAutoScalingGroupArns(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupArnsHasBeenSet = true; m_autoScalingGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithAutoScalingGroupArns(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithAutoScalingGroupArns(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAutoScalingGroupArns(const Aws::String& value) { m_autoScalingGroupArnsHasBeenSet = true; m_autoScalingGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAutoScalingGroupArns(Aws::String&& value) { m_autoScalingGroupArnsHasBeenSet = true; m_autoScalingGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling groups for which to return
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddAutoScalingGroupArns(const char* value) { m_autoScalingGroupArnsHasBeenSet = true; m_autoScalingGroupArns.push_back(value); return *this; }


    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of Auto Scaling group
     * recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of Auto Scaling group recommendations to return with a
     * single request.</p> <p>To retrieve the remaining results, make another request
     * with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of Auto Scaling group recommendations to return with a
     * single request.</p> <p>To retrieve the remaining results, make another request
     * with the returned <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of Auto Scaling group recommendations to return with a
     * single request.</p> <p>To retrieve the remaining results, make another request
     * with the returned <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of Auto Scaling group recommendations to return with a
     * single request.</p> <p>To retrieve the remaining results, make another request
     * with the returned <code>NextToken</code> value.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe a filter that returns a more specific list
     * of Auto Scaling group recommendations.</p>
     */
    inline GetAutoScalingGroupRecommendationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::Vector<Aws::String> m_autoScalingGroupArns;
    bool m_autoScalingGroupArnsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
