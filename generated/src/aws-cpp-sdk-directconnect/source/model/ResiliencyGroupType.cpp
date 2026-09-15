/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/directconnect/model/ResiliencyGroupType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {
namespace ResiliencyGroupTypeMapper {

static const int Managed_HASH = HashingUtils::HashString("Managed");

ResiliencyGroupType GetResiliencyGroupTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Managed_HASH) {
    return ResiliencyGroupType::Managed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResiliencyGroupType>(hashCode);
  }

  return ResiliencyGroupType::NOT_SET;
}

Aws::String GetNameForResiliencyGroupType(ResiliencyGroupType enumValue) {
  switch (enumValue) {
    case ResiliencyGroupType::NOT_SET:
      return {};
    case ResiliencyGroupType::Managed:
      return "Managed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResiliencyGroupTypeMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
