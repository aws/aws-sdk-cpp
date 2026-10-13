/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datasync/model/ObjectMetadata.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {
namespace ObjectMetadataMapper {

static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");
static const int NONE_HASH = HashingUtils::HashString("NONE");

ObjectMetadata GetObjectMetadataForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRESERVE_HASH) {
    return ObjectMetadata::PRESERVE;
  } else if (hashCode == NONE_HASH) {
    return ObjectMetadata::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ObjectMetadata>(hashCode);
  }

  return ObjectMetadata::NOT_SET;
}

Aws::String GetNameForObjectMetadata(ObjectMetadata enumValue) {
  switch (enumValue) {
    case ObjectMetadata::NOT_SET:
      return {};
    case ObjectMetadata::PRESERVE:
      return "PRESERVE";
    case ObjectMetadata::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ObjectMetadataMapper
}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
