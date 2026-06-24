/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AssetFormEntry.h>

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
 * <p>A full iterable form item with its forms.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IterableFormItem">AWS
 * API Reference</a></p>
 */
class IterableFormItem {
 public:
  AWS_GLUE_API IterableFormItem() = default;
  AWS_GLUE_API IterableFormItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IterableFormItem& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  IterableFormItem& WithItemId(ItemIdT&& value) {
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
  IterableFormItem& WithItemName(ItemNameT&& value) {
    SetItemName(std::forward<ItemNameT>(value));
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
  IterableFormItem& WithGlossaryTerms(GlossaryTermsT&& value) {
    SetGlossaryTerms(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  template <typename GlossaryTermsT = Aws::String>
  IterableFormItem& AddGlossaryTerms(GlossaryTermsT&& value) {
    m_glossaryTermsHasBeenSet = true;
    m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The forms on the item, keyed by form name.</p>
   */
  inline const Aws::Map<Aws::String, AssetFormEntry>& GetForms() const { return m_forms; }
  inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Map<Aws::String, AssetFormEntry>>
  IterableFormItem& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsKeyT = Aws::String, typename FormsValueT = AssetFormEntry>
  IterableFormItem& AddForms(FormsKeyT&& key, FormsValueT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace(std::forward<FormsKeyT>(key), std::forward<FormsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional attachments on the item for more context, keyed by attachment
   * name.</p>
   */
  inline const Aws::Map<Aws::String, AssetFormEntry>& GetAttachments() const { return m_attachments; }
  inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
  template <typename AttachmentsT = Aws::Map<Aws::String, AssetFormEntry>>
  void SetAttachments(AttachmentsT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments = std::forward<AttachmentsT>(value);
  }
  template <typename AttachmentsT = Aws::Map<Aws::String, AssetFormEntry>>
  IterableFormItem& WithAttachments(AttachmentsT&& value) {
    SetAttachments(std::forward<AttachmentsT>(value));
    return *this;
  }
  template <typename AttachmentsKeyT = Aws::String, typename AttachmentsValueT = AssetFormEntry>
  IterableFormItem& AddAttachments(AttachmentsKeyT&& key, AttachmentsValueT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments.emplace(std::forward<AttachmentsKeyT>(key), std::forward<AttachmentsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_itemId;

  Aws::String m_itemName;

  Aws::Vector<Aws::String> m_glossaryTerms;

  Aws::Map<Aws::String, AssetFormEntry> m_forms;

  Aws::Map<Aws::String, AssetFormEntry> m_attachments;
  bool m_itemIdHasBeenSet = false;
  bool m_itemNameHasBeenSet = false;
  bool m_glossaryTermsHasBeenSet = false;
  bool m_formsHasBeenSet = false;
  bool m_attachmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
