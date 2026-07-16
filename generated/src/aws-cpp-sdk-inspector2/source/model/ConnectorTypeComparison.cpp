/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ConnectorTypeComparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ConnectorTypeComparisonMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");

ConnectorTypeComparison GetConnectorTypeComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return ConnectorTypeComparison::EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorTypeComparison>(hashCode);
  }

  return ConnectorTypeComparison::NOT_SET;
}

Aws::String GetNameForConnectorTypeComparison(ConnectorTypeComparison enumValue) {
  switch (enumValue) {
    case ConnectorTypeComparison::NOT_SET:
      return {};
    case ConnectorTypeComparison::EQUALS:
      return "EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorTypeComparisonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
