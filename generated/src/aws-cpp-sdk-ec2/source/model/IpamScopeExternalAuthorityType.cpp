/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamScopeExternalAuthorityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamScopeExternalAuthorityTypeMapper {

static const int infoblox_HASH = HashingUtils::HashString("infoblox");

IpamScopeExternalAuthorityType GetIpamScopeExternalAuthorityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == infoblox_HASH) {
    return IpamScopeExternalAuthorityType::infoblox;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamScopeExternalAuthorityType>(hashCode);
  }

  return IpamScopeExternalAuthorityType::NOT_SET;
}

Aws::String GetNameForIpamScopeExternalAuthorityType(IpamScopeExternalAuthorityType enumValue) {
  switch (enumValue) {
    case IpamScopeExternalAuthorityType::NOT_SET:
      return {};
    case IpamScopeExternalAuthorityType::infoblox:
      return "infoblox";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamScopeExternalAuthorityTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
