/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ParameterRequirementSummary.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ControlCatalog {
namespace Model {
namespace ParameterRequirementSummaryMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ParameterRequirementSummary GetParameterRequirementSummaryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return ParameterRequirementSummary::REQUIRED;
  } else if (hashCode == OPTIONAL_HASH) {
    return ParameterRequirementSummary::OPTIONAL;
  } else if (hashCode == NONE_HASH) {
    return ParameterRequirementSummary::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ParameterRequirementSummary>(hashCode);
  }

  return ParameterRequirementSummary::NOT_SET;
}

Aws::String GetNameForParameterRequirementSummary(ParameterRequirementSummary enumValue) {
  switch (enumValue) {
    case ParameterRequirementSummary::NOT_SET:
      return {};
    case ParameterRequirementSummary::REQUIRED:
      return "REQUIRED";
    case ParameterRequirementSummary::OPTIONAL:
      return "OPTIONAL";
    case ParameterRequirementSummary::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ParameterRequirementSummaryMapper
}  // namespace Model
}  // namespace ControlCatalog
}  // namespace Aws
