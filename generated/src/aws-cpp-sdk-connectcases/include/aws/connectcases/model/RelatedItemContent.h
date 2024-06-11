/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentContent.h>
#include <aws/connectcases/model/ContactContent.h>
#include <aws/connectcases/model/FileContent.h>
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


    ///@{
    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline const CommentContent& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const CommentContent& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(CommentContent&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline RelatedItemContent& WithComment(const CommentContent& value) { SetComment(value); return *this;}
    inline RelatedItemContent& WithComment(CommentContent&& value) { SetComment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the content of a contact to be returned to agents.</p>
     */
    inline const ContactContent& GetContact() const{ return m_contact; }
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
    inline void SetContact(const ContactContent& value) { m_contactHasBeenSet = true; m_contact = value; }
    inline void SetContact(ContactContent&& value) { m_contactHasBeenSet = true; m_contact = std::move(value); }
    inline RelatedItemContent& WithContact(const ContactContent& value) { SetContact(value); return *this;}
    inline RelatedItemContent& WithContact(ContactContent&& value) { SetContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the content of a File to be returned to agents.</p>
     */
    inline const FileContent& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const FileContent& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(FileContent&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline RelatedItemContent& WithFile(const FileContent& value) { SetFile(value); return *this;}
    inline RelatedItemContent& WithFile(FileContent&& value) { SetFile(std::move(value)); return *this;}
    ///@}
  private:

    CommentContent m_comment;
    bool m_commentHasBeenSet = false;

    ContactContent m_contact;
    bool m_contactHasBeenSet = false;

    FileContent m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
