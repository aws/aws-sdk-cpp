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
    AWS_BILLING_API ListBillingViewsResult();
    AWS_BILLING_API ListBillingViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API ListBillingViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>BillingViewListElement</code> retrieved.</p>
     */
    inline const Aws::Vector<BillingViewListElement>& GetBillingViews() const{ return m_billingViews; }
    inline void SetBillingViews(const Aws::Vector<BillingViewListElement>& value) { m_billingViews = value; }
    inline void SetBillingViews(Aws::Vector<BillingViewListElement>&& value) { m_billingViews = std::move(value); }
    inline ListBillingViewsResult& WithBillingViews(const Aws::Vector<BillingViewListElement>& value) { SetBillingViews(value); return *this;}
    inline ListBillingViewsResult& WithBillingViews(Aws::Vector<BillingViewListElement>&& value) { SetBillingViews(std::move(value)); return *this;}
    inline ListBillingViewsResult& AddBillingViews(const BillingViewListElement& value) { m_billingViews.push_back(value); return *this; }
    inline ListBillingViewsResult& AddBillingViews(BillingViewListElement&& value) { m_billingViews.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use on subsequent calls to list billing views. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBillingViewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBillingViewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBillingViewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBillingViewsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBillingViewsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBillingViewsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BillingViewListElement> m_billingViews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
