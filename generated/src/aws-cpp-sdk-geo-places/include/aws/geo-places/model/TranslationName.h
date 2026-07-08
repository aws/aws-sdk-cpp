/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/TranslationNameType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoPlaces {
namespace Model {

/**
 * <p>A translation or alternative name for an address component.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/TranslationName">AWS
 * API Reference</a></p>
 */
class TranslationName {
 public:
  AWS_GEOPLACES_API TranslationName() = default;
  AWS_GEOPLACES_API TranslationName(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API TranslationName& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The translated or alternative name value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  TranslationName& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A <a
   * href="https://www.iana.org/assignments/language-subtag-registry/language-subtag-registry">BCP
   * 47</a> compliant language code for the translation name.</p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  TranslationName& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of translation name. Valid values are <code>Abbreviation</code>,
   * <code>AreaCode</code>, <code>BaseName</code>, <code>Exonym</code>,
   * <code>Shortened</code>, and <code>Synonym</code>.</p>
   */
  inline TranslationNameType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TranslationNameType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TranslationName& WithType(TranslationNameType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>true</code>, indicates this is the primary name variant for the
   * given language.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline TranslationName& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>true</code>, indicates this name is a transliterated version rather
   * than a native script translation.</p>
   */
  inline bool GetTransliterated() const { return m_transliterated; }
  inline bool TransliteratedHasBeenSet() const { return m_transliteratedHasBeenSet; }
  inline void SetTransliterated(bool value) {
    m_transliteratedHasBeenSet = true;
    m_transliterated = value;
  }
  inline TranslationName& WithTransliterated(bool value) {
    SetTransliterated(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_language;

  TranslationNameType m_type{TranslationNameType::NOT_SET};

  bool m_primary{false};

  bool m_transliterated{false};
  bool m_valueHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_primaryHasBeenSet = false;
  bool m_transliteratedHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
