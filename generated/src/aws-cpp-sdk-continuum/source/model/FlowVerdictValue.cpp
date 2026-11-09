/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/FlowVerdictValue.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace FlowVerdictValueMapper {

static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
static const int DENIED_HASH = HashingUtils::HashString("DENIED");
static const int INCONCLUSIVE_HASH = HashingUtils::HashString("INCONCLUSIVE");

FlowVerdictValue GetFlowVerdictValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONFIRMED_HASH) {
    return FlowVerdictValue::CONFIRMED;
  } else if (hashCode == DENIED_HASH) {
    return FlowVerdictValue::DENIED;
  } else if (hashCode == INCONCLUSIVE_HASH) {
    return FlowVerdictValue::INCONCLUSIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlowVerdictValue>(hashCode);
  }

  return FlowVerdictValue::NOT_SET;
}

Aws::String GetNameForFlowVerdictValue(FlowVerdictValue enumValue) {
  switch (enumValue) {
    case FlowVerdictValue::NOT_SET:
      return {};
    case FlowVerdictValue::CONFIRMED:
      return "CONFIRMED";
    case FlowVerdictValue::DENIED:
      return "DENIED";
    case FlowVerdictValue::INCONCLUSIVE:
      return "INCONCLUSIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlowVerdictValueMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
