/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpScopeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpScopeEnumMapper {

static const int private__HASH = HashingUtils::HashString("private");

IpScopeEnum GetIpScopeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == private__HASH) {
    return IpScopeEnum::private_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpScopeEnum>(hashCode);
  }

  return IpScopeEnum::NOT_SET;
}

Aws::String GetNameForIpScopeEnum(IpScopeEnum enumValue) {
  switch (enumValue) {
    case IpScopeEnum::NOT_SET:
      return {};
    case IpScopeEnum::private_:
      return "private";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpScopeEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
