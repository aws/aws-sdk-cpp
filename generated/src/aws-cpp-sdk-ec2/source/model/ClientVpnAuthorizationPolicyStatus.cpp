/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ClientVpnAuthorizationPolicyStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ClientVpnAuthorizationPolicyStatusMapper {

static const int creating_HASH = HashingUtils::HashString("creating");
static const int updating_HASH = HashingUtils::HashString("updating");
static const int active_HASH = HashingUtils::HashString("active");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int deleting_HASH = HashingUtils::HashString("deleting");

ClientVpnAuthorizationPolicyStatus GetClientVpnAuthorizationPolicyStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == creating_HASH) {
    return ClientVpnAuthorizationPolicyStatus::creating;
  } else if (hashCode == updating_HASH) {
    return ClientVpnAuthorizationPolicyStatus::updating;
  } else if (hashCode == active_HASH) {
    return ClientVpnAuthorizationPolicyStatus::active;
  } else if (hashCode == failed_HASH) {
    return ClientVpnAuthorizationPolicyStatus::failed;
  } else if (hashCode == deleting_HASH) {
    return ClientVpnAuthorizationPolicyStatus::deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientVpnAuthorizationPolicyStatus>(hashCode);
  }

  return ClientVpnAuthorizationPolicyStatus::NOT_SET;
}

Aws::String GetNameForClientVpnAuthorizationPolicyStatus(ClientVpnAuthorizationPolicyStatus enumValue) {
  switch (enumValue) {
    case ClientVpnAuthorizationPolicyStatus::NOT_SET:
      return {};
    case ClientVpnAuthorizationPolicyStatus::creating:
      return "creating";
    case ClientVpnAuthorizationPolicyStatus::updating:
      return "updating";
    case ClientVpnAuthorizationPolicyStatus::active:
      return "active";
    case ClientVpnAuthorizationPolicyStatus::failed:
      return "failed";
    case ClientVpnAuthorizationPolicyStatus::deleting:
      return "deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientVpnAuthorizationPolicyStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
