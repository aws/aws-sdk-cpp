/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ValidationConfidenceTier.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ValidationConfidenceTierMapper {

static const int SOURCE_READ_HASH = HashingUtils::HashString("SOURCE_READ");
static const int STATIC_PROVEN_HASH = HashingUtils::HashString("STATIC_PROVEN");
static const int BUILD_PROVEN_HASH = HashingUtils::HashString("BUILD_PROVEN");
static const int RUNTIME_PROVEN_HASH = HashingUtils::HashString("RUNTIME_PROVEN");

ValidationConfidenceTier GetValidationConfidenceTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SOURCE_READ_HASH) {
    return ValidationConfidenceTier::SOURCE_READ;
  } else if (hashCode == STATIC_PROVEN_HASH) {
    return ValidationConfidenceTier::STATIC_PROVEN;
  } else if (hashCode == BUILD_PROVEN_HASH) {
    return ValidationConfidenceTier::BUILD_PROVEN;
  } else if (hashCode == RUNTIME_PROVEN_HASH) {
    return ValidationConfidenceTier::RUNTIME_PROVEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationConfidenceTier>(hashCode);
  }

  return ValidationConfidenceTier::NOT_SET;
}

Aws::String GetNameForValidationConfidenceTier(ValidationConfidenceTier enumValue) {
  switch (enumValue) {
    case ValidationConfidenceTier::NOT_SET:
      return {};
    case ValidationConfidenceTier::SOURCE_READ:
      return "SOURCE_READ";
    case ValidationConfidenceTier::STATIC_PROVEN:
      return "STATIC_PROVEN";
    case ValidationConfidenceTier::BUILD_PROVEN:
      return "BUILD_PROVEN";
    case ValidationConfidenceTier::RUNTIME_PROVEN:
      return "RUNTIME_PROVEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationConfidenceTierMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
