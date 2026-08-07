/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamRpkiStrength.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamRpkiStrengthMapper {

static const int strict_HASH = HashingUtils::HashString("strict");
static const int permissive_HASH = HashingUtils::HashString("permissive");

IpamRpkiStrength GetIpamRpkiStrengthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == strict_HASH) {
    return IpamRpkiStrength::strict;
  } else if (hashCode == permissive_HASH) {
    return IpamRpkiStrength::permissive;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamRpkiStrength>(hashCode);
  }

  return IpamRpkiStrength::NOT_SET;
}

Aws::String GetNameForIpamRpkiStrength(IpamRpkiStrength enumValue) {
  switch (enumValue) {
    case IpamRpkiStrength::NOT_SET:
      return {};
    case IpamRpkiStrength::strict:
      return "strict";
    case IpamRpkiStrength::permissive:
      return "permissive";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamRpkiStrengthMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
