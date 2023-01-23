/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentContent.h>
#include <aws/connectcases/model/Contact.h>
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
   * <p>Represents the content of a related item to be created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemInputContent">AWS
   * API Reference</a></p>
   */
  class RelatedItemInputContent
  {
  public:
    AWS_CONNECTCASES_API RelatedItemInputContent();
    AWS_CONNECTCASES_API RelatedItemInputContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RelatedItemInputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RelatedItemInputContent& WithComment(const CommentContent& value) { SetComment(value); return *this;}

    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline RelatedItemInputContent& WithComment(CommentContent&& value) { SetComment(std::move(value)); return *this;}


    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline const Contact& GetContact() const{ return m_contact; }

    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }

    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline void SetContact(const Contact& value) { m_contactHasBeenSet = true; m_contact = value; }

    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline void SetContact(Contact&& value) { m_contactHasBeenSet = true; m_contact = std::move(value); }

    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline RelatedItemInputContent& WithContact(const Contact& value) { SetContact(value); return *this;}

    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline RelatedItemInputContent& WithContact(Contact&& value) { SetContact(std::move(value)); return *this;}

  private:

    CommentContent m_comment;
    bool m_commentHasBeenSet = false;

    Contact m_contact;
    bool m_contactHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
