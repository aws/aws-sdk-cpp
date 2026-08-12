/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/model/ManagedByTypeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {
namespace ManagedByTypeTypeMapper {

static const int Service_HASH = HashingUtils::HashString("Service");

ManagedByTypeType GetManagedByTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Service_HASH) {
    return ManagedByTypeType::Service;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedByTypeType>(hashCode);
  }

  return ManagedByTypeType::NOT_SET;
}

Aws::String GetNameForManagedByTypeType(ManagedByTypeType enumValue) {
  switch (enumValue) {
    case ManagedByTypeType::NOT_SET:
      return {};
    case ManagedByTypeType::Service:
      return "Service";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedByTypeTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
