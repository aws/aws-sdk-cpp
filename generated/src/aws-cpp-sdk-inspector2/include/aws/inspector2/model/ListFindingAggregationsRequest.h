﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AggregationRequest.h>
#include <aws/inspector2/model/AggregationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/StringFilter.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class ListFindingAggregationsRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListFindingAggregationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindingAggregations"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account IDs to retrieve finding aggregation data
     * for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAccountIds() const{ return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    inline void SetAccountIds(const Aws::Vector<StringFilter>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<StringFilter>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }
    inline ListFindingAggregationsRequest& WithAccountIds(const Aws::Vector<StringFilter>& value) { SetAccountIds(value); return *this;}
    inline ListFindingAggregationsRequest& WithAccountIds(Aws::Vector<StringFilter>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline ListFindingAggregationsRequest& AddAccountIds(const StringFilter& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }
    inline ListFindingAggregationsRequest& AddAccountIds(StringFilter&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the aggregation request that is used to filter your aggregation
     * results.</p>
     */
    inline const AggregationRequest& GetAggregationRequest() const{ return m_aggregationRequest; }
    inline bool AggregationRequestHasBeenSet() const { return m_aggregationRequestHasBeenSet; }
    inline void SetAggregationRequest(const AggregationRequest& value) { m_aggregationRequestHasBeenSet = true; m_aggregationRequest = value; }
    inline void SetAggregationRequest(AggregationRequest&& value) { m_aggregationRequestHasBeenSet = true; m_aggregationRequest = std::move(value); }
    inline ListFindingAggregationsRequest& WithAggregationRequest(const AggregationRequest& value) { SetAggregationRequest(value); return *this;}
    inline ListFindingAggregationsRequest& WithAggregationRequest(AggregationRequest&& value) { SetAggregationRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the aggregation request.</p>
     */
    inline const AggregationType& GetAggregationType() const{ return m_aggregationType; }
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }
    inline void SetAggregationType(const AggregationType& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }
    inline void SetAggregationType(AggregationType&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::move(value); }
    inline ListFindingAggregationsRequest& WithAggregationType(const AggregationType& value) { SetAggregationType(value); return *this;}
    inline ListFindingAggregationsRequest& WithAggregationType(AggregationType&& value) { SetAggregationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results the response can return. If your request would
     * return more than the maximum the response will return a <code>nextToken</code>
     * value, use this value when you call the action again to get the remaining
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingAggregationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. If
     * your response returns more than the <code>maxResults</code> maximum value it
     * will also return a <code>nextToken</code> value. For subsequent calls, use the
     * <code>nextToken</code> value returned from the previous request to continue
     * listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFindingAggregationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingAggregationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingAggregationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    AggregationRequest m_aggregationRequest;
    bool m_aggregationRequestHasBeenSet = false;

    AggregationType m_aggregationType;
    bool m_aggregationTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
