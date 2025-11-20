/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/TargetStorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace TargetStorageClassMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");

TargetStorageClass GetTargetStorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return TargetStorageClass::STANDARD;
  } else if (hashCode == ARCHIVE_HASH) {
    return TargetStorageClass::ARCHIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TargetStorageClass>(hashCode);
  }

  return TargetStorageClass::NOT_SET;
}

Aws::String GetNameForTargetStorageClass(TargetStorageClass enumValue) {
  switch (enumValue) {
    case TargetStorageClass::NOT_SET:
      return {};
    case TargetStorageClass::STANDARD:
      return "STANDARD";
    case TargetStorageClass::ARCHIVE:
      return "ARCHIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TargetStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
