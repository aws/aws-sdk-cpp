/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentContent.h>
#include <aws/connectcases/model/Contact.h>
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


    ///@{
    /**
     * <p>Represents the content of a comment to be returned to agents.</p>
     */
    inline const CommentContent& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const CommentContent& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(CommentContent&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline RelatedItemInputContent& WithComment(const CommentContent& value) { SetComment(value); return *this;}
    inline RelatedItemInputContent& WithComment(CommentContent&& value) { SetComment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object representing a contact in Amazon Connect as an API request field.</p>
     */
    inline const Contact& GetContact() const{ return m_contact; }
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
    inline void SetContact(const Contact& value) { m_contactHasBeenSet = true; m_contact = value; }
    inline void SetContact(Contact&& value) { m_contactHasBeenSet = true; m_contact = std::move(value); }
    inline RelatedItemInputContent& WithContact(const Contact& value) { SetContact(value); return *this;}
    inline RelatedItemInputContent& WithContact(Contact&& value) { SetContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file of related items.</p>
     */
    inline const FileContent& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const FileContent& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(FileContent&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline RelatedItemInputContent& WithFile(const FileContent& value) { SetFile(value); return *this;}
    inline RelatedItemInputContent& WithFile(FileContent&& value) { SetFile(std::move(value)); return *this;}
    ///@}
  private:

    CommentContent m_comment;
    bool m_commentHasBeenSet = false;

    Contact m_contact;
    bool m_contactHasBeenSet = false;

    FileContent m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
