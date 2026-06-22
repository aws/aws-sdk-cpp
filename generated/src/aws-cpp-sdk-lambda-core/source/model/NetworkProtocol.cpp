/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkProtocolMapper {

static const int IPv4_HASH = HashingUtils::HashString("IPv4");
static const int DualStack_HASH = HashingUtils::HashString("DualStack");

NetworkProtocol GetNetworkProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPv4_HASH) {
    return NetworkProtocol::IPv4;
  } else if (hashCode == DualStack_HASH) {
    return NetworkProtocol::DualStack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkProtocol>(hashCode);
  }

  return NetworkProtocol::NOT_SET;
}

Aws::String GetNameForNetworkProtocol(NetworkProtocol enumValue) {
  switch (enumValue) {
    case NetworkProtocol::NOT_SET:
      return {};
    case NetworkProtocol::IPv4:
      return "IPv4";
    case NetworkProtocol::DualStack:
      return "DualStack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkProtocolMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
