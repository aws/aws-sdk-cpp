/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPrefixListResolverVersionCreationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPrefixListResolverVersionCreationStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int success_HASH = HashingUtils::HashString("success");
static const int failure_HASH = HashingUtils::HashString("failure");

IpamPrefixListResolverVersionCreationStatus GetIpamPrefixListResolverVersionCreationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return IpamPrefixListResolverVersionCreationStatus::pending;
  } else if (hashCode == success_HASH) {
    return IpamPrefixListResolverVersionCreationStatus::success;
  } else if (hashCode == failure_HASH) {
    return IpamPrefixListResolverVersionCreationStatus::failure;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPrefixListResolverVersionCreationStatus>(hashCode);
  }

  return IpamPrefixListResolverVersionCreationStatus::NOT_SET;
}

Aws::String GetNameForIpamPrefixListResolverVersionCreationStatus(IpamPrefixListResolverVersionCreationStatus enumValue) {
  switch (enumValue) {
    case IpamPrefixListResolverVersionCreationStatus::NOT_SET:
      return {};
    case IpamPrefixListResolverVersionCreationStatus::pending:
      return "pending";
    case IpamPrefixListResolverVersionCreationStatus::success:
      return "success";
    case IpamPrefixListResolverVersionCreationStatus::failure:
      return "failure";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPrefixListResolverVersionCreationStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
