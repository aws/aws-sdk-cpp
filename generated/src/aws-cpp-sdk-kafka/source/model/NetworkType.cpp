/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/NetworkType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace NetworkTypeMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int DUAL_HASH = HashingUtils::HashString("DUAL");

NetworkType GetNetworkTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return NetworkType::IPV4;
  } else if (hashCode == DUAL_HASH) {
    return NetworkType::DUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkType>(hashCode);
  }

  return NetworkType::NOT_SET;
}

Aws::String GetNameForNetworkType(NetworkType enumValue) {
  switch (enumValue) {
    case NetworkType::NOT_SET:
      return {};
    case NetworkType::IPV4:
      return "IPV4";
    case NetworkType::DUAL:
      return "DUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkTypeMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
