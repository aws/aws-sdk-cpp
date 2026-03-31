/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/UserType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace UserTypeMapper {

static const int IAM_HASH = HashingUtils::HashString("IAM");
static const int IDC_HASH = HashingUtils::HashString("IDC");
static const int IDP_HASH = HashingUtils::HashString("IDP");

UserType GetUserTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IAM_HASH) {
    return UserType::IAM;
  } else if (hashCode == IDC_HASH) {
    return UserType::IDC;
  } else if (hashCode == IDP_HASH) {
    return UserType::IDP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UserType>(hashCode);
  }

  return UserType::NOT_SET;
}

Aws::String GetNameForUserType(UserType enumValue) {
  switch (enumValue) {
    case UserType::NOT_SET:
      return {};
    case UserType::IAM:
      return "IAM";
    case UserType::IDC:
      return "IDC";
    case UserType::IDP:
      return "IDP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UserTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
