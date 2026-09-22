/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AccessGrantPrincipalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AccessGrantPrincipalTypeMapper {

static const int IDC_USER_HASH = HashingUtils::HashString("IDC_USER");
static const int IDC_GROUP_HASH = HashingUtils::HashString("IDC_GROUP");
static const int IAM_USER_HASH = HashingUtils::HashString("IAM_USER");
static const int IAM_ROLE_HASH = HashingUtils::HashString("IAM_ROLE");
static const int IAM_ROOT_HASH = HashingUtils::HashString("IAM_ROOT");
static const int ACCESS_PROFILE_HASH = HashingUtils::HashString("ACCESS_PROFILE");
static const int ALERT_HASH = HashingUtils::HashString("ALERT");
static const int AGENT_HASH = HashingUtils::HashString("AGENT");

AccessGrantPrincipalType GetAccessGrantPrincipalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDC_USER_HASH) {
    return AccessGrantPrincipalType::IDC_USER;
  } else if (hashCode == IDC_GROUP_HASH) {
    return AccessGrantPrincipalType::IDC_GROUP;
  } else if (hashCode == IAM_USER_HASH) {
    return AccessGrantPrincipalType::IAM_USER;
  } else if (hashCode == IAM_ROLE_HASH) {
    return AccessGrantPrincipalType::IAM_ROLE;
  } else if (hashCode == IAM_ROOT_HASH) {
    return AccessGrantPrincipalType::IAM_ROOT;
  } else if (hashCode == ACCESS_PROFILE_HASH) {
    return AccessGrantPrincipalType::ACCESS_PROFILE;
  } else if (hashCode == ALERT_HASH) {
    return AccessGrantPrincipalType::ALERT;
  } else if (hashCode == AGENT_HASH) {
    return AccessGrantPrincipalType::AGENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessGrantPrincipalType>(hashCode);
  }

  return AccessGrantPrincipalType::NOT_SET;
}

Aws::String GetNameForAccessGrantPrincipalType(AccessGrantPrincipalType enumValue) {
  switch (enumValue) {
    case AccessGrantPrincipalType::NOT_SET:
      return {};
    case AccessGrantPrincipalType::IDC_USER:
      return "IDC_USER";
    case AccessGrantPrincipalType::IDC_GROUP:
      return "IDC_GROUP";
    case AccessGrantPrincipalType::IAM_USER:
      return "IAM_USER";
    case AccessGrantPrincipalType::IAM_ROLE:
      return "IAM_ROLE";
    case AccessGrantPrincipalType::IAM_ROOT:
      return "IAM_ROOT";
    case AccessGrantPrincipalType::ACCESS_PROFILE:
      return "ACCESS_PROFILE";
    case AccessGrantPrincipalType::ALERT:
      return "ALERT";
    case AccessGrantPrincipalType::AGENT:
      return "AGENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessGrantPrincipalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
