/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/DictionaryLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace DictionaryLanguageMapper {

static const int eng_HASH = HashingUtils::HashString("eng");
static const int fra_HASH = HashingUtils::HashString("fra");
static const int ita_HASH = HashingUtils::HashString("ita");
static const int deu_HASH = HashingUtils::HashString("deu");
static const int spa_HASH = HashingUtils::HashString("spa");
static const int por_HASH = HashingUtils::HashString("por");

DictionaryLanguage GetDictionaryLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == eng_HASH) {
    return DictionaryLanguage::eng;
  } else if (hashCode == fra_HASH) {
    return DictionaryLanguage::fra;
  } else if (hashCode == ita_HASH) {
    return DictionaryLanguage::ita;
  } else if (hashCode == deu_HASH) {
    return DictionaryLanguage::deu;
  } else if (hashCode == spa_HASH) {
    return DictionaryLanguage::spa;
  } else if (hashCode == por_HASH) {
    return DictionaryLanguage::por;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DictionaryLanguage>(hashCode);
  }

  return DictionaryLanguage::NOT_SET;
}

Aws::String GetNameForDictionaryLanguage(DictionaryLanguage enumValue) {
  switch (enumValue) {
    case DictionaryLanguage::NOT_SET:
      return {};
    case DictionaryLanguage::eng:
      return "eng";
    case DictionaryLanguage::fra:
      return "fra";
    case DictionaryLanguage::ita:
      return "ita";
    case DictionaryLanguage::deu:
      return "deu";
    case DictionaryLanguage::spa:
      return "spa";
    case DictionaryLanguage::por:
      return "por";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DictionaryLanguageMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
