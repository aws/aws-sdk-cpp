/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/IndexConfigurationSummary.h>
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
  class ListIndicesResult
  {
  public:
    AWS_KENDRA_API ListIndicesResult() = default;
    AWS_KENDRA_API ListIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information on the configuration of one or more
     * indexes.</p>
     */
    inline const Aws::Vector<IndexConfigurationSummary>& GetIndexConfigurationSummaryItems() const { return m_indexConfigurationSummaryItems; }
    template<typename IndexConfigurationSummaryItemsT = Aws::Vector<IndexConfigurationSummary>>
    void SetIndexConfigurationSummaryItems(IndexConfigurationSummaryItemsT&& value) { m_indexConfigurationSummaryItemsHasBeenSet = true; m_indexConfigurationSummaryItems = std::forward<IndexConfigurationSummaryItemsT>(value); }
    template<typename IndexConfigurationSummaryItemsT = Aws::Vector<IndexConfigurationSummary>>
    ListIndicesResult& WithIndexConfigurationSummaryItems(IndexConfigurationSummaryItemsT&& value) { SetIndexConfigurationSummaryItems(std::forward<IndexConfigurationSummaryItemsT>(value)); return *this;}
    template<typename IndexConfigurationSummaryItemsT = IndexConfigurationSummary>
    ListIndicesResult& AddIndexConfigurationSummaryItems(IndexConfigurationSummaryItemsT&& value) { m_indexConfigurationSummaryItemsHasBeenSet = true; m_indexConfigurationSummaryItems.emplace_back(std::forward<IndexConfigurationSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of indexes.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIndicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIndicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexConfigurationSummary> m_indexConfigurationSummaryItems;
    bool m_indexConfigurationSummaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
