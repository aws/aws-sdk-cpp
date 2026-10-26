/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kms/model/EncapsulationAlgorithmSpec.h>

using namespace Aws::Utils;

namespace Aws {
namespace KMS {
namespace Model {
namespace EncapsulationAlgorithmSpecMapper {

static const int ML_KEM_HASH = HashingUtils::HashString("ML_KEM");

EncapsulationAlgorithmSpec GetEncapsulationAlgorithmSpecForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ML_KEM_HASH) {
    return EncapsulationAlgorithmSpec::ML_KEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncapsulationAlgorithmSpec>(hashCode);
  }

  return EncapsulationAlgorithmSpec::NOT_SET;
}

Aws::String GetNameForEncapsulationAlgorithmSpec(EncapsulationAlgorithmSpec enumValue) {
  switch (enumValue) {
    case EncapsulationAlgorithmSpec::NOT_SET:
      return {};
    case EncapsulationAlgorithmSpec::ML_KEM:
      return "ML_KEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncapsulationAlgorithmSpecMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
