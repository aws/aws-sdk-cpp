/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class PutFileResult
  {
  public:
    AWS_CODECOMMIT_API PutFileResult() = default;
    AWS_CODECOMMIT_API PutFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PutFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full SHA ID of the commit that contains this file change.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    PutFileResult& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blob, which is its SHA-1 pointer.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    PutFileResult& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full SHA-1 pointer of the tree information for the commit that contains
     * this file change.</p>
     */
    inline const Aws::String& GetTreeId() const { return m_treeId; }
    template<typename TreeIdT = Aws::String>
    void SetTreeId(TreeIdT&& value) { m_treeIdHasBeenSet = true; m_treeId = std::forward<TreeIdT>(value); }
    template<typename TreeIdT = Aws::String>
    PutFileResult& WithTreeId(TreeIdT&& value) { SetTreeId(std::forward<TreeIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutFileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
