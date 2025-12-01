/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormLanguageCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormLanguageCodeMapper {

static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int es_ES_HASH = HashingUtils::HashString("es-ES");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");

EvaluationFormLanguageCode GetEvaluationFormLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == de_DE_HASH) {
    return EvaluationFormLanguageCode::de_DE;
  } else if (hashCode == en_US_HASH) {
    return EvaluationFormLanguageCode::en_US;
  } else if (hashCode == es_ES_HASH) {
    return EvaluationFormLanguageCode::es_ES;
  } else if (hashCode == fr_FR_HASH) {
    return EvaluationFormLanguageCode::fr_FR;
  } else if (hashCode == it_IT_HASH) {
    return EvaluationFormLanguageCode::it_IT;
  } else if (hashCode == pt_BR_HASH) {
    return EvaluationFormLanguageCode::pt_BR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormLanguageCode>(hashCode);
  }

  return EvaluationFormLanguageCode::NOT_SET;
}

Aws::String GetNameForEvaluationFormLanguageCode(EvaluationFormLanguageCode enumValue) {
  switch (enumValue) {
    case EvaluationFormLanguageCode::NOT_SET:
      return {};
    case EvaluationFormLanguageCode::de_DE:
      return "de-DE";
    case EvaluationFormLanguageCode::en_US:
      return "en-US";
    case EvaluationFormLanguageCode::es_ES:
      return "es-ES";
    case EvaluationFormLanguageCode::fr_FR:
      return "fr-FR";
    case EvaluationFormLanguageCode::it_IT:
      return "it-IT";
    case EvaluationFormLanguageCode::pt_BR:
      return "pt-BR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormLanguageCodeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
