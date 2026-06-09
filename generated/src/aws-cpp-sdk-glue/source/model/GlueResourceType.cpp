/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/GlueResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace GlueResourceTypeMapper {

static const int JOB_HASH = HashingUtils::HashString("JOB");
static const int SESSION_HASH = HashingUtils::HashString("SESSION");

GlueResourceType GetGlueResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JOB_HASH) {
    return GlueResourceType::JOB;
  } else if (hashCode == SESSION_HASH) {
    return GlueResourceType::SESSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlueResourceType>(hashCode);
  }

  return GlueResourceType::NOT_SET;
}

Aws::String GetNameForGlueResourceType(GlueResourceType enumValue) {
  switch (enumValue) {
    case GlueResourceType::NOT_SET:
      return {};
    case GlueResourceType::JOB:
      return "JOB";
    case GlueResourceType::SESSION:
      return "SESSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlueResourceTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
