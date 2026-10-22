/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueEvidenceAvailability.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssueEvidenceAvailabilityMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");

IssueEvidenceAvailability GetIssueEvidenceAvailabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return IssueEvidenceAvailability::NONE;
  } else if (hashCode == AVAILABLE_HASH) {
    return IssueEvidenceAvailability::AVAILABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssueEvidenceAvailability>(hashCode);
  }

  return IssueEvidenceAvailability::NOT_SET;
}

Aws::String GetNameForIssueEvidenceAvailability(IssueEvidenceAvailability enumValue) {
  switch (enumValue) {
    case IssueEvidenceAvailability::NOT_SET:
      return {};
    case IssueEvidenceAvailability::NONE:
      return "NONE";
    case IssueEvidenceAvailability::AVAILABLE:
      return "AVAILABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssueEvidenceAvailabilityMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
