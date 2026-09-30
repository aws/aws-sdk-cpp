/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/TransformerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace TransformerTypeMapper {

static const int RAW_HASH = HashingUtils::HashString("RAW");
static const int WITH_METADATA_HASH = HashingUtils::HashString("WITH_METADATA");
static const int JSONATA_HASH = HashingUtils::HashString("JSONATA");

TransformerType GetTransformerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RAW_HASH) {
    return TransformerType::RAW;
  } else if (hashCode == WITH_METADATA_HASH) {
    return TransformerType::WITH_METADATA;
  } else if (hashCode == JSONATA_HASH) {
    return TransformerType::JSONATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransformerType>(hashCode);
  }

  return TransformerType::NOT_SET;
}

Aws::String GetNameForTransformerType(TransformerType enumValue) {
  switch (enumValue) {
    case TransformerType::NOT_SET:
      return {};
    case TransformerType::RAW:
      return "RAW";
    case TransformerType::WITH_METADATA:
      return "WITH_METADATA";
    case TransformerType::JSONATA:
      return "JSONATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransformerTypeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
