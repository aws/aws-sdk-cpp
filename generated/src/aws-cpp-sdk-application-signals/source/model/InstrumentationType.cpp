/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace InstrumentationTypeMapper {

static const int BREAKPOINT_HASH = HashingUtils::HashString("BREAKPOINT");
static const int PROBE_HASH = HashingUtils::HashString("PROBE");

InstrumentationType GetInstrumentationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BREAKPOINT_HASH) {
    return InstrumentationType::BREAKPOINT;
  } else if (hashCode == PROBE_HASH) {
    return InstrumentationType::PROBE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstrumentationType>(hashCode);
  }

  return InstrumentationType::NOT_SET;
}

Aws::String GetNameForInstrumentationType(InstrumentationType enumValue) {
  switch (enumValue) {
    case InstrumentationType::NOT_SET:
      return {};
    case InstrumentationType::BREAKPOINT:
      return "BREAKPOINT";
    case InstrumentationType::PROBE:
      return "PROBE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstrumentationTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
