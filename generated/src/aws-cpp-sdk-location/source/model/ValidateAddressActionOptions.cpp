/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/ValidateAddressActionOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

ValidateAddressActionOptions::ValidateAddressActionOptions(JsonView jsonValue) { *this = jsonValue; }

ValidateAddressActionOptions& ValidateAddressActionOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AdditionalFeatures")) {
    Aws::Utils::Array<JsonView> additionalFeaturesJsonList = jsonValue.GetArray("AdditionalFeatures");
    for (unsigned additionalFeaturesIndex = 0; additionalFeaturesIndex < additionalFeaturesJsonList.GetLength();
         ++additionalFeaturesIndex) {
      m_additionalFeatures.push_back(ValidateAddressAdditionalFeatureMapper::GetValidateAddressAdditionalFeatureForName(
          additionalFeaturesJsonList[additionalFeaturesIndex].AsString()));
    }
    m_additionalFeaturesHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidateAddressActionOptions::Jsonize() const {
  JsonValue payload;

  if (m_additionalFeaturesHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalFeaturesJsonList(m_additionalFeatures.size());
    for (unsigned additionalFeaturesIndex = 0; additionalFeaturesIndex < additionalFeaturesJsonList.GetLength();
         ++additionalFeaturesIndex) {
      additionalFeaturesJsonList[additionalFeaturesIndex].AsString(
          ValidateAddressAdditionalFeatureMapper::GetNameForValidateAddressAdditionalFeature(
              m_additionalFeatures[additionalFeaturesIndex]));
    }
    payload.WithArray("AdditionalFeatures", std::move(additionalFeaturesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
