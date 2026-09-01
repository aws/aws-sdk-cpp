/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/ProfileType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace ProfileTypeMapper {

static const int Lightsailor_HASH = HashingUtils::HashString("Lightsailor");
static const int LightsailPartner_HASH = HashingUtils::HashString("LightsailPartner");

ProfileType GetProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Lightsailor_HASH) {
    return ProfileType::Lightsailor;
  } else if (hashCode == LightsailPartner_HASH) {
    return ProfileType::LightsailPartner;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProfileType>(hashCode);
  }

  return ProfileType::NOT_SET;
}

Aws::String GetNameForProfileType(ProfileType enumValue) {
  switch (enumValue) {
    case ProfileType::NOT_SET:
      return {};
    case ProfileType::Lightsailor:
      return "Lightsailor";
    case ProfileType::LightsailPartner:
      return "LightsailPartner";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProfileTypeMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
