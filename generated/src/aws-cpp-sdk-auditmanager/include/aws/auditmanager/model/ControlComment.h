/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A comment that's posted by a user on a control. This includes the author's
   * name, the comment text, and a timestamp. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlComment">AWS
   * API Reference</a></p>
   */
  class ControlComment
  {
  public:
    AWS_AUDITMANAGER_API ControlComment();
    AWS_AUDITMANAGER_API ControlComment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlComment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline const Aws::String& GetAuthorName() const{ return m_authorName; }

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline void SetAuthorName(const Aws::String& value) { m_authorNameHasBeenSet = true; m_authorName = value; }

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline void SetAuthorName(Aws::String&& value) { m_authorNameHasBeenSet = true; m_authorName = std::move(value); }

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline void SetAuthorName(const char* value) { m_authorNameHasBeenSet = true; m_authorName.assign(value); }

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline ControlComment& WithAuthorName(const Aws::String& value) { SetAuthorName(value); return *this;}

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline ControlComment& WithAuthorName(Aws::String&& value) { SetAuthorName(std::move(value)); return *this;}

    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline ControlComment& WithAuthorName(const char* value) { SetAuthorName(value); return *this;}


    /**
     * <p> The body text of a control comment. </p>
     */
    inline const Aws::String& GetCommentBody() const{ return m_commentBody; }

    /**
     * <p> The body text of a control comment. </p>
     */
    inline bool CommentBodyHasBeenSet() const { return m_commentBodyHasBeenSet; }

    /**
     * <p> The body text of a control comment. </p>
     */
    inline void SetCommentBody(const Aws::String& value) { m_commentBodyHasBeenSet = true; m_commentBody = value; }

    /**
     * <p> The body text of a control comment. </p>
     */
    inline void SetCommentBody(Aws::String&& value) { m_commentBodyHasBeenSet = true; m_commentBody = std::move(value); }

    /**
     * <p> The body text of a control comment. </p>
     */
    inline void SetCommentBody(const char* value) { m_commentBodyHasBeenSet = true; m_commentBody.assign(value); }

    /**
     * <p> The body text of a control comment. </p>
     */
    inline ControlComment& WithCommentBody(const Aws::String& value) { SetCommentBody(value); return *this;}

    /**
     * <p> The body text of a control comment. </p>
     */
    inline ControlComment& WithCommentBody(Aws::String&& value) { SetCommentBody(std::move(value)); return *this;}

    /**
     * <p> The body text of a control comment. </p>
     */
    inline ControlComment& WithCommentBody(const char* value) { SetCommentBody(value); return *this;}


    /**
     * <p> The time when the comment was posted. </p>
     */
    inline const Aws::Utils::DateTime& GetPostedDate() const{ return m_postedDate; }

    /**
     * <p> The time when the comment was posted. </p>
     */
    inline bool PostedDateHasBeenSet() const { return m_postedDateHasBeenSet; }

    /**
     * <p> The time when the comment was posted. </p>
     */
    inline void SetPostedDate(const Aws::Utils::DateTime& value) { m_postedDateHasBeenSet = true; m_postedDate = value; }

    /**
     * <p> The time when the comment was posted. </p>
     */
    inline void SetPostedDate(Aws::Utils::DateTime&& value) { m_postedDateHasBeenSet = true; m_postedDate = std::move(value); }

    /**
     * <p> The time when the comment was posted. </p>
     */
    inline ControlComment& WithPostedDate(const Aws::Utils::DateTime& value) { SetPostedDate(value); return *this;}

    /**
     * <p> The time when the comment was posted. </p>
     */
    inline ControlComment& WithPostedDate(Aws::Utils::DateTime&& value) { SetPostedDate(std::move(value)); return *this;}

  private:

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_commentBody;
    bool m_commentBodyHasBeenSet = false;

    Aws::Utils::DateTime m_postedDate;
    bool m_postedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
