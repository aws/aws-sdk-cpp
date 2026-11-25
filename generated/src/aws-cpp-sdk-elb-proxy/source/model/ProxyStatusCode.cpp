/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyStatusCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyStatusCodeMapper {

static const int action_required_HASH = HashingUtils::HashString("action-required");
static const int active_HASH = HashingUtils::HashString("active");
static const int create_failed_HASH = HashingUtils::HashString("create-failed");
static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
static const int deleted_HASH = HashingUtils::HashString("deleted");
static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
static const int update_in_progress_HASH = HashingUtils::HashString("update-in-progress");
static const int cancel_update_in_progress_HASH = HashingUtils::HashString("cancel-update-in-progress");

ProxyStatusCode GetProxyStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == action_required_HASH) {
    return ProxyStatusCode::action_required;
  } else if (hashCode == active_HASH) {
    return ProxyStatusCode::active;
  } else if (hashCode == create_failed_HASH) {
    return ProxyStatusCode::create_failed;
  } else if (hashCode == create_in_progress_HASH) {
    return ProxyStatusCode::create_in_progress;
  } else if (hashCode == deleted_HASH) {
    return ProxyStatusCode::deleted;
  } else if (hashCode == delete_in_progress_HASH) {
    return ProxyStatusCode::delete_in_progress;
  } else if (hashCode == update_in_progress_HASH) {
    return ProxyStatusCode::update_in_progress;
  } else if (hashCode == cancel_update_in_progress_HASH) {
    return ProxyStatusCode::cancel_update_in_progress;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyStatusCode>(hashCode);
  }

  return ProxyStatusCode::NOT_SET;
}

Aws::String GetNameForProxyStatusCode(ProxyStatusCode enumValue) {
  switch (enumValue) {
    case ProxyStatusCode::NOT_SET:
      return {};
    case ProxyStatusCode::action_required:
      return "action-required";
    case ProxyStatusCode::active:
      return "active";
    case ProxyStatusCode::create_failed:
      return "create-failed";
    case ProxyStatusCode::create_in_progress:
      return "create-in-progress";
    case ProxyStatusCode::deleted:
      return "deleted";
    case ProxyStatusCode::delete_in_progress:
      return "delete-in-progress";
    case ProxyStatusCode::update_in_progress:
      return "update-in-progress";
    case ProxyStatusCode::cancel_update_in_progress:
      return "cancel-update-in-progress";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyStatusCodeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
