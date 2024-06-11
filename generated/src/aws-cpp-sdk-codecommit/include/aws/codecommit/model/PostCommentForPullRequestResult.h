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
  class PostCommentForPullRequestResult
  {
  public:
    AWS_CODECOMMIT_API PostCommentForPullRequestResult();
    AWS_CODECOMMIT_API PostCommentForPullRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PostCommentForPullRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the repository where you posted a comment on a pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline PostCommentForPullRequestResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PostCommentForPullRequestResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestId = value; }
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestId = std::move(value); }
    inline void SetPullRequestId(const char* value) { m_pullRequestId.assign(value); }
    inline PostCommentForPullRequestResult& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline PostCommentForPullRequestResult& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the source branch used to create the pull
     * request, or in the case of an updated pull request, the full commit ID of the
     * commit used to update the pull request.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitId = value; }
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitId = std::move(value); }
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitId.assign(value); }
    inline PostCommentForPullRequestResult& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}
    inline PostCommentForPullRequestResult& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit in the destination branch where the pull
     * request is merged.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitId = value; }
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitId = std::move(value); }
    inline void SetAfterCommitId(const char* value) { m_afterCommitId.assign(value); }
    inline PostCommentForPullRequestResult& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}
    inline PostCommentForPullRequestResult& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality of the pull request, the blob ID of the before
     * blob.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const{ return m_beforeBlobId; }
    inline void SetBeforeBlobId(const Aws::String& value) { m_beforeBlobId = value; }
    inline void SetBeforeBlobId(Aws::String&& value) { m_beforeBlobId = std::move(value); }
    inline void SetBeforeBlobId(const char* value) { m_beforeBlobId.assign(value); }
    inline PostCommentForPullRequestResult& WithBeforeBlobId(const Aws::String& value) { SetBeforeBlobId(value); return *this;}
    inline PostCommentForPullRequestResult& WithBeforeBlobId(Aws::String&& value) { SetBeforeBlobId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithBeforeBlobId(const char* value) { SetBeforeBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In the directionality of the pull request, the blob ID of the after blob.</p>
     */
    inline const Aws::String& GetAfterBlobId() const{ return m_afterBlobId; }
    inline void SetAfterBlobId(const Aws::String& value) { m_afterBlobId = value; }
    inline void SetAfterBlobId(Aws::String&& value) { m_afterBlobId = std::move(value); }
    inline void SetAfterBlobId(const char* value) { m_afterBlobId.assign(value); }
    inline PostCommentForPullRequestResult& WithAfterBlobId(const Aws::String& value) { SetAfterBlobId(value); return *this;}
    inline PostCommentForPullRequestResult& WithAfterBlobId(Aws::String&& value) { SetAfterBlobId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithAfterBlobId(const char* value) { SetAfterBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the change where you posted your comment.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline void SetLocation(const Location& value) { m_location = value; }
    inline void SetLocation(Location&& value) { m_location = std::move(value); }
    inline PostCommentForPullRequestResult& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline PostCommentForPullRequestResult& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the comment you posted.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }
    inline void SetComment(const Comment& value) { m_comment = value; }
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }
    inline PostCommentForPullRequestResult& WithComment(const Comment& value) { SetComment(value); return *this;}
    inline PostCommentForPullRequestResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostCommentForPullRequestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostCommentForPullRequestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostCommentForPullRequestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;

    Aws::String m_pullRequestId;

    Aws::String m_beforeCommitId;

    Aws::String m_afterCommitId;

    Aws::String m_beforeBlobId;

    Aws::String m_afterBlobId;

    Location m_location;

    Comment m_comment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
