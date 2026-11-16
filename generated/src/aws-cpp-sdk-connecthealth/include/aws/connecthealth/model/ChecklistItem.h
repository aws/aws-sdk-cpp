/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ChecklistItemStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Contains a checklist item and its discussion status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ChecklistItem">AWS
 * API Reference</a></p>
 */
class ChecklistItem {
 public:
  AWS_CONNECTHEALTH_API ChecklistItem() = default;
  AWS_CONNECTHEALTH_API ChecklistItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ChecklistItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key that uniquely identifies the item within the checklist. For a managed
   * note template, this value is a service-defined section key, such as
   * <code>CHIEF_COMPLAINT</code>. For a custom note template, this value is the
   * <code>sectionHeader</code> of the section that you defined.</p>
   */
  inline const Aws::String& GetItemKey() const { return m_itemKey; }
  inline bool ItemKeyHasBeenSet() const { return m_itemKeyHasBeenSet; }
  template <typename ItemKeyT = Aws::String>
  void SetItemKey(ItemKeyT&& value) {
    m_itemKeyHasBeenSet = true;
    m_itemKey = std::forward<ItemKeyT>(value);
  }
  template <typename ItemKeyT = Aws::String>
  ChecklistItem& WithItemKey(ItemKeyT&& value) {
    SetItemKey(std::forward<ItemKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The discussion status of the checklist item. The following values are
   * valid:</p> <ul> <li> <p> <code>DISCUSSED</code>: The conversation has covered
   * the item.</p> </li> <li> <p> <code>PARTIALLY_DISCUSSED</code>: The conversation
   * has covered part of the item.</p> </li> <li> <p> <code>NOT_DISCUSSED</code>: The
   * conversation has not covered the item.</p> </li> </ul> <p>The status usually
   * progresses toward <code>DISCUSSED</code>, but it can return to
   * <code>NOT_DISCUSSED</code> if a speaker retracts a statement.</p>
   */
  inline ChecklistItemStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ChecklistItemStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChecklistItem& WithStatus(ChecklistItemStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_itemKey;

  ChecklistItemStatus m_status{ChecklistItemStatus::NOT_SET};
  bool m_itemKeyHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
