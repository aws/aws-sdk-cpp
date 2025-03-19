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
    AWS_AUDITMANAGER_API ControlComment() = default;
    AWS_AUDITMANAGER_API ControlComment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlComment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the user who authored the comment. </p>
     */
    inline const Aws::String& GetAuthorName() const { return m_authorName; }
    inline bool AuthorNameHasBeenSet() const { return m_authorNameHasBeenSet; }
    template<typename AuthorNameT = Aws::String>
    void SetAuthorName(AuthorNameT&& value) { m_authorNameHasBeenSet = true; m_authorName = std::forward<AuthorNameT>(value); }
    template<typename AuthorNameT = Aws::String>
    ControlComment& WithAuthorName(AuthorNameT&& value) { SetAuthorName(std::forward<AuthorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The body text of a control comment. </p>
     */
    inline const Aws::String& GetCommentBody() const { return m_commentBody; }
    inline bool CommentBodyHasBeenSet() const { return m_commentBodyHasBeenSet; }
    template<typename CommentBodyT = Aws::String>
    void SetCommentBody(CommentBodyT&& value) { m_commentBodyHasBeenSet = true; m_commentBody = std::forward<CommentBodyT>(value); }
    template<typename CommentBodyT = Aws::String>
    ControlComment& WithCommentBody(CommentBodyT&& value) { SetCommentBody(std::forward<CommentBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the comment was posted. </p>
     */
    inline const Aws::Utils::DateTime& GetPostedDate() const { return m_postedDate; }
    inline bool PostedDateHasBeenSet() const { return m_postedDateHasBeenSet; }
    template<typename PostedDateT = Aws::Utils::DateTime>
    void SetPostedDate(PostedDateT&& value) { m_postedDateHasBeenSet = true; m_postedDate = std::forward<PostedDateT>(value); }
    template<typename PostedDateT = Aws::Utils::DateTime>
    ControlComment& WithPostedDate(PostedDateT&& value) { SetPostedDate(std::forward<PostedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorName;
    bool m_authorNameHasBeenSet = false;

    Aws::String m_commentBody;
    bool m_commentBodyHasBeenSet = false;

    Aws::Utils::DateTime m_postedDate{};
    bool m_postedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
