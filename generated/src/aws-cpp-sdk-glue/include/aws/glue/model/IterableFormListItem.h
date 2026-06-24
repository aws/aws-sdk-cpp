/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A summary of an item in an iterable form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IterableFormListItem">AWS
 * API Reference</a></p>
 */
class IterableFormListItem {
 public:
  AWS_GLUE_API IterableFormListItem() = default;
  AWS_GLUE_API IterableFormListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IterableFormListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the item.</p>
   */
  inline const Aws::String& GetItemId() const { return m_itemId; }
  inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
  template <typename ItemIdT = Aws::String>
  void SetItemId(ItemIdT&& value) {
    m_itemIdHasBeenSet = true;
    m_itemId = std::forward<ItemIdT>(value);
  }
  template <typename ItemIdT = Aws::String>
  IterableFormListItem& WithItemId(ItemIdT&& value) {
    SetItemId(std::forward<ItemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the item.</p>
   */
  inline const Aws::String& GetItemName() const { return m_itemName; }
  inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }
  template <typename ItemNameT = Aws::String>
  void SetItemName(ItemNameT&& value) {
    m_itemNameHasBeenSet = true;
    m_itemName = std::forward<ItemNameT>(value);
  }
  template <typename ItemNameT = Aws::String>
  IterableFormListItem& WithItemName(ItemNameT&& value) {
    SetItemName(std::forward<ItemNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the item.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  IterableFormListItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the glossary terms associated with the item.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
  inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  void SetGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms = std::forward<GlossaryTermsT>(value);
  }
  template <typename GlossaryTermsT = Aws::Vector<Aws::String>>
  IterableFormListItem& WithGlossaryTerms(GlossaryTermsT&& value) {
    SetGlossaryTerms(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  template <typename GlossaryTermsT = Aws::String>
  IterableFormListItem& AddGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_itemId;

  Aws::String m_itemName;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_glossaryTerms;
  bool m_itemIdHasBeenSet = false;
  bool m_itemNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_glossaryTermsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
