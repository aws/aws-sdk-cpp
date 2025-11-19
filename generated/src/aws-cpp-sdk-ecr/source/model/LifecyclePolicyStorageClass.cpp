/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/LifecyclePolicyStorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace LifecyclePolicyStorageClassMapper {

static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");
static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");

LifecyclePolicyStorageClass GetLifecyclePolicyStorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ARCHIVE_HASH) {
    return LifecyclePolicyStorageClass::ARCHIVE;
  } else if (hashCode == STANDARD_HASH) {
    return LifecyclePolicyStorageClass::STANDARD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LifecyclePolicyStorageClass>(hashCode);
  }

  return LifecyclePolicyStorageClass::NOT_SET;
}

Aws::String GetNameForLifecyclePolicyStorageClass(LifecyclePolicyStorageClass enumValue) {
  switch (enumValue) {
    case LifecyclePolicyStorageClass::NOT_SET:
      return {};
    case LifecyclePolicyStorageClass::ARCHIVE:
      return "ARCHIVE";
    case LifecyclePolicyStorageClass::STANDARD:
      return "STANDARD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LifecyclePolicyStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
