/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/TranslationName.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

TranslationName::TranslationName(JsonView jsonValue) { *this = jsonValue; }

TranslationName& TranslationName::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Language")) {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = TranslationNameTypeMapper::GetTranslationNameTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Primary")) {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Transliterated")) {
    m_transliterated = jsonValue.GetBool("Transliterated");
    m_transliteratedHasBeenSet = true;
  }
  return *this;
}

JsonValue TranslationName::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("Language", m_language);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", TranslationNameTypeMapper::GetNameForTranslationNameType(m_type));
  }

  if (m_primaryHasBeenSet) {
    payload.WithBool("Primary", m_primary);
  }

  if (m_transliteratedHasBeenSet) {
    payload.WithBool("Transliterated", m_transliterated);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
