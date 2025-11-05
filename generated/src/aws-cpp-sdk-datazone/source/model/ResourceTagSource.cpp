/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/ResourceTagSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace ResourceTagSourceMapper {

static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");
static const int PROJECT_PROFILE_HASH = HashingUtils::HashString("PROJECT_PROFILE");

ResourceTagSource GetResourceTagSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROJECT_HASH) {
    return ResourceTagSource::PROJECT;
  } else if (hashCode == PROJECT_PROFILE_HASH) {
    return ResourceTagSource::PROJECT_PROFILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceTagSource>(hashCode);
  }

  return ResourceTagSource::NOT_SET;
}

Aws::String GetNameForResourceTagSource(ResourceTagSource enumValue) {
  switch (enumValue) {
    case ResourceTagSource::NOT_SET:
      return {};
    case ResourceTagSource::PROJECT:
      return "PROJECT";
    case ResourceTagSource::PROJECT_PROFILE:
      return "PROJECT_PROFILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTagSourceMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
