/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/Signal.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace SignalMapper {

static const int LOGS_HASH = HashingUtils::HashString("LOGS");
static const int METRICS_HASH = HashingUtils::HashString("METRICS");
static const int TRACES_HASH = HashingUtils::HashString("TRACES");
static const int CONFIG_HASH = HashingUtils::HashString("CONFIG");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

Signal GetSignalForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOGS_HASH) {
    return Signal::LOGS;
  } else if (hashCode == METRICS_HASH) {
    return Signal::METRICS;
  } else if (hashCode == TRACES_HASH) {
    return Signal::TRACES;
  } else if (hashCode == CONFIG_HASH) {
    return Signal::CONFIG;
  } else if (hashCode == UNKNOWN_HASH) {
    return Signal::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Signal>(hashCode);
  }

  return Signal::NOT_SET;
}

Aws::String GetNameForSignal(Signal enumValue) {
  switch (enumValue) {
    case Signal::NOT_SET:
      return {};
    case Signal::LOGS:
      return "LOGS";
    case Signal::METRICS:
      return "METRICS";
    case Signal::TRACES:
      return "TRACES";
    case Signal::CONFIG:
      return "CONFIG";
    case Signal::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
