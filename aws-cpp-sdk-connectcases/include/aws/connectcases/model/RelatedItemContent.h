/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentContent.h>
#include <aws/connectcases/model/ContactContent.h>
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
   * <p>Represents the content of a particular type of related item.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemContent">AWS
   * API Reference</a></p>
   */
  class RelatedItemContent
  {
  public:
    AWS_CONNECTCASES_API RelatedItemContent();
    AWS_CONNECTCASES_API RelatedItemContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RelatedItemContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline const CommentContent& GetComment() const{ return m_comment; }

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline void SetComment(const CommentContent& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline void SetComment(CommentContent&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline RelatedItemContent& WithComment(const CommentContent& value) { SetComment(value); return *this;}

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline RelatedItemContent& WithComment(CommentContent&& value) { SetComment(std::move(value)); return *this;}


    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline const ContactContent& GetContact() const{ return m_contact; }

    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }

    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline void SetContact(const ContactContent& value) { m_contactHasBeenSet = true; m_contact = value; }

    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline void SetContact(ContactContent&& value) { m_contactHasBeenSet = true; m_contact = std::move(value); }

    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline RelatedItemContent& WithContact(const ContactContent& value) { SetContact(value); return *this;}

    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline RelatedItemContent& WithContact(ContactContent&& value) { SetContact(std::move(value)); return *this;}

  private:

    CommentContent m_comment;
    bool m_commentHasBeenSet = false;

    ContactContent m_contact;
    bool m_contactHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
