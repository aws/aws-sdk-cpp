/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/Chipset.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace ChipsetMapper {

static const int GRAVITON_HASH = HashingUtils::HashString("GRAVITON");
static const int INTEL_HASH = HashingUtils::HashString("INTEL");

Chipset GetChipsetForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GRAVITON_HASH) {
    return Chipset::GRAVITON;
  } else if (hashCode == INTEL_HASH) {
    return Chipset::INTEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Chipset>(hashCode);
  }

  return Chipset::NOT_SET;
}

Aws::String GetNameForChipset(Chipset enumValue) {
  switch (enumValue) {
    case Chipset::NOT_SET:
      return {};
    case Chipset::GRAVITON:
      return "GRAVITON";
    case Chipset::INTEL:
      return "INTEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChipsetMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
