/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ConnectorEgressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace ConnectorEgressTypeMapper {

static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
static const int VPC_LATTICE_HASH = HashingUtils::HashString("VPC_LATTICE");

ConnectorEgressType GetConnectorEgressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_MANAGED_HASH) {
    return ConnectorEgressType::SERVICE_MANAGED;
  } else if (hashCode == VPC_LATTICE_HASH) {
    return ConnectorEgressType::VPC_LATTICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorEgressType>(hashCode);
  }

  return ConnectorEgressType::NOT_SET;
}

Aws::String GetNameForConnectorEgressType(ConnectorEgressType enumValue) {
  switch (enumValue) {
    case ConnectorEgressType::NOT_SET:
      return {};
    case ConnectorEgressType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    case ConnectorEgressType::VPC_LATTICE:
      return "VPC_LATTICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorEgressTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
