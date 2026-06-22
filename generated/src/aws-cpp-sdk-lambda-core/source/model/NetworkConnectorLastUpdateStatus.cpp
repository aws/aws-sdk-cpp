/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace NetworkConnectorLastUpdateStatusMapper {

static const int Successful_HASH = HashingUtils::HashString("Successful");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int InProgress_HASH = HashingUtils::HashString("InProgress");

NetworkConnectorLastUpdateStatus GetNetworkConnectorLastUpdateStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Successful_HASH) {
    return NetworkConnectorLastUpdateStatus::Successful;
  } else if (hashCode == Failed_HASH) {
    return NetworkConnectorLastUpdateStatus::Failed;
  } else if (hashCode == InProgress_HASH) {
    return NetworkConnectorLastUpdateStatus::InProgress;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkConnectorLastUpdateStatus>(hashCode);
  }

  return NetworkConnectorLastUpdateStatus::NOT_SET;
}

Aws::String GetNameForNetworkConnectorLastUpdateStatus(NetworkConnectorLastUpdateStatus enumValue) {
  switch (enumValue) {
    case NetworkConnectorLastUpdateStatus::NOT_SET:
      return {};
    case NetworkConnectorLastUpdateStatus::Successful:
      return "Successful";
    case NetworkConnectorLastUpdateStatus::Failed:
      return "Failed";
    case NetworkConnectorLastUpdateStatus::InProgress:
      return "InProgress";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkConnectorLastUpdateStatusMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
