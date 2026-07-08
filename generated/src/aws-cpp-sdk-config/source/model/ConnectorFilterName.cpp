/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConnectorFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConfigService {
namespace Model {
namespace ConnectorFilterNameMapper {

static const int provider_HASH = HashingUtils::HashString("provider");

ConnectorFilterName GetConnectorFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == provider_HASH) {
    return ConnectorFilterName::provider;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorFilterName>(hashCode);
  }

  return ConnectorFilterName::NOT_SET;
}

Aws::String GetNameForConnectorFilterName(ConnectorFilterName enumValue) {
  switch (enumValue) {
    case ConnectorFilterName::NOT_SET:
      return {};
    case ConnectorFilterName::provider:
      return "provider";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorFilterNameMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
