/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/FilterFieldName.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace FilterFieldNameMapper {

static const int name_HASH = HashingUtils::HashString("name");
static const int description_HASH = HashingUtils::HashString("description");
static const int dataSource_HASH = HashingUtils::HashString("dataSource");
static const int severity_HASH = HashingUtils::HashString("severity");
static const int tactic_HASH = HashingUtils::HashString("tactic");
static const int technique_HASH = HashingUtils::HashString("technique");
static const int service_HASH = HashingUtils::HashString("service");

FilterFieldName GetFilterFieldNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == name_HASH) {
    return FilterFieldName::name;
  } else if (hashCode == description_HASH) {
    return FilterFieldName::description;
  } else if (hashCode == dataSource_HASH) {
    return FilterFieldName::dataSource;
  } else if (hashCode == severity_HASH) {
    return FilterFieldName::severity;
  } else if (hashCode == tactic_HASH) {
    return FilterFieldName::tactic;
  } else if (hashCode == technique_HASH) {
    return FilterFieldName::technique;
  } else if (hashCode == service_HASH) {
    return FilterFieldName::service;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterFieldName>(hashCode);
  }

  return FilterFieldName::NOT_SET;
}

Aws::String GetNameForFilterFieldName(FilterFieldName enumValue) {
  switch (enumValue) {
    case FilterFieldName::NOT_SET:
      return {};
    case FilterFieldName::name:
      return "name";
    case FilterFieldName::description:
      return "description";
    case FilterFieldName::dataSource:
      return "dataSource";
    case FilterFieldName::severity:
      return "severity";
    case FilterFieldName::tactic:
      return "tactic";
    case FilterFieldName::technique:
      return "technique";
    case FilterFieldName::service:
      return "service";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterFieldNameMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
