/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/ConnectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace ConnectorTypeMapper {

static const int OPERATIONS_MANAGER_HASH = HashingUtils::HashString("OPERATIONS_MANAGER");
static const int SDDC_MANAGER_HASH = HashingUtils::HashString("SDDC_MANAGER");
static const int VCENTER_HASH = HashingUtils::HashString("VCENTER");

ConnectorType GetConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPERATIONS_MANAGER_HASH) {
    return ConnectorType::OPERATIONS_MANAGER;
  } else if (hashCode == SDDC_MANAGER_HASH) {
    return ConnectorType::SDDC_MANAGER;
  } else if (hashCode == VCENTER_HASH) {
    return ConnectorType::VCENTER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorType>(hashCode);
  }

  return ConnectorType::NOT_SET;
}

Aws::String GetNameForConnectorType(ConnectorType enumValue) {
  switch (enumValue) {
    case ConnectorType::NOT_SET:
      return {};
    case ConnectorType::OPERATIONS_MANAGER:
      return "OPERATIONS_MANAGER";
    case ConnectorType::SDDC_MANAGER:
      return "SDDC_MANAGER";
    case ConnectorType::VCENTER:
      return "VCENTER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
