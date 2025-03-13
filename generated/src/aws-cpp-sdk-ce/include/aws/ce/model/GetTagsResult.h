/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetTagsResult
  {
  public:
    AWS_COSTEXPLORER_API GetTagsResult() = default;
    AWS_COSTEXPLORER_API GetTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetTagsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that match your request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Aws::String>>
    GetTagsResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Aws::String>
    GetTagsResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of query results that Amazon Web Services returns at a time.</p>
     */
    inline int GetReturnSize() const { return m_returnSize; }
    inline void SetReturnSize(int value) { m_returnSizeHasBeenSet = true; m_returnSize = value; }
    inline GetTagsResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of query results.</p>
     */
    inline int GetTotalSize() const { return m_totalSize; }
    inline void SetTotalSize(int value) { m_totalSizeHasBeenSet = true; m_totalSize = value; }
    inline GetTagsResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_returnSize{0};
    bool m_returnSizeHasBeenSet = false;

    int m_totalSize{0};
    bool m_totalSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
