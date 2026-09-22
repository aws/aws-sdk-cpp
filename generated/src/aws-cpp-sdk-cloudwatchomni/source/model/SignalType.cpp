/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/SignalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace SignalTypeMapper {

static const int LOGS_HASH = HashingUtils::HashString("LOGS");
static const int TRACES_HASH = HashingUtils::HashString("TRACES");

SignalType GetSignalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOGS_HASH) {
    return SignalType::LOGS;
  } else if (hashCode == TRACES_HASH) {
    return SignalType::TRACES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignalType>(hashCode);
  }

  return SignalType::NOT_SET;
}

Aws::String GetNameForSignalType(SignalType enumValue) {
  switch (enumValue) {
    case SignalType::NOT_SET:
      return {};
    case SignalType::LOGS:
      return "LOGS";
    case SignalType::TRACES:
      return "TRACES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignalTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
