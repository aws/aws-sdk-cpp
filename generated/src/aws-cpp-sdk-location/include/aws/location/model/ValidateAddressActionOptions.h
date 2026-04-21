/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/ValidateAddressAdditionalFeature.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LocationService {
namespace Model {

/**
 * <p>Options specific to address validation jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ValidateAddressActionOptions">AWS
 * API Reference</a></p>
 */
class ValidateAddressActionOptions {
 public:
  AWS_LOCATIONSERVICE_API ValidateAddressActionOptions() = default;
  AWS_LOCATIONSERVICE_API ValidateAddressActionOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API ValidateAddressActionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of optional additional parameters that can be requested for each
   * result.</p> <p>Values:</p> <ul> <li> <p> <code>Position</code> - Return the
   * position coordinates of the address if available.</p> </li> <li> <p>
   * <code>CountrySpecificAttributes</code> - Return additional information about the
   * address specific to the country of origin.</p> </li> </ul>
   */
  inline const Aws::Vector<ValidateAddressAdditionalFeature>& GetAdditionalFeatures() const { return m_additionalFeatures; }
  inline bool AdditionalFeaturesHasBeenSet() const { return m_additionalFeaturesHasBeenSet; }
  template <typename AdditionalFeaturesT = Aws::Vector<ValidateAddressAdditionalFeature>>
  void SetAdditionalFeatures(AdditionalFeaturesT&& value) {
    m_additionalFeaturesHasBeenSet = true;
    m_additionalFeatures = std::forward<AdditionalFeaturesT>(value);
  }
  template <typename AdditionalFeaturesT = Aws::Vector<ValidateAddressAdditionalFeature>>
  ValidateAddressActionOptions& WithAdditionalFeatures(AdditionalFeaturesT&& value) {
    SetAdditionalFeatures(std::forward<AdditionalFeaturesT>(value));
    return *this;
  }
  inline ValidateAddressActionOptions& AddAdditionalFeatures(ValidateAddressAdditionalFeature value) {
    m_additionalFeaturesHasBeenSet = true;
    m_additionalFeatures.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ValidateAddressAdditionalFeature> m_additionalFeatures;
  bool m_additionalFeaturesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
