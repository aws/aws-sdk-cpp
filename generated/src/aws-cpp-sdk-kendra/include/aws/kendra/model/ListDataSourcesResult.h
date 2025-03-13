/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceSummary.h>
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
  class ListDataSourcesResult
  {
  public:
    AWS_KENDRA_API ListDataSourcesResult() = default;
    AWS_KENDRA_API ListDataSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListDataSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more data source connector.</p>
     */
    inline const Aws::Vector<DataSourceSummary>& GetSummaryItems() const { return m_summaryItems; }
    template<typename SummaryItemsT = Aws::Vector<DataSourceSummary>>
    void SetSummaryItems(SummaryItemsT&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems = std::forward<SummaryItemsT>(value); }
    template<typename SummaryItemsT = Aws::Vector<DataSourceSummary>>
    ListDataSourcesResult& WithSummaryItems(SummaryItemsT&& value) { SetSummaryItems(std::forward<SummaryItemsT>(value)); return *this;}
    template<typename SummaryItemsT = DataSourceSummary>
    ListDataSourcesResult& AddSummaryItems(SummaryItemsT&& value) { m_summaryItemsHasBeenSet = true; m_summaryItems.emplace_back(std::forward<SummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of data source
     * connectors.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSourceSummary> m_summaryItems;
    bool m_summaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
