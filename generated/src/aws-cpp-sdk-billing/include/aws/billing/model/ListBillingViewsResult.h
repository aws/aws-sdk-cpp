/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/BillingViewListElement.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Billing
{
namespace Model
{
  class ListBillingViewsResult
  {
  public:
    AWS_BILLING_API ListBillingViewsResult() = default;
    AWS_BILLING_API ListBillingViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API ListBillingViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>BillingViewListElement</code> retrieved.</p>
     */
    inline const Aws::Vector<BillingViewListElement>& GetBillingViews() const { return m_billingViews; }
    template<typename BillingViewsT = Aws::Vector<BillingViewListElement>>
    void SetBillingViews(BillingViewsT&& value) { m_billingViewsHasBeenSet = true; m_billingViews = std::forward<BillingViewsT>(value); }
    template<typename BillingViewsT = Aws::Vector<BillingViewListElement>>
    ListBillingViewsResult& WithBillingViews(BillingViewsT&& value) { SetBillingViews(std::forward<BillingViewsT>(value)); return *this;}
    template<typename BillingViewsT = BillingViewListElement>
    ListBillingViewsResult& AddBillingViews(BillingViewsT&& value) { m_billingViewsHasBeenSet = true; m_billingViews.emplace_back(std::forward<BillingViewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use on subsequent calls to list billing views. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillingViewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBillingViewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BillingViewListElement> m_billingViews;
    bool m_billingViewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
