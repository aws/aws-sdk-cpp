/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/Language.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
namespace LanguageMapper {

static const int EN_HASH = HashingUtils::HashString("EN");
static const int DE_HASH = HashingUtils::HashString("DE");
static const int ES_HASH = HashingUtils::HashString("ES");
static const int FR_HASH = HashingUtils::HashString("FR");
static const int IT_HASH = HashingUtils::HashString("IT");
static const int PT_HASH = HashingUtils::HashString("PT");
static const int JA_HASH = HashingUtils::HashString("JA");
static const int KO_HASH = HashingUtils::HashString("KO");
static const int CN_HASH = HashingUtils::HashString("CN");
static const int TW_HASH = HashingUtils::HashString("TW");
static const int HK_HASH = HashingUtils::HashString("HK");

Language GetLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EN_HASH) {
    return Language::EN;
  } else if (hashCode == DE_HASH) {
    return Language::DE;
  } else if (hashCode == ES_HASH) {
    return Language::ES;
  } else if (hashCode == FR_HASH) {
    return Language::FR;
  } else if (hashCode == IT_HASH) {
    return Language::IT;
  } else if (hashCode == PT_HASH) {
    return Language::PT;
  } else if (hashCode == JA_HASH) {
    return Language::JA;
  } else if (hashCode == KO_HASH) {
    return Language::KO;
  } else if (hashCode == CN_HASH) {
    return Language::CN;
  } else if (hashCode == TW_HASH) {
    return Language::TW;
  } else if (hashCode == HK_HASH) {
    return Language::HK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Language>(hashCode);
  }

  return Language::NOT_SET;
}

Aws::String GetNameForLanguage(Language enumValue) {
  switch (enumValue) {
    case Language::NOT_SET:
      return {};
    case Language::EN:
      return "EN";
    case Language::DE:
      return "DE";
    case Language::ES:
      return "ES";
    case Language::FR:
      return "FR";
    case Language::IT:
      return "IT";
    case Language::PT:
      return "PT";
    case Language::JA:
      return "JA";
    case Language::KO:
      return "KO";
    case Language::CN:
      return "CN";
    case Language::TW:
      return "TW";
    case Language::HK:
      return "HK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LanguageMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
