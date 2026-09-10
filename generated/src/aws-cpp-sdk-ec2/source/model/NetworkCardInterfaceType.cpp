/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NetworkCardInterfaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NetworkCardInterfaceTypeMapper {

static const int interface_HASH = HashingUtils::HashString("interface");
static const int efa_HASH = HashingUtils::HashString("efa");
static const int efa_only_HASH = HashingUtils::HashString("efa-only");
static const int secondary_HASH = HashingUtils::HashString("secondary");

NetworkCardInterfaceType GetNetworkCardInterfaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == interface_HASH) {
    return NetworkCardInterfaceType::interface;
  } else if (hashCode == efa_HASH) {
    return NetworkCardInterfaceType::efa;
  } else if (hashCode == efa_only_HASH) {
    return NetworkCardInterfaceType::efa_only;
  } else if (hashCode == secondary_HASH) {
    return NetworkCardInterfaceType::secondary;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkCardInterfaceType>(hashCode);
  }

  return NetworkCardInterfaceType::NOT_SET;
}

Aws::String GetNameForNetworkCardInterfaceType(NetworkCardInterfaceType enumValue) {
  switch (enumValue) {
    case NetworkCardInterfaceType::NOT_SET:
      return {};
    case NetworkCardInterfaceType::interface:
      return "interface";
    case NetworkCardInterfaceType::efa:
      return "efa";
    case NetworkCardInterfaceType::efa_only:
      return "efa-only";
    case NetworkCardInterfaceType::secondary:
      return "secondary";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkCardInterfaceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
