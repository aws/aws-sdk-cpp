/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlParameterRequirement.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {
namespace ControlParameterRequirementMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");

ControlParameterRequirement GetControlParameterRequirementForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return ControlParameterRequirement::REQUIRED;
  } else if (hashCode == OPTIONAL_HASH) {
    return ControlParameterRequirement::OPTIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ControlParameterRequirement>(hashCode);
  }

  return ControlParameterRequirement::NOT_SET;
}

Aws::String GetNameForControlParameterRequirement(ControlParameterRequirement enumValue) {
  switch (enumValue) {
    case ControlParameterRequirement::NOT_SET:
      return {};
    case ControlParameterRequirement::REQUIRED:
      return "REQUIRED";
    case ControlParameterRequirement::OPTIONAL:
      return "OPTIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ControlParameterRequirementMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
