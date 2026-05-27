/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/DictionaryLanguage.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class UpdateDictionaryRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateDictionaryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDictionary"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the dictionary to update.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateDictionaryRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the dictionary. If not specified, the name is not changed.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateDictionaryRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new language for the dictionary. If not specified, the language is not
   * changed.</p>
   */
  inline DictionaryLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(DictionaryLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline UpdateDictionaryRequest& WithLanguage(DictionaryLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New dictionary entries. If not specified, the entries are not changed.</p>
   */
  inline const Aws::String& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::String>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::String>
  UpdateDictionaryRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  DictionaryLanguage m_language{DictionaryLanguage::NOT_SET};

  Aws::String m_entries;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
