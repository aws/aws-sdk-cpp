/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/IssueStatusReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace IssueStatusReasonMapper {

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int REMEDIATION_FAILED_HASH = HashingUtils::HashString("REMEDIATION_FAILED");

IssueStatusReason GetIssueStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_ERROR_HASH) {
    return IssueStatusReason::INTERNAL_ERROR;
  } else if (hashCode == REMEDIATION_FAILED_HASH) {
    return IssueStatusReason::REMEDIATION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssueStatusReason>(hashCode);
  }

  return IssueStatusReason::NOT_SET;
}

Aws::String GetNameForIssueStatusReason(IssueStatusReason enumValue) {
  switch (enumValue) {
    case IssueStatusReason::NOT_SET:
      return {};
    case IssueStatusReason::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case IssueStatusReason::REMEDIATION_FAILED:
      return "REMEDIATION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssueStatusReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
