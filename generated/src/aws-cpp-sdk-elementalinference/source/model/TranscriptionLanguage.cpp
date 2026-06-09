/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/TranscriptionLanguage.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace TranscriptionLanguageMapper {

static const int eng_HASH = HashingUtils::HashString("eng");
static const int eng_au_HASH = HashingUtils::HashString("eng-au");
static const int eng_gb_HASH = HashingUtils::HashString("eng-gb");
static const int eng_us_HASH = HashingUtils::HashString("eng-us");
static const int fra_HASH = HashingUtils::HashString("fra");
static const int ita_HASH = HashingUtils::HashString("ita");
static const int deu_HASH = HashingUtils::HashString("deu");
static const int spa_HASH = HashingUtils::HashString("spa");
static const int por_HASH = HashingUtils::HashString("por");

TranscriptionLanguage GetTranscriptionLanguageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == eng_HASH) {
    return TranscriptionLanguage::eng;
  } else if (hashCode == eng_au_HASH) {
    return TranscriptionLanguage::eng_au;
  } else if (hashCode == eng_gb_HASH) {
    return TranscriptionLanguage::eng_gb;
  } else if (hashCode == eng_us_HASH) {
    return TranscriptionLanguage::eng_us;
  } else if (hashCode == fra_HASH) {
    return TranscriptionLanguage::fra;
  } else if (hashCode == ita_HASH) {
    return TranscriptionLanguage::ita;
  } else if (hashCode == deu_HASH) {
    return TranscriptionLanguage::deu;
  } else if (hashCode == spa_HASH) {
    return TranscriptionLanguage::spa;
  } else if (hashCode == por_HASH) {
    return TranscriptionLanguage::por;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TranscriptionLanguage>(hashCode);
  }

  return TranscriptionLanguage::NOT_SET;
}

Aws::String GetNameForTranscriptionLanguage(TranscriptionLanguage enumValue) {
  switch (enumValue) {
    case TranscriptionLanguage::NOT_SET:
      return {};
    case TranscriptionLanguage::eng:
      return "eng";
    case TranscriptionLanguage::eng_au:
      return "eng-au";
    case TranscriptionLanguage::eng_gb:
      return "eng-gb";
    case TranscriptionLanguage::eng_us:
      return "eng-us";
    case TranscriptionLanguage::fra:
      return "fra";
    case TranscriptionLanguage::ita:
      return "ita";
    case TranscriptionLanguage::deu:
      return "deu";
    case TranscriptionLanguage::spa:
      return "spa";
    case TranscriptionLanguage::por:
      return "por";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TranscriptionLanguageMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
