/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/VpnConcentratorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace VpnConcentratorTypeMapper {

static const int ipsec_1_HASH = HashingUtils::HashString("ipsec.1");

VpnConcentratorType GetVpnConcentratorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipsec_1_HASH) {
    return VpnConcentratorType::ipsec_1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpnConcentratorType>(hashCode);
  }

  return VpnConcentratorType::NOT_SET;
}

Aws::String GetNameForVpnConcentratorType(VpnConcentratorType enumValue) {
  switch (enumValue) {
    case VpnConcentratorType::NOT_SET:
      return {};
    case VpnConcentratorType::ipsec_1:
      return "ipsec.1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpnConcentratorTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
