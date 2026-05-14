/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/grafana/model/IPAddressType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {
namespace IPAddressTypeMapper {

static const int IPv4_HASH = HashingUtils::HashString("IPv4");
static const int DualStack_HASH = HashingUtils::HashString("DualStack");

IPAddressType GetIPAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPv4_HASH) {
    return IPAddressType::IPv4;
  } else if (hashCode == DualStack_HASH) {
    return IPAddressType::DualStack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IPAddressType>(hashCode);
  }

  return IPAddressType::NOT_SET;
}

Aws::String GetNameForIPAddressType(IPAddressType enumValue) {
  switch (enumValue) {
    case IPAddressType::NOT_SET:
      return {};
    case IPAddressType::IPv4:
      return "IPv4";
    case IPAddressType::DualStack:
      return "DualStack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IPAddressTypeMapper
}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
