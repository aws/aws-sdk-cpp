/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/SecondaryInterfaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace SecondaryInterfaceTypeMapper {

static const int secondary_HASH = HashingUtils::HashString("secondary");

SecondaryInterfaceType GetSecondaryInterfaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == secondary_HASH) {
    return SecondaryInterfaceType::secondary;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecondaryInterfaceType>(hashCode);
  }

  return SecondaryInterfaceType::NOT_SET;
}

Aws::String GetNameForSecondaryInterfaceType(SecondaryInterfaceType enumValue) {
  switch (enumValue) {
    case SecondaryInterfaceType::NOT_SET:
      return {};
    case SecondaryInterfaceType::secondary:
      return "secondary";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecondaryInterfaceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
