/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace MetadataGenerationRunTypeMapper {

static const int BUSINESS_DESCRIPTIONS_HASH = HashingUtils::HashString("BUSINESS_DESCRIPTIONS");
static const int BUSINESS_NAMES_HASH = HashingUtils::HashString("BUSINESS_NAMES");
static const int BUSINESS_GLOSSARY_ASSOCIATIONS_HASH = HashingUtils::HashString("BUSINESS_GLOSSARY_ASSOCIATIONS");

MetadataGenerationRunType GetMetadataGenerationRunTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BUSINESS_DESCRIPTIONS_HASH) {
    return MetadataGenerationRunType::BUSINESS_DESCRIPTIONS;
  } else if (hashCode == BUSINESS_NAMES_HASH) {
    return MetadataGenerationRunType::BUSINESS_NAMES;
  } else if (hashCode == BUSINESS_GLOSSARY_ASSOCIATIONS_HASH) {
    return MetadataGenerationRunType::BUSINESS_GLOSSARY_ASSOCIATIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetadataGenerationRunType>(hashCode);
  }

  return MetadataGenerationRunType::NOT_SET;
}

Aws::String GetNameForMetadataGenerationRunType(MetadataGenerationRunType enumValue) {
  switch (enumValue) {
    case MetadataGenerationRunType::NOT_SET:
      return {};
    case MetadataGenerationRunType::BUSINESS_DESCRIPTIONS:
      return "BUSINESS_DESCRIPTIONS";
    case MetadataGenerationRunType::BUSINESS_NAMES:
      return "BUSINESS_NAMES";
    case MetadataGenerationRunType::BUSINESS_GLOSSARY_ASSOCIATIONS:
      return "BUSINESS_GLOSSARY_ASSOCIATIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetadataGenerationRunTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
