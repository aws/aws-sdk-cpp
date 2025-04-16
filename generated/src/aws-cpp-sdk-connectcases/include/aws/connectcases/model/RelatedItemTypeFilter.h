/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentFilter.h>
#include <aws/connectcases/model/ContactFilter.h>
#include <aws/connectcases/model/FileFilter.h>
#include <aws/connectcases/model/SlaFilter.h>
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
    AWS_CONNECTCASES_API RelatedItemTypeFilter() = default;
    AWS_CONNECTCASES_API RelatedItemTypeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API RelatedItemTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A filter for related items of type <code>Comment</code>.</p>
     */
    inline const CommentFilter& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = CommentFilter>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = CommentFilter>
    RelatedItemTypeFilter& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for related items of type <code>Contact</code>.</p>
     */
    inline const ContactFilter& GetContact() const { return m_contact; }
    inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
    template<typename ContactT = ContactFilter>
    void SetContact(ContactT&& value) { m_contactHasBeenSet = true; m_contact = std::forward<ContactT>(value); }
    template<typename ContactT = ContactFilter>
    RelatedItemTypeFilter& WithContact(ContactT&& value) { SetContact(std::forward<ContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter for related items of this type of <code>File</code>.</p>
     */
    inline const FileFilter& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = FileFilter>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = FileFilter>
    RelatedItemTypeFilter& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filter for related items of type <code>SLA</code>.</p>
     */
    inline const SlaFilter& GetSla() const { return m_sla; }
    inline bool SlaHasBeenSet() const { return m_slaHasBeenSet; }
    template<typename SlaT = SlaFilter>
    void SetSla(SlaT&& value) { m_slaHasBeenSet = true; m_sla = std::forward<SlaT>(value); }
    template<typename SlaT = SlaFilter>
    RelatedItemTypeFilter& WithSla(SlaT&& value) { SetSla(std::forward<SlaT>(value)); return *this;}
    ///@}
  private:

    CommentFilter m_comment;
    bool m_commentHasBeenSet = false;

    ContactFilter m_contact;
    bool m_contactHasBeenSet = false;

    FileFilter m_file;
    bool m_fileHasBeenSet = false;

    SlaFilter m_sla;
    bool m_slaHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
