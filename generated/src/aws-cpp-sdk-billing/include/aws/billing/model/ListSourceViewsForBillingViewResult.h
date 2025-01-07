/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListSourceViewsForBillingViewResult
  {
  public:
    AWS_BILLING_API ListSourceViewsForBillingViewResult();
    AWS_BILLING_API ListSourceViewsForBillingViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API ListSourceViewsForBillingViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of billing views used as the data source for the custom billing view.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceViews() const{ return m_sourceViews; }
    inline void SetSourceViews(const Aws::Vector<Aws::String>& value) { m_sourceViews = value; }
    inline void SetSourceViews(Aws::Vector<Aws::String>&& value) { m_sourceViews = std::move(value); }
    inline ListSourceViewsForBillingViewResult& WithSourceViews(const Aws::Vector<Aws::String>& value) { SetSourceViews(value); return *this;}
    inline ListSourceViewsForBillingViewResult& WithSourceViews(Aws::Vector<Aws::String>&& value) { SetSourceViews(std::move(value)); return *this;}
    inline ListSourceViewsForBillingViewResult& AddSourceViews(const Aws::String& value) { m_sourceViews.push_back(value); return *this; }
    inline ListSourceViewsForBillingViewResult& AddSourceViews(Aws::String&& value) { m_sourceViews.push_back(std::move(value)); return *this; }
    inline ListSourceViewsForBillingViewResult& AddSourceViews(const char* value) { m_sourceViews.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that is used on subsequent calls to list billing views.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSourceViewsForBillingViewResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSourceViewsForBillingViewResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSourceViewsForBillingViewResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSourceViewsForBillingViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSourceViewsForBillingViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSourceViewsForBillingViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sourceViews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
