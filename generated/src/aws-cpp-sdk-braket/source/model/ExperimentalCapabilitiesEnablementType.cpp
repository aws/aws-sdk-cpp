/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ExperimentalCapabilitiesEnablementType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {
namespace ExperimentalCapabilitiesEnablementTypeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ExperimentalCapabilitiesEnablementType GetExperimentalCapabilitiesEnablementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return ExperimentalCapabilitiesEnablementType::ALL;
  } else if (hashCode == NONE_HASH) {
    return ExperimentalCapabilitiesEnablementType::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExperimentalCapabilitiesEnablementType>(hashCode);
  }

  return ExperimentalCapabilitiesEnablementType::NOT_SET;
}

Aws::String GetNameForExperimentalCapabilitiesEnablementType(ExperimentalCapabilitiesEnablementType enumValue) {
  switch (enumValue) {
    case ExperimentalCapabilitiesEnablementType::NOT_SET:
      return {};
    case ExperimentalCapabilitiesEnablementType::ALL:
      return "ALL";
    case ExperimentalCapabilitiesEnablementType::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExperimentalCapabilitiesEnablementTypeMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
