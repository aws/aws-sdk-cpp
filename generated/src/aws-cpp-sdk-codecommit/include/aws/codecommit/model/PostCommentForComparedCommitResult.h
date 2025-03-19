/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <aws/codecommit/model/Comment.h>
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
  class PostCommentForComparedCommitResult
  {
  public:
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult() = default;
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PostCommentForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PostCommentForComparedCommitResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the full commit ID of the before
     * commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const { return m_beforeCommitId; }
    template<typename BeforeCommitIdT = Aws::String>
    void SetBeforeCommitId(BeforeCommitIdT&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::forward<BeforeCommitIdT>(value); }
    template<typename BeforeCommitIdT = Aws::String>
    PostCommentForComparedCommitResult& WithBeforeCommitId(BeforeCommitIdT&& value) { SetBeforeCommitId(std::forward<BeforeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the full commit ID of the after
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const { return m_afterCommitId; }
    template<typename AfterCommitIdT = Aws::String>
    void SetAfterCommitId(AfterCommitIdT&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::forward<AfterCommitIdT>(value); }
    template<typename AfterCommitIdT = Aws::String>
    PostCommentForComparedCommitResult& WithAfterCommitId(AfterCommitIdT&& value) { SetAfterCommitId(std::forward<AfterCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the blob ID of the before blob.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const { return m_beforeBlobId; }
    template<typename BeforeBlobIdT = Aws::String>
    void SetBeforeBlobId(BeforeBlobIdT&& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = std::forward<BeforeBlobIdT>(value); }
    template<typename BeforeBlobIdT = Aws::String>
    PostCommentForComparedCommitResult& WithBeforeBlobId(BeforeBlobIdT&& value) { SetBeforeBlobId(std::forward<BeforeBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality you established, the blob ID of the after blob.</p>
     */
    inline const Aws::String& GetAfterBlobId() const { return m_afterBlobId; }
    template<typename AfterBlobIdT = Aws::String>
    void SetAfterBlobId(AfterBlobIdT&& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = std::forward<AfterBlobIdT>(value); }
    template<typename AfterBlobIdT = Aws::String>
    PostCommentForComparedCommitResult& WithAfterBlobId(AfterBlobIdT&& value) { SetAfterBlobId(std::forward<AfterBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    PostCommentForComparedCommitResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the comment you posted.</p>
     */
    inline const Comment& GetComment() const { return m_comment; }
    template<typename CommentT = Comment>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Comment>
    PostCommentForComparedCommitResult& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PostCommentForComparedCommitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Aws::String m_beforeBlobId;
    bool m_beforeBlobIdHasBeenSet = false;

    Aws::String m_afterBlobId;
    bool m_afterBlobIdHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Comment m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
