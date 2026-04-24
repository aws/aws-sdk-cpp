/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/PropertyLocation.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace PropertyLocationMapper {

static const int HEADER_HASH = HashingUtils::HashString("HEADER");
static const int BODY_HASH = HashingUtils::HashString("BODY");
static const int QUERY_PARAM_HASH = HashingUtils::HashString("QUERY_PARAM");
static const int PATH_HASH = HashingUtils::HashString("PATH");

PropertyLocation GetPropertyLocationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HEADER_HASH) {
    return PropertyLocation::HEADER;
  } else if (hashCode == BODY_HASH) {
    return PropertyLocation::BODY;
  } else if (hashCode == QUERY_PARAM_HASH) {
    return PropertyLocation::QUERY_PARAM;
  } else if (hashCode == PATH_HASH) {
    return PropertyLocation::PATH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PropertyLocation>(hashCode);
  }

  return PropertyLocation::NOT_SET;
}

Aws::String GetNameForPropertyLocation(PropertyLocation enumValue) {
  switch (enumValue) {
    case PropertyLocation::NOT_SET:
      return {};
    case PropertyLocation::HEADER:
      return "HEADER";
    case PropertyLocation::BODY:
      return "BODY";
    case PropertyLocation::QUERY_PARAM:
      return "QUERY_PARAM";
    case PropertyLocation::PATH:
      return "PATH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PropertyLocationMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
