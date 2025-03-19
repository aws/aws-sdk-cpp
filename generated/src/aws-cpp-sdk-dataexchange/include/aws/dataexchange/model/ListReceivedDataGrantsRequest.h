/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/AcceptanceStateFilterValue.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataExchange
{
namespace Model
{

  /**
   */
  class ListReceivedDataGrantsRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReceivedDataGrants"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;

    AWS_DATAEXCHANGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to be included in the next page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReceivedDataGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReceivedDataGrantsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grants to list.</p>
     */
    inline const Aws::Vector<AcceptanceStateFilterValue>& GetAcceptanceState() const { return m_acceptanceState; }
    inline bool AcceptanceStateHasBeenSet() const { return m_acceptanceStateHasBeenSet; }
    template<typename AcceptanceStateT = Aws::Vector<AcceptanceStateFilterValue>>
    void SetAcceptanceState(AcceptanceStateT&& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = std::forward<AcceptanceStateT>(value); }
    template<typename AcceptanceStateT = Aws::Vector<AcceptanceStateFilterValue>>
    ListReceivedDataGrantsRequest& WithAcceptanceState(AcceptanceStateT&& value) { SetAcceptanceState(std::forward<AcceptanceStateT>(value)); return *this;}
    inline ListReceivedDataGrantsRequest& AddAcceptanceState(AcceptanceStateFilterValue value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState.push_back(value); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AcceptanceStateFilterValue> m_acceptanceState;
    bool m_acceptanceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
