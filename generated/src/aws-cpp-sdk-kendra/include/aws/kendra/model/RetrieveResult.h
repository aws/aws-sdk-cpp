/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/RetrieveResultItem.h>
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
  class RetrieveResult
  {
  public:
    AWS_KENDRA_API RetrieveResult() = default;
    AWS_KENDRA_API RetrieveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API RetrieveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    RetrieveResult& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline const Aws::Vector<RetrieveResultItem>& GetResultItems() const { return m_resultItems; }
    template<typename ResultItemsT = Aws::Vector<RetrieveResultItem>>
    void SetResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems = std::forward<ResultItemsT>(value); }
    template<typename ResultItemsT = Aws::Vector<RetrieveResultItem>>
    RetrieveResult& WithResultItems(ResultItemsT&& value) { SetResultItems(std::forward<ResultItemsT>(value)); return *this;}
    template<typename ResultItemsT = RetrieveResultItem>
    RetrieveResult& AddResultItems(ResultItemsT&& value) { m_resultItemsHasBeenSet = true; m_resultItems.emplace_back(std::forward<ResultItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetrieveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::Vector<RetrieveResultItem> m_resultItems;
    bool m_resultItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
