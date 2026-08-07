/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamRpkiStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamRpkiStatusMapper {

static const int valid_HASH = HashingUtils::HashString("valid");
static const int invalid_HASH = HashingUtils::HashString("invalid");
static const int unknown_HASH = HashingUtils::HashString("unknown");

IpamRpkiStatus GetIpamRpkiStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == valid_HASH) {
    return IpamRpkiStatus::valid;
  } else if (hashCode == invalid_HASH) {
    return IpamRpkiStatus::invalid;
  } else if (hashCode == unknown_HASH) {
    return IpamRpkiStatus::unknown;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamRpkiStatus>(hashCode);
  }

  return IpamRpkiStatus::NOT_SET;
}

Aws::String GetNameForIpamRpkiStatus(IpamRpkiStatus enumValue) {
  switch (enumValue) {
    case IpamRpkiStatus::NOT_SET:
      return {};
    case IpamRpkiStatus::valid:
      return "valid";
    case IpamRpkiStatus::invalid:
      return "invalid";
    case IpamRpkiStatus::unknown:
      return "unknown";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamRpkiStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
