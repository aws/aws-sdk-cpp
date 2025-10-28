/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/EphemerisType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace EphemerisTypeMapper {

static const int TLE_HASH = HashingUtils::HashString("TLE");
static const int OEM_HASH = HashingUtils::HashString("OEM");
static const int AZ_EL_HASH = HashingUtils::HashString("AZ_EL");
static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");

EphemerisType GetEphemerisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TLE_HASH) {
    return EphemerisType::TLE;
  } else if (hashCode == OEM_HASH) {
    return EphemerisType::OEM;
  } else if (hashCode == AZ_EL_HASH) {
    return EphemerisType::AZ_EL;
  } else if (hashCode == SERVICE_MANAGED_HASH) {
    return EphemerisType::SERVICE_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EphemerisType>(hashCode);
  }

  return EphemerisType::NOT_SET;
}

Aws::String GetNameForEphemerisType(EphemerisType enumValue) {
  switch (enumValue) {
    case EphemerisType::NOT_SET:
      return {};
    case EphemerisType::TLE:
      return "TLE";
    case EphemerisType::OEM:
      return "OEM";
    case EphemerisType::AZ_EL:
      return "AZ_EL";
    case EphemerisType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EphemerisTypeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
