/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecr/model/LifecyclePolicyTargetStorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {
namespace LifecyclePolicyTargetStorageClassMapper {

static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");

LifecyclePolicyTargetStorageClass GetLifecyclePolicyTargetStorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ARCHIVE_HASH) {
    return LifecyclePolicyTargetStorageClass::ARCHIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LifecyclePolicyTargetStorageClass>(hashCode);
  }

  return LifecyclePolicyTargetStorageClass::NOT_SET;
}

Aws::String GetNameForLifecyclePolicyTargetStorageClass(LifecyclePolicyTargetStorageClass enumValue) {
  switch (enumValue) {
    case LifecyclePolicyTargetStorageClass::NOT_SET:
      return {};
    case LifecyclePolicyTargetStorageClass::ARCHIVE:
      return "ARCHIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LifecyclePolicyTargetStorageClassMapper
}  // namespace Model
}  // namespace ECR
}  // namespace Aws
