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
    AWS_BILLING_API ListSourceViewsForBillingViewResult() = default;
    AWS_BILLING_API ListSourceViewsForBillingViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API ListSourceViewsForBillingViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of billing views used as the data source for the custom billing view.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceViews() const { return m_sourceViews; }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    void SetSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews = std::forward<SourceViewsT>(value); }
    template<typename SourceViewsT = Aws::Vector<Aws::String>>
    ListSourceViewsForBillingViewResult& WithSourceViews(SourceViewsT&& value) { SetSourceViews(std::forward<SourceViewsT>(value)); return *this;}
    template<typename SourceViewsT = Aws::String>
    ListSourceViewsForBillingViewResult& AddSourceViews(SourceViewsT&& value) { m_sourceViewsHasBeenSet = true; m_sourceViews.emplace_back(std::forward<SourceViewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that is used on subsequent calls to list billing views.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSourceViewsForBillingViewResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSourceViewsForBillingViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sourceViews;
    bool m_sourceViewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
