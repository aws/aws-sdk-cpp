/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/AggregationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AggregationRequest.h>
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
    AWS_INSPECTOR2_API ListFindingAggregationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindingAggregations"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of the aggregation request.</p>
     */
    inline AggregationType GetAggregationType() const { return m_aggregationType; }
    inline bool AggregationTypeHasBeenSet() const { return m_aggregationTypeHasBeenSet; }
    inline void SetAggregationType(AggregationType value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = value; }
    inline ListFindingAggregationsRequest& WithAggregationType(AggregationType value) { SetAggregationType(value); return *this;}
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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingAggregationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results the response can return. If your request would
     * return more than the maximum the response will return a <code>nextToken</code>
     * value, use this value when you call the action again to get the remaining
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingAggregationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account IDs to retrieve finding aggregation data
     * for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<StringFilter>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<StringFilter>>
    ListFindingAggregationsRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = StringFilter>
    ListFindingAggregationsRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the aggregation request that is used to filter your aggregation
     * results.</p>
     */
    inline const AggregationRequest& GetAggregationRequest() const { return m_aggregationRequest; }
    inline bool AggregationRequestHasBeenSet() const { return m_aggregationRequestHasBeenSet; }
    template<typename AggregationRequestT = AggregationRequest>
    void SetAggregationRequest(AggregationRequestT&& value) { m_aggregationRequestHasBeenSet = true; m_aggregationRequest = std::forward<AggregationRequestT>(value); }
    template<typename AggregationRequestT = AggregationRequest>
    ListFindingAggregationsRequest& WithAggregationRequest(AggregationRequestT&& value) { SetAggregationRequest(std::forward<AggregationRequestT>(value)); return *this;}
    ///@}
  private:

    AggregationType m_aggregationType{AggregationType::NOT_SET};
    bool m_aggregationTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<StringFilter> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    AggregationRequest m_aggregationRequest;
    bool m_aggregationRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
