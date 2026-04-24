/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/LocationService_EXPORTS.h>

namespace Aws {
namespace LocationService {
namespace Model {
enum class ValidateAddressAdditionalFeature { NOT_SET, Position, CountrySpecificAttributes };

namespace ValidateAddressAdditionalFeatureMapper {
AWS_LOCATIONSERVICE_API ValidateAddressAdditionalFeature GetValidateAddressAdditionalFeatureForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForValidateAddressAdditionalFeature(ValidateAddressAdditionalFeature value);
}  // namespace ValidateAddressAdditionalFeatureMapper
}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
