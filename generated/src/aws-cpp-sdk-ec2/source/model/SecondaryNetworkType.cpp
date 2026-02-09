/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondaryNetworkType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondaryNetworkTypeMapper {

static const int rdma_HASH = HashingUtils::HashString("rdma");

SecondaryNetworkType GetSecondaryNetworkTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == rdma_HASH) {
    return SecondaryNetworkType::rdma;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondaryNetworkType>(hashCode);
  }

  return SecondaryNetworkType::NOT_SET;
}

Aws::String GetNameForSecondaryNetworkType(SecondaryNetworkType enumValue) {
  switch (enumValue) {
    case SecondaryNetworkType::NOT_SET:
      return {};
    case SecondaryNetworkType::rdma:
      return "rdma";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondaryNetworkTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
