/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactMetricName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace ContactMetricNameMapper {

static const int ESTIMATED_WAIT_TIME_HASH = HashingUtils::HashString("ESTIMATED_WAIT_TIME");
static const int POSITION_IN_QUEUE_HASH = HashingUtils::HashString("POSITION_IN_QUEUE");

ContactMetricName GetContactMetricNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ESTIMATED_WAIT_TIME_HASH) {
    return ContactMetricName::ESTIMATED_WAIT_TIME;
  } else if (hashCode == POSITION_IN_QUEUE_HASH) {
    return ContactMetricName::POSITION_IN_QUEUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactMetricName>(hashCode);
  }

  return ContactMetricName::NOT_SET;
}

Aws::String GetNameForContactMetricName(ContactMetricName enumValue) {
  switch (enumValue) {
    case ContactMetricName::NOT_SET:
      return {};
    case ContactMetricName::ESTIMATED_WAIT_TIME:
      return "ESTIMATED_WAIT_TIME";
    case ContactMetricName::POSITION_IN_QUEUE:
      return "POSITION_IN_QUEUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactMetricNameMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
