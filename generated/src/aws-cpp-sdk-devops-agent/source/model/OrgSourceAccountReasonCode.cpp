/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/OrgSourceAccountReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace OrgSourceAccountReasonCodeMapper {

static const int accountSuspended_HASH = HashingUtils::HashString("accountSuspended");
static const int accountNotInScope_HASH = HashingUtils::HashString("accountNotInScope");
static const int managementAccountNotSupported_HASH = HashingUtils::HashString("managementAccountNotSupported");
static const int stackInstanceInoperable_HASH = HashingUtils::HashString("stackInstanceInoperable");
static const int accessDenied_HASH = HashingUtils::HashString("accessDenied");
static const int deploymentFailed_HASH = HashingUtils::HashString("deploymentFailed");
static const int secondaryAccountLimitExceeded_HASH = HashingUtils::HashString("secondaryAccountLimitExceeded");

OrgSourceAccountReasonCode GetOrgSourceAccountReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == accountSuspended_HASH) {
    return OrgSourceAccountReasonCode::accountSuspended;
  } else if (hashCode == accountNotInScope_HASH) {
    return OrgSourceAccountReasonCode::accountNotInScope;
  } else if (hashCode == managementAccountNotSupported_HASH) {
    return OrgSourceAccountReasonCode::managementAccountNotSupported;
  } else if (hashCode == stackInstanceInoperable_HASH) {
    return OrgSourceAccountReasonCode::stackInstanceInoperable;
  } else if (hashCode == accessDenied_HASH) {
    return OrgSourceAccountReasonCode::accessDenied;
  } else if (hashCode == deploymentFailed_HASH) {
    return OrgSourceAccountReasonCode::deploymentFailed;
  } else if (hashCode == secondaryAccountLimitExceeded_HASH) {
    return OrgSourceAccountReasonCode::secondaryAccountLimitExceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrgSourceAccountReasonCode>(hashCode);
  }

  return OrgSourceAccountReasonCode::NOT_SET;
}

Aws::String GetNameForOrgSourceAccountReasonCode(OrgSourceAccountReasonCode enumValue) {
  switch (enumValue) {
    case OrgSourceAccountReasonCode::NOT_SET:
      return {};
    case OrgSourceAccountReasonCode::accountSuspended:
      return "accountSuspended";
    case OrgSourceAccountReasonCode::accountNotInScope:
      return "accountNotInScope";
    case OrgSourceAccountReasonCode::managementAccountNotSupported:
      return "managementAccountNotSupported";
    case OrgSourceAccountReasonCode::stackInstanceInoperable:
      return "stackInstanceInoperable";
    case OrgSourceAccountReasonCode::accessDenied:
      return "accessDenied";
    case OrgSourceAccountReasonCode::deploymentFailed:
      return "deploymentFailed";
    case OrgSourceAccountReasonCode::secondaryAccountLimitExceeded:
      return "secondaryAccountLimitExceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrgSourceAccountReasonCodeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
