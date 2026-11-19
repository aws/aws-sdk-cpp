/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/FindingSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace FindingSeverityMapper {

static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int INFO_HASH = HashingUtils::HashString("INFO");

FindingSeverity GetFindingSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ERROR__HASH) {
    return FindingSeverity::ERROR_;
  } else if (hashCode == WARNING_HASH) {
    return FindingSeverity::WARNING;
  } else if (hashCode == INFO_HASH) {
    return FindingSeverity::INFO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingSeverity>(hashCode);
  }

  return FindingSeverity::NOT_SET;
}

Aws::String GetNameForFindingSeverity(FindingSeverity enumValue) {
  switch (enumValue) {
    case FindingSeverity::NOT_SET:
      return {};
    case FindingSeverity::ERROR_:
      return "ERROR";
    case FindingSeverity::WARNING:
      return "WARNING";
    case FindingSeverity::INFO:
      return "INFO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingSeverityMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
