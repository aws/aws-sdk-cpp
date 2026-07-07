/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ConnectorType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ConnectorTypeMapper {

static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
static const int SERVICE_LINKED_HASH = HashingUtils::HashString("SERVICE_LINKED");

ConnectorType GetConnectorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_MANAGED_HASH) {
    return ConnectorType::CUSTOMER_MANAGED;
  } else if (hashCode == SERVICE_LINKED_HASH) {
    return ConnectorType::SERVICE_LINKED;
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
    case ConnectorType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    case ConnectorType::SERVICE_LINKED:
      return "SERVICE_LINKED";
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
}  // namespace Inspector2
}  // namespace Aws
