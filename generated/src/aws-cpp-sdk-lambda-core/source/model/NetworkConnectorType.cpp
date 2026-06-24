/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkConnectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkConnectorTypeMapper {

static const int VPC_EGRESS_HASH = HashingUtils::HashString("VPC_EGRESS");

NetworkConnectorType GetNetworkConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_EGRESS_HASH) {
    return NetworkConnectorType::VPC_EGRESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkConnectorType>(hashCode);
  }

  return NetworkConnectorType::NOT_SET;
}

Aws::String GetNameForNetworkConnectorType(NetworkConnectorType enumValue) {
  switch (enumValue) {
    case NetworkConnectorType::NOT_SET:
      return {};
    case NetworkConnectorType::VPC_EGRESS:
      return "VPC_EGRESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkConnectorTypeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
