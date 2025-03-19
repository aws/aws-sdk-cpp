/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FeaturedResultsSetSummary.h>
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
  class ListFeaturedResultsSetsResult
  {
  public:
    AWS_KENDRA_API ListFeaturedResultsSetsResult() = default;
    AWS_KENDRA_API ListFeaturedResultsSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListFeaturedResultsSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more featured results sets.</p>
     */
    inline const Aws::Vector<FeaturedResultsSetSummary>& GetFeaturedResultsSetSummaryItems() const { return m_featuredResultsSetSummaryItems; }
    template<typename FeaturedResultsSetSummaryItemsT = Aws::Vector<FeaturedResultsSetSummary>>
    void SetFeaturedResultsSetSummaryItems(FeaturedResultsSetSummaryItemsT&& value) { m_featuredResultsSetSummaryItemsHasBeenSet = true; m_featuredResultsSetSummaryItems = std::forward<FeaturedResultsSetSummaryItemsT>(value); }
    template<typename FeaturedResultsSetSummaryItemsT = Aws::Vector<FeaturedResultsSetSummary>>
    ListFeaturedResultsSetsResult& WithFeaturedResultsSetSummaryItems(FeaturedResultsSetSummaryItemsT&& value) { SetFeaturedResultsSetSummaryItems(std::forward<FeaturedResultsSetSummaryItemsT>(value)); return *this;}
    template<typename FeaturedResultsSetSummaryItemsT = FeaturedResultsSetSummary>
    ListFeaturedResultsSetsResult& AddFeaturedResultsSetSummaryItems(FeaturedResultsSetSummaryItemsT&& value) { m_featuredResultsSetSummaryItemsHasBeenSet = true; m_featuredResultsSetSummaryItems.emplace_back(std::forward<FeaturedResultsSetSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns a pagination token in the
     * response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFeaturedResultsSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFeaturedResultsSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FeaturedResultsSetSummary> m_featuredResultsSetSummaryItems;
    bool m_featuredResultsSetSummaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
