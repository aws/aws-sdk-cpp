/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssuePhase.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssuePhaseMapper {

static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
static const int PRIORITIZATION_HASH = HashingUtils::HashString("PRIORITIZATION");
static const int REMEDIATION_HASH = HashingUtils::HashString("REMEDIATION");

IssuePhase GetIssuePhaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VALIDATION_HASH) {
    return IssuePhase::VALIDATION;
  } else if (hashCode == PRIORITIZATION_HASH) {
    return IssuePhase::PRIORITIZATION;
  } else if (hashCode == REMEDIATION_HASH) {
    return IssuePhase::REMEDIATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssuePhase>(hashCode);
  }

  return IssuePhase::NOT_SET;
}

Aws::String GetNameForIssuePhase(IssuePhase enumValue) {
  switch (enumValue) {
    case IssuePhase::NOT_SET:
      return {};
    case IssuePhase::VALIDATION:
      return "VALIDATION";
    case IssuePhase::PRIORITIZATION:
      return "PRIORITIZATION";
    case IssuePhase::REMEDIATION:
      return "REMEDIATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssuePhaseMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
