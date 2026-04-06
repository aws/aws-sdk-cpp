/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewJobFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
namespace PolicyPreviewJobFilterNameMapper {

static const int jobStatus_HASH = HashingUtils::HashString("jobStatus");
static const int targetId_HASH = HashingUtils::HashString("targetId");

PolicyPreviewJobFilterName GetPolicyPreviewJobFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == jobStatus_HASH) {
    return PolicyPreviewJobFilterName::jobStatus;
  } else if (hashCode == targetId_HASH) {
    return PolicyPreviewJobFilterName::targetId;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyPreviewJobFilterName>(hashCode);
  }

  return PolicyPreviewJobFilterName::NOT_SET;
}

Aws::String GetNameForPolicyPreviewJobFilterName(PolicyPreviewJobFilterName enumValue) {
  switch (enumValue) {
    case PolicyPreviewJobFilterName::NOT_SET:
      return {};
    case PolicyPreviewJobFilterName::jobStatus:
      return "jobStatus";
    case PolicyPreviewJobFilterName::targetId:
      return "targetId";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyPreviewJobFilterNameMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
