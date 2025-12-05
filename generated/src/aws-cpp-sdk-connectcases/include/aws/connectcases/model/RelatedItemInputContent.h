/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/CommentContent.h>
#include <aws/connectcases/model/ConnectCaseInputContent.h>
#include <aws/connectcases/model/Contact.h>
#include <aws/connectcases/model/CustomInputContent.h>
#include <aws/connectcases/model/FileContent.h>
#include <aws/connectcases/model/SlaInputContent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Represents the content of a related item to be created.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemInputContent">AWS
 * API Reference</a></p>
 */
class RelatedItemInputContent {
 public:
  AWS_CONNECTCASES_API RelatedItemInputContent() = default;
  AWS_CONNECTCASES_API RelatedItemInputContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API RelatedItemInputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Object representing a contact in Amazon Connect as an API request field.</p>
   */
  inline const Contact& GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  template <typename ContactT = Contact>
  void SetContact(ContactT&& value) {
    m_contactHasBeenSet = true;
    m_contact = std::forward<ContactT>(value);
  }
  template <typename ContactT = Contact>
  RelatedItemInputContent& WithContact(ContactT&& value) {
    SetContact(std::forward<ContactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the content of a comment to be returned to agents.</p>
   */
  inline const CommentContent& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = CommentContent>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = CommentContent>
  RelatedItemInputContent& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A file of related items.</p>
   */
  inline const FileContent& GetFile() const { return m_file; }
  inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
  template <typename FileT = FileContent>
  void SetFile(FileT&& value) {
    m_fileHasBeenSet = true;
    m_file = std::forward<FileT>(value);
  }
  template <typename FileT = FileContent>
  RelatedItemInputContent& WithFile(FileT&& value) {
    SetFile(std::forward<FileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the content of an SLA to be created.</p>
   */
  inline const SlaInputContent& GetSla() const { return m_sla; }
  inline bool SlaHasBeenSet() const { return m_slaHasBeenSet; }
  template <typename SlaT = SlaInputContent>
  void SetSla(SlaT&& value) {
    m_slaHasBeenSet = true;
    m_sla = std::forward<SlaT>(value);
  }
  template <typename SlaT = SlaInputContent>
  RelatedItemInputContent& WithSla(SlaT&& value) {
    SetSla(std::forward<SlaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the Amazon Connect case to be created as a related item.</p>
   */
  inline const ConnectCaseInputContent& GetConnectCase() const { return m_connectCase; }
  inline bool ConnectCaseHasBeenSet() const { return m_connectCaseHasBeenSet; }
  template <typename ConnectCaseT = ConnectCaseInputContent>
  void SetConnectCase(ConnectCaseT&& value) {
    m_connectCaseHasBeenSet = true;
    m_connectCase = std::forward<ConnectCaseT>(value);
  }
  template <typename ConnectCaseT = ConnectCaseInputContent>
  RelatedItemInputContent& WithConnectCase(ConnectCaseT&& value) {
    SetConnectCase(std::forward<ConnectCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents the content of a <code>Custom</code> type related item.</p>
   */
  inline const CustomInputContent& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = CustomInputContent>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = CustomInputContent>
  RelatedItemInputContent& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}
 private:
  Contact m_contact;

  CommentContent m_comment;

  FileContent m_file;

  SlaInputContent m_sla;

  ConnectCaseInputContent m_connectCase;

  CustomInputContent m_custom;
  bool m_contactHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_fileHasBeenSet = false;
  bool m_slaHasBeenSet = false;
  bool m_connectCaseHasBeenSet = false;
  bool m_customHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
