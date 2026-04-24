/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/location/model/ValidateAddressAdditionalFeature.h>

using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {
namespace ValidateAddressAdditionalFeatureMapper {

static const int Position_HASH = HashingUtils::HashString("Position");
static const int CountrySpecificAttributes_HASH = HashingUtils::HashString("CountrySpecificAttributes");

ValidateAddressAdditionalFeature GetValidateAddressAdditionalFeatureForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Position_HASH) {
    return ValidateAddressAdditionalFeature::Position;
  } else if (hashCode == CountrySpecificAttributes_HASH) {
    return ValidateAddressAdditionalFeature::CountrySpecificAttributes;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidateAddressAdditionalFeature>(hashCode);
  }

  return ValidateAddressAdditionalFeature::NOT_SET;
}

Aws::String GetNameForValidateAddressAdditionalFeature(ValidateAddressAdditionalFeature enumValue) {
  switch (enumValue) {
    case ValidateAddressAdditionalFeature::NOT_SET:
      return {};
    case ValidateAddressAdditionalFeature::Position:
      return "Position";
    case ValidateAddressAdditionalFeature::CountrySpecificAttributes:
      return "CountrySpecificAttributes";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidateAddressAdditionalFeatureMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
