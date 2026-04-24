/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/Specialty.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace SpecialtyMapper {

static const int PRIMARY_CARE_HASH = HashingUtils::HashString("PRIMARY_CARE");

Specialty GetSpecialtyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_CARE_HASH) {
    return Specialty::PRIMARY_CARE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Specialty>(hashCode);
  }

  return Specialty::NOT_SET;
}

Aws::String GetNameForSpecialty(Specialty enumValue) {
  switch (enumValue) {
    case Specialty::NOT_SET:
      return {};
    case Specialty::PRIMARY_CARE:
      return "PRIMARY_CARE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpecialtyMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
