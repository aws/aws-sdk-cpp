﻿/**
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
    AWS_DATAEXCHANGE_API ListReceivedDataGrantsRequest();

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
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReceivedDataGrantsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListReceivedDataGrantsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReceivedDataGrantsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReceivedDataGrantsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grants to list.</p>
     */
    inline const Aws::Vector<AcceptanceStateFilterValue>& GetAcceptanceState() const{ return m_acceptanceState; }
    inline bool AcceptanceStateHasBeenSet() const { return m_acceptanceStateHasBeenSet; }
    inline void SetAcceptanceState(const Aws::Vector<AcceptanceStateFilterValue>& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = value; }
    inline void SetAcceptanceState(Aws::Vector<AcceptanceStateFilterValue>&& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = std::move(value); }
    inline ListReceivedDataGrantsRequest& WithAcceptanceState(const Aws::Vector<AcceptanceStateFilterValue>& value) { SetAcceptanceState(value); return *this;}
    inline ListReceivedDataGrantsRequest& WithAcceptanceState(Aws::Vector<AcceptanceStateFilterValue>&& value) { SetAcceptanceState(std::move(value)); return *this;}
    inline ListReceivedDataGrantsRequest& AddAcceptanceState(const AcceptanceStateFilterValue& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState.push_back(value); return *this; }
    inline ListReceivedDataGrantsRequest& AddAcceptanceState(AcceptanceStateFilterValue&& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AcceptanceStateFilterValue> m_acceptanceState;
    bool m_acceptanceStateHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
