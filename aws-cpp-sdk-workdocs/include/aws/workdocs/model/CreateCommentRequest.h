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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/CommentVisibilityType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API CreateCommentRequest : public WorkDocsRequest
  {
  public:
    CreateCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline CreateCommentRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline CreateCommentRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline CreateCommentRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline CreateCommentRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline CreateCommentRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline CreateCommentRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The ID of the document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline CreateCommentRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline CreateCommentRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline CreateCommentRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The ID of the parent comment.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline CreateCommentRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline CreateCommentRequest& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline CreateCommentRequest& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline const Aws::String& GetThreadId() const{ return m_threadId; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline bool ThreadIdHasBeenSet() const { return m_threadIdHasBeenSet; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(const Aws::String& value) { m_threadIdHasBeenSet = true; m_threadId = value; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(Aws::String&& value) { m_threadIdHasBeenSet = true; m_threadId = std::move(value); }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(const char* value) { m_threadIdHasBeenSet = true; m_threadId.assign(value); }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline CreateCommentRequest& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline CreateCommentRequest& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline CreateCommentRequest& WithThreadId(const char* value) { SetThreadId(value); return *this;}


    /**
     * <p>The text of the comment.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of the comment.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of the comment.</p>
     */
    inline CreateCommentRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of the comment.</p>
     */
    inline CreateCommentRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of the comment.</p>
     */
    inline CreateCommentRequest& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline const CommentVisibilityType& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline void SetVisibility(const CommentVisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline void SetVisibility(CommentVisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline CreateCommentRequest& WithVisibility(const CommentVisibilityType& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline CreateCommentRequest& WithVisibility(CommentVisibilityType&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline bool GetNotifyCollaborators() const{ return m_notifyCollaborators; }

    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline bool NotifyCollaboratorsHasBeenSet() const { return m_notifyCollaboratorsHasBeenSet; }

    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline void SetNotifyCollaborators(bool value) { m_notifyCollaboratorsHasBeenSet = true; m_notifyCollaborators = value; }

    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline CreateCommentRequest& WithNotifyCollaborators(bool value) { SetNotifyCollaborators(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;

    Aws::String m_threadId;
    bool m_threadIdHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    CommentVisibilityType m_visibility;
    bool m_visibilityHasBeenSet;

    bool m_notifyCollaborators;
    bool m_notifyCollaboratorsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
