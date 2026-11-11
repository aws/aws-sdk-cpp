/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

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
 * <p>Specifies which types of related items to move from the secondary case to the
 * primary case when you merge cases. Moved related items keep their related item
 * ID, creator, association time, and tags.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/RelatedItemsConfiguration">AWS
 * API Reference</a></p>
 */
class RelatedItemsConfiguration {
 public:
  AWS_CONNECTCASES_API RelatedItemsConfiguration() = default;
  AWS_CONNECTCASES_API RelatedItemsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API RelatedItemsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether to move Comment related items to the primary case.</p>
   */
  inline bool GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  inline void SetComment(bool value) {
    m_commentHasBeenSet = true;
    m_comment = value;
  }
  inline RelatedItemsConfiguration& WithComment(bool value) {
    SetComment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to move Case related items to the primary case. If the primary case
   * already links to the same case, the secondary case's link is removed instead of
   * moved.</p>
   */
  inline bool GetConnectCase() const { return m_connectCase; }
  inline bool ConnectCaseHasBeenSet() const { return m_connectCaseHasBeenSet; }
  inline void SetConnectCase(bool value) {
    m_connectCaseHasBeenSet = true;
    m_connectCase = value;
  }
  inline RelatedItemsConfiguration& WithConnectCase(bool value) {
    SetConnectCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to move Contact related items to the primary case. If the same
   * contact is related to both cases, the primary case keeps its related item and
   * gets any tag keys that only the secondary case's related item has.</p>
   */
  inline bool GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  inline void SetContact(bool value) {
    m_contactHasBeenSet = true;
    m_contact = value;
  }
  inline RelatedItemsConfiguration& WithContact(bool value) {
    SetContact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to move Custom related items to the primary case.</p>
   */
  inline bool GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  inline void SetCustom(bool value) {
    m_customHasBeenSet = true;
    m_custom = value;
  }
  inline RelatedItemsConfiguration& WithCustom(bool value) {
    SetCustom(value);
    return *this;
  }
  ///@}
 private:
  bool m_comment{false};

  bool m_connectCase{false};

  bool m_contact{false};

  bool m_custom{false};
  bool m_commentHasBeenSet = false;
  bool m_connectCaseHasBeenSet = false;
  bool m_contactHasBeenSet = false;
  bool m_customHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
