/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/geo-places/model/TranslationNameType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {
namespace TranslationNameTypeMapper {

static const int Abbreviation_HASH = HashingUtils::HashString("Abbreviation");
static const int AreaCode_HASH = HashingUtils::HashString("AreaCode");
static const int BaseName_HASH = HashingUtils::HashString("BaseName");
static const int Exonym_HASH = HashingUtils::HashString("Exonym");
static const int Shortened_HASH = HashingUtils::HashString("Shortened");
static const int Synonym_HASH = HashingUtils::HashString("Synonym");

TranslationNameType GetTranslationNameTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Abbreviation_HASH) {
    return TranslationNameType::Abbreviation;
  } else if (hashCode == AreaCode_HASH) {
    return TranslationNameType::AreaCode;
  } else if (hashCode == BaseName_HASH) {
    return TranslationNameType::BaseName;
  } else if (hashCode == Exonym_HASH) {
    return TranslationNameType::Exonym;
  } else if (hashCode == Shortened_HASH) {
    return TranslationNameType::Shortened;
  } else if (hashCode == Synonym_HASH) {
    return TranslationNameType::Synonym;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TranslationNameType>(hashCode);
  }

  return TranslationNameType::NOT_SET;
}

Aws::String GetNameForTranslationNameType(TranslationNameType enumValue) {
  switch (enumValue) {
    case TranslationNameType::NOT_SET:
      return {};
    case TranslationNameType::Abbreviation:
      return "Abbreviation";
    case TranslationNameType::AreaCode:
      return "AreaCode";
    case TranslationNameType::BaseName:
      return "BaseName";
    case TranslationNameType::Exonym:
      return "Exonym";
    case TranslationNameType::Shortened:
      return "Shortened";
    case TranslationNameType::Synonym:
      return "Synonym";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TranslationNameTypeMapper
}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
