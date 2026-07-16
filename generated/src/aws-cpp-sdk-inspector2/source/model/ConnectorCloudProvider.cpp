/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ConnectorCloudProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ConnectorCloudProviderMapper {

static const int AZURE_HASH = HashingUtils::HashString("AZURE");

ConnectorCloudProvider GetConnectorCloudProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AZURE_HASH) {
    return ConnectorCloudProvider::AZURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorCloudProvider>(hashCode);
  }

  return ConnectorCloudProvider::NOT_SET;
}

Aws::String GetNameForConnectorCloudProvider(ConnectorCloudProvider enumValue) {
  switch (enumValue) {
    case ConnectorCloudProvider::NOT_SET:
      return {};
    case ConnectorCloudProvider::AZURE:
      return "AZURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorCloudProviderMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
