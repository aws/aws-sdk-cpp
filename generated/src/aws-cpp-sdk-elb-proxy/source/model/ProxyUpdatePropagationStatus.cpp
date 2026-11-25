/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyUpdatePropagationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyUpdatePropagationStatusMapper {

static const int in_progress_HASH = HashingUtils::HashString("in-progress");
static const int complete_HASH = HashingUtils::HashString("complete");
static const int skipped_HASH = HashingUtils::HashString("skipped");
static const int failed_HASH = HashingUtils::HashString("failed");
static const int cancelled_HASH = HashingUtils::HashString("cancelled");

ProxyUpdatePropagationStatus GetProxyUpdatePropagationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == in_progress_HASH) {
    return ProxyUpdatePropagationStatus::in_progress;
  } else if (hashCode == complete_HASH) {
    return ProxyUpdatePropagationStatus::complete;
  } else if (hashCode == skipped_HASH) {
    return ProxyUpdatePropagationStatus::skipped;
  } else if (hashCode == failed_HASH) {
    return ProxyUpdatePropagationStatus::failed;
  } else if (hashCode == cancelled_HASH) {
    return ProxyUpdatePropagationStatus::cancelled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyUpdatePropagationStatus>(hashCode);
  }

  return ProxyUpdatePropagationStatus::NOT_SET;
}

Aws::String GetNameForProxyUpdatePropagationStatus(ProxyUpdatePropagationStatus enumValue) {
  switch (enumValue) {
    case ProxyUpdatePropagationStatus::NOT_SET:
      return {};
    case ProxyUpdatePropagationStatus::in_progress:
      return "in-progress";
    case ProxyUpdatePropagationStatus::complete:
      return "complete";
    case ProxyUpdatePropagationStatus::skipped:
      return "skipped";
    case ProxyUpdatePropagationStatus::failed:
      return "failed";
    case ProxyUpdatePropagationStatus::cancelled:
      return "cancelled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyUpdatePropagationStatusMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
