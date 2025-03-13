/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/SearchRelatedItemsResponseItem.h>
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
namespace ConnectCases
{
namespace Model
{
  class SearchRelatedItemsResult
  {
  public:
    AWS_CONNECTCASES_API SearchRelatedItemsResult() = default;
    AWS_CONNECTCASES_API SearchRelatedItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API SearchRelatedItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchRelatedItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items related to a case. </p>
     */
    inline const Aws::Vector<SearchRelatedItemsResponseItem>& GetRelatedItems() const { return m_relatedItems; }
    template<typename RelatedItemsT = Aws::Vector<SearchRelatedItemsResponseItem>>
    void SetRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems = std::forward<RelatedItemsT>(value); }
    template<typename RelatedItemsT = Aws::Vector<SearchRelatedItemsResponseItem>>
    SearchRelatedItemsResult& WithRelatedItems(RelatedItemsT&& value) { SetRelatedItems(std::forward<RelatedItemsT>(value)); return *this;}
    template<typename RelatedItemsT = SearchRelatedItemsResponseItem>
    SearchRelatedItemsResult& AddRelatedItems(RelatedItemsT&& value) { m_relatedItemsHasBeenSet = true; m_relatedItems.emplace_back(std::forward<RelatedItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchRelatedItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SearchRelatedItemsResponseItem> m_relatedItems;
    bool m_relatedItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
