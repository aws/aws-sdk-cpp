/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FaqSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListFaqsResult
  {
  public:
    AWS_KENDRA_API ListFaqsResult() = default;
    AWS_KENDRA_API ListFaqsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListFaqsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of FAQs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFaqsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the FAQs for a specified index.</p>
     */
    inline const Aws::Vector<FaqSummary>& GetFaqSummaryItems() const { return m_faqSummaryItems; }
    template<typename FaqSummaryItemsT = Aws::Vector<FaqSummary>>
    void SetFaqSummaryItems(FaqSummaryItemsT&& value) { m_faqSummaryItemsHasBeenSet = true; m_faqSummaryItems = std::forward<FaqSummaryItemsT>(value); }
    template<typename FaqSummaryItemsT = Aws::Vector<FaqSummary>>
    ListFaqsResult& WithFaqSummaryItems(FaqSummaryItemsT&& value) { SetFaqSummaryItems(std::forward<FaqSummaryItemsT>(value)); return *this;}
    template<typename FaqSummaryItemsT = FaqSummary>
    ListFaqsResult& AddFaqSummaryItems(FaqSummaryItemsT&& value) { m_faqSummaryItemsHasBeenSet = true; m_faqSummaryItems.emplace_back(std::forward<FaqSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFaqsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FaqSummary> m_faqSummaryItems;
    bool m_faqSummaryItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
