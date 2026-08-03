/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/AsPathType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace AsPathTypeMapper {

static const int seq_HASH = HashingUtils::HashString("seq");
static const int set_HASH = HashingUtils::HashString("set");

AsPathType GetAsPathTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == seq_HASH) {
    return AsPathType::seq;
  } else if (hashCode == set_HASH) {
    return AsPathType::set;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AsPathType>(hashCode);
  }

  return AsPathType::NOT_SET;
}

Aws::String GetNameForAsPathType(AsPathType enumValue) {
  switch (enumValue) {
    case AsPathType::NOT_SET:
      return {};
    case AsPathType::seq:
      return "seq";
    case AsPathType::set:
      return "set";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AsPathTypeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
