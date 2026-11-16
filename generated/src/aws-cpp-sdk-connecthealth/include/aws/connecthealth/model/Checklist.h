/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ChecklistItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Contains the sections of a note template checklist and the discussion status
 * of each section.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/Checklist">AWS
 * API Reference</a></p>
 */
class Checklist {
 public:
  AWS_CONNECTHEALTH_API Checklist() = default;
  AWS_CONNECTHEALTH_API Checklist(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Checklist& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the checklist. For a managed note template, this value is
   * the template type, such as <code>HISTORY_AND_PHYSICAL</code>. For a custom note
   * template, this value is <code>CUSTOM_</code> followed by the template base, such
   * as <code>CUSTOM_GIRPP</code>.</p>
   */
  inline const Aws::String& GetChecklistId() const { return m_checklistId; }
  inline bool ChecklistIdHasBeenSet() const { return m_checklistIdHasBeenSet; }
  template <typename ChecklistIdT = Aws::String>
  void SetChecklistId(ChecklistIdT&& value) {
    m_checklistIdHasBeenSet = true;
    m_checklistId = std::forward<ChecklistIdT>(value);
  }
  template <typename ChecklistIdT = Aws::String>
  Checklist& WithChecklistId(ChecklistIdT&& value) {
    SetChecklistId(std::forward<ChecklistIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checklist items in template order. The list contains one item for each
   * checklist section, including sections that have not been discussed.</p>
   */
  inline const Aws::Vector<ChecklistItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<ChecklistItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<ChecklistItem>>
  Checklist& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = ChecklistItem>
  Checklist& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_checklistId;

  Aws::Vector<ChecklistItem> m_items;
  bool m_checklistIdHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
