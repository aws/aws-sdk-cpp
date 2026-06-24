/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-core/model/ComputeResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {
namespace ComputeResourceTypeMapper {

static const int MicroVm_HASH = HashingUtils::HashString("MicroVm");

ComputeResourceType GetComputeResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MicroVm_HASH) {
    return ComputeResourceType::MicroVm;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComputeResourceType>(hashCode);
  }

  return ComputeResourceType::NOT_SET;
}

Aws::String GetNameForComputeResourceType(ComputeResourceType enumValue) {
  switch (enumValue) {
    case ComputeResourceType::NOT_SET:
      return {};
    case ComputeResourceType::MicroVm:
      return "MicroVm";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComputeResourceTypeMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
