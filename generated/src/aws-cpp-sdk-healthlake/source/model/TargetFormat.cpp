/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/healthlake/model/TargetFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {
namespace TargetFormatMapper {

static const int FHIR_R4_HASH = HashingUtils::HashString("FHIR_R4");

TargetFormat GetTargetFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FHIR_R4_HASH) {
    return TargetFormat::FHIR_R4;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetFormat>(hashCode);
  }

  return TargetFormat::NOT_SET;
}

Aws::String GetNameForTargetFormat(TargetFormat enumValue) {
  switch (enumValue) {
    case TargetFormat::NOT_SET:
      return {};
    case TargetFormat::FHIR_R4:
      return "FHIR_R4";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetFormatMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
