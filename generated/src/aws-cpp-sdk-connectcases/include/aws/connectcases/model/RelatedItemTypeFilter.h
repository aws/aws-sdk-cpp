/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentFilter.h>
#include <aws/connectcases/model/ContactFilter.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>The list of types of related items and their parameters to use for
   * filtering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemTypeFilter">AWS
   * API Reference</a></p>
   */
  class RelatedItemTypeFilter
  {
  public:
    AWS_CONNECTCASES_API RelatedItemTypeFilter();
    AWS_CONNECTCASES_API RelatedItemTypeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RelatedItemTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline const CommentFilter& GetComment() const{ return m_comment; }

    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline void SetComment(const CommentFilter& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline void SetComment(CommentFilter&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline RelatedItemTypeFilter& WithComment(const CommentFilter& value) { SetComment(value); return *this;}

    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline RelatedItemTypeFilter& WithComment(CommentFilter&& value) { SetComment(std::move(value)); return *this;}


    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline const ContactFilter& GetContact() const{ return m_contact; }

    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }

    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline void SetContact(const ContactFilter& value) { m_contactHasBeenSet = true; m_contact = value; }

    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline void SetContact(ContactFilter&& value) { m_contactHasBeenSet = true; m_contact = std::move(value); }

    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline RelatedItemTypeFilter& WithContact(const ContactFilter& value) { SetContact(value); return *this;}

    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline RelatedItemTypeFilter& WithContact(ContactFilter&& value) { SetContact(std::move(value)); return *this;}

  private:

    CommentFilter m_comment;
    bool m_commentHasBeenSet = false;

    ContactFilter m_contact;
    bool m_contactHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
