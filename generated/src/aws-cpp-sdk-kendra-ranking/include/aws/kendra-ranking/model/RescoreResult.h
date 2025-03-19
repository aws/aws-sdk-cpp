/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra-ranking/model/RescoreResultItem.h>
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
namespace KendraRanking
{
namespace Model
{
  class RescoreResult
  {
  public:
    AWS_KENDRARANKING_API RescoreResult() = default;
    AWS_KENDRARANKING_API RescoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API RescoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier associated with the scores that Amazon Kendra Intelligent
     * Ranking gives to the results. Amazon Kendra Intelligent Ranking rescores or
     * re-ranks the results for the search service.</p>
     */
    inline const Aws::String& GetRescoreId() const { return m_rescoreId; }
    template<typename RescoreIdT = Aws::String>
    void SetRescoreId(RescoreIdT&& value) { m_rescoreIdHasBeenSet = true; m_rescoreId = std::forward<RescoreIdT>(value); }
    template<typename RescoreIdT = Aws::String>
    RescoreResult& WithRescoreId(RescoreIdT&& value) { SetRescoreId(std::forward<RescoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of result items for documents with new relevancy scores. The results
     * are in descending order.</p>
     */
    inline const Aws::Vector<RescoreResultItem>& GetResultItems() const { return m_resultItems; }
    template<typename ResultItemsT = Aws::Vector<RescoreResultItem>>
    void SetResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems = std::forward<ResultItemsT>(value); }
    template<typename ResultItemsT = Aws::Vector<RescoreResultItem>>
    RescoreResult& WithResultItems(ResultItemsT&& value) { SetResultItems(std::forward<ResultItemsT>(value)); return *this;}
    template<typename ResultItemsT = RescoreResultItem>
    RescoreResult& AddResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems.emplace_back(std::forward<ResultItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RescoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rescoreId;
    bool m_rescoreIdHasBeenSet = false;

    Aws::Vector<RescoreResultItem> m_resultItems;
    bool m_resultItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
