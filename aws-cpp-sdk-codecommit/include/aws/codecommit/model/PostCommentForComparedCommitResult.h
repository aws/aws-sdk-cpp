/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API PostCommentForComparedCommitResult
  {
  public:
    PostCommentForComparedCommitResult();
    PostCommentForComparedCommitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PostCommentForComparedCommitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you posted a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitId = value; }

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitId = std::move(value); }

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitId.assign(value); }

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>In the directionality you established, the full commit ID of the 'before'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitId = value; }

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitId = std::move(value); }

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitId.assign(value); }

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>In the directionality you established, the full commit ID of the 'after'
     * commit.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}


    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const{ return m_beforeBlobId; }

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline void SetBeforeBlobId(const Aws::String& value) { m_beforeBlobId = value; }

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline void SetBeforeBlobId(Aws::String&& value) { m_beforeBlobId = std::move(value); }

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline void SetBeforeBlobId(const char* value) { m_beforeBlobId.assign(value); }

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(const Aws::String& value) { SetBeforeBlobId(value); return *this;}

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(Aws::String&& value) { SetBeforeBlobId(std::move(value)); return *this;}

    /**
     * <p>In the directionality you established, the blob ID of the 'before' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithBeforeBlobId(const char* value) { SetBeforeBlobId(value); return *this;}


    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline const Aws::String& GetAfterBlobId() const{ return m_afterBlobId; }

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline void SetAfterBlobId(const Aws::String& value) { m_afterBlobId = value; }

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline void SetAfterBlobId(Aws::String&& value) { m_afterBlobId = std::move(value); }

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline void SetAfterBlobId(const char* value) { m_afterBlobId.assign(value); }

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterBlobId(const Aws::String& value) { SetAfterBlobId(value); return *this;}

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterBlobId(Aws::String&& value) { SetAfterBlobId(std::move(value)); return *this;}

    /**
     * <p>In the directionality you established, the blob ID of the 'after' blob.</p>
     */
    inline PostCommentForComparedCommitResult& WithAfterBlobId(const char* value) { SetAfterBlobId(value); return *this;}


    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline void SetLocation(const Location& value) { m_location = value; }

    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline void SetLocation(Location&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline PostCommentForComparedCommitResult& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the comment in the comparison between the two commits.</p>
     */
    inline PostCommentForComparedCommitResult& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The content of the comment you posted.</p>
     */
    inline const Comment& GetComment() const{ return m_comment; }

    /**
     * <p>The content of the comment you posted.</p>
     */
    inline void SetComment(const Comment& value) { m_comment = value; }

    /**
     * <p>The content of the comment you posted.</p>
     */
    inline void SetComment(Comment&& value) { m_comment = std::move(value); }

    /**
     * <p>The content of the comment you posted.</p>
     */
    inline PostCommentForComparedCommitResult& WithComment(const Comment& value) { SetComment(value); return *this;}

    /**
     * <p>The content of the comment you posted.</p>
     */
    inline PostCommentForComparedCommitResult& WithComment(Comment&& value) { SetComment(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;

    Aws::String m_beforeCommitId;

    Aws::String m_afterCommitId;

    Aws::String m_beforeBlobId;

    Aws::String m_afterBlobId;

    Location m_location;

    Comment m_comment;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
