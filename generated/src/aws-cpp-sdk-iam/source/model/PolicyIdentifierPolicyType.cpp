/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/PolicyIdentifierPolicyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace PolicyIdentifierPolicyTypeMapper {

static const int inline__HASH = HashingUtils::HashString("inline");
static const int aws_managed_HASH = HashingUtils::HashString("aws-managed");
static const int user_managed_HASH = HashingUtils::HashString("user-managed");
static const int permission_boundary_HASH = HashingUtils::HashString("permission-boundary");
static const int scp_HASH = HashingUtils::HashString("scp");
static const int rcp_HASH = HashingUtils::HashString("rcp");

PolicyIdentifierPolicyType GetPolicyIdentifierPolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == inline__HASH) {
    return PolicyIdentifierPolicyType::inline_;
  } else if (hashCode == aws_managed_HASH) {
    return PolicyIdentifierPolicyType::aws_managed;
  } else if (hashCode == user_managed_HASH) {
    return PolicyIdentifierPolicyType::user_managed;
  } else if (hashCode == permission_boundary_HASH) {
    return PolicyIdentifierPolicyType::permission_boundary;
  } else if (hashCode == scp_HASH) {
    return PolicyIdentifierPolicyType::scp;
  } else if (hashCode == rcp_HASH) {
    return PolicyIdentifierPolicyType::rcp;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyIdentifierPolicyType>(hashCode);
  }

  return PolicyIdentifierPolicyType::NOT_SET;
}

Aws::String GetNameForPolicyIdentifierPolicyType(PolicyIdentifierPolicyType enumValue) {
  switch (enumValue) {
    case PolicyIdentifierPolicyType::NOT_SET:
      return {};
    case PolicyIdentifierPolicyType::inline_:
      return "inline";
    case PolicyIdentifierPolicyType::aws_managed:
      return "aws-managed";
    case PolicyIdentifierPolicyType::user_managed:
      return "user-managed";
    case PolicyIdentifierPolicyType::permission_boundary:
      return "permission-boundary";
    case PolicyIdentifierPolicyType::scp:
      return "scp";
    case PolicyIdentifierPolicyType::rcp:
      return "rcp";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyIdentifierPolicyTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
