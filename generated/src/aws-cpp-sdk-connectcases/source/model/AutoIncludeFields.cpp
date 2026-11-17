/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AutoIncludeFields.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {
namespace AutoIncludeFieldsMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int System_HASH = HashingUtils::HashString("System");
static const int Custom_HASH = HashingUtils::HashString("Custom");

AutoIncludeFields GetAutoIncludeFieldsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return AutoIncludeFields::All;
  } else if (hashCode == System_HASH) {
    return AutoIncludeFields::System;
  } else if (hashCode == Custom_HASH) {
    return AutoIncludeFields::Custom;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoIncludeFields>(hashCode);
  }

  return AutoIncludeFields::NOT_SET;
}

Aws::String GetNameForAutoIncludeFields(AutoIncludeFields enumValue) {
  switch (enumValue) {
    case AutoIncludeFields::NOT_SET:
      return {};
    case AutoIncludeFields::All:
      return "All";
    case AutoIncludeFields::System:
      return "System";
    case AutoIncludeFields::Custom:
      return "Custom";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoIncludeFieldsMapper
}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
