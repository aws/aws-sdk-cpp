/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/OrganizationGrantPrincipalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace OrganizationGrantPrincipalTypeMapper {

static const int IDC_USER_HASH = HashingUtils::HashString("IDC_USER");
static const int IDC_GROUP_HASH = HashingUtils::HashString("IDC_GROUP");
static const int IAM_USER_HASH = HashingUtils::HashString("IAM_USER");
static const int IAM_ROLE_HASH = HashingUtils::HashString("IAM_ROLE");
static const int IAM_ROOT_HASH = HashingUtils::HashString("IAM_ROOT");

OrganizationGrantPrincipalType GetOrganizationGrantPrincipalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDC_USER_HASH) {
    return OrganizationGrantPrincipalType::IDC_USER;
  } else if (hashCode == IDC_GROUP_HASH) {
    return OrganizationGrantPrincipalType::IDC_GROUP;
  } else if (hashCode == IAM_USER_HASH) {
    return OrganizationGrantPrincipalType::IAM_USER;
  } else if (hashCode == IAM_ROLE_HASH) {
    return OrganizationGrantPrincipalType::IAM_ROLE;
  } else if (hashCode == IAM_ROOT_HASH) {
    return OrganizationGrantPrincipalType::IAM_ROOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationGrantPrincipalType>(hashCode);
  }

  return OrganizationGrantPrincipalType::NOT_SET;
}

Aws::String GetNameForOrganizationGrantPrincipalType(OrganizationGrantPrincipalType enumValue) {
  switch (enumValue) {
    case OrganizationGrantPrincipalType::NOT_SET:
      return {};
    case OrganizationGrantPrincipalType::IDC_USER:
      return "IDC_USER";
    case OrganizationGrantPrincipalType::IDC_GROUP:
      return "IDC_GROUP";
    case OrganizationGrantPrincipalType::IAM_USER:
      return "IAM_USER";
    case OrganizationGrantPrincipalType::IAM_ROLE:
      return "IAM_ROLE";
    case OrganizationGrantPrincipalType::IAM_ROOT:
      return "IAM_ROOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationGrantPrincipalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
