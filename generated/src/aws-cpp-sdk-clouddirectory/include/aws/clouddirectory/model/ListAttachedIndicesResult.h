/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/IndexAttachment.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListAttachedIndicesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult() = default;
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListAttachedIndicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The indices attached to the specified object.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const { return m_indexAttachments; }
    template<typename IndexAttachmentsT = Aws::Vector<IndexAttachment>>
    void SetIndexAttachments(IndexAttachmentsT&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments = std::forward<IndexAttachmentsT>(value); }
    template<typename IndexAttachmentsT = Aws::Vector<IndexAttachment>>
    ListAttachedIndicesResult& WithIndexAttachments(IndexAttachmentsT&& value) { SetIndexAttachments(std::forward<IndexAttachmentsT>(value)); return *this;}
    template<typename IndexAttachmentsT = IndexAttachment>
    ListAttachedIndicesResult& AddIndexAttachments(IndexAttachmentsT&& value) { m_indexAttachmentsHasBeenSet = true; m_indexAttachments.emplace_back(std::forward<IndexAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAttachedIndicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAttachedIndicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;
    bool m_indexAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
