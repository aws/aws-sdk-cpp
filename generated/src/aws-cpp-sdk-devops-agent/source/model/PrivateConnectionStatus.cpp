/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/PrivateConnectionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace PrivateConnectionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

PrivateConnectionStatus GetPrivateConnectionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return PrivateConnectionStatus::ACTIVE;
  } else if (hashCode == CREATE_IN_PROGRESS_HASH) {
    return PrivateConnectionStatus::CREATE_IN_PROGRESS;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return PrivateConnectionStatus::CREATE_FAILED;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return PrivateConnectionStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PrivateConnectionStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrivateConnectionStatus>(hashCode);
  }

  return PrivateConnectionStatus::NOT_SET;
}

Aws::String GetNameForPrivateConnectionStatus(PrivateConnectionStatus enumValue) {
  switch (enumValue) {
    case PrivateConnectionStatus::NOT_SET:
      return {};
    case PrivateConnectionStatus::ACTIVE:
      return "ACTIVE";
    case PrivateConnectionStatus::CREATE_IN_PROGRESS:
      return "CREATE_IN_PROGRESS";
    case PrivateConnectionStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case PrivateConnectionStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case PrivateConnectionStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrivateConnectionStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
