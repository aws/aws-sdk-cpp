/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class PostCommentForComparedCommitRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API PostCommentForComparedCommitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostCommentForComparedCommit"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to post a comment on the comparison
     * between commits.</p>
     */
    inline PostCommentForComparedCommitRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const{ return m_beforeCommitId; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline void SetBeforeCommitId(const Aws::String& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = value; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline void SetBeforeCommitId(Aws::String&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::move(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline void SetBeforeCommitId(const char* value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId.assign(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithBeforeCommitId(const Aws::String& value) { SetBeforeCommitId(value); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithBeforeCommitId(Aws::String&& value) { SetBeforeCommitId(std::move(value)); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * before commit. Required for commenting on any commit unless that commit is the
     * initial commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithBeforeCommitId(const char* value) { SetBeforeCommitId(value); return *this;}


    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline const Aws::String& GetAfterCommitId() const{ return m_afterCommitId; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline void SetAfterCommitId(const Aws::String& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = value; }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline void SetAfterCommitId(Aws::String&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::move(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline void SetAfterCommitId(const char* value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId.assign(value); }

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithAfterCommitId(const Aws::String& value) { SetAfterCommitId(value); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithAfterCommitId(Aws::String&& value) { SetAfterCommitId(std::move(value)); return *this;}

    /**
     * <p>To establish the directionality of the comparison, the full commit ID of the
     * after commit.</p>
     */
    inline PostCommentForComparedCommitRequest& WithAfterCommitId(const char* value) { SetAfterCommitId(value); return *this;}


    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline PostCommentForComparedCommitRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the comparison where you want to comment.</p>
     */
    inline PostCommentForComparedCommitRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline PostCommentForComparedCommitRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline PostCommentForComparedCommitRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the comment you want to make.</p>
     */
    inline PostCommentForComparedCommitRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PostCommentForComparedCommitRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PostCommentForComparedCommitRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PostCommentForComparedCommitRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
