/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/ValidateAddressActionOptions.h>

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
 * <p>Additional options for configuring job action parameters.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/JobActionOptions">AWS
 * API Reference</a></p>
 */
class JobActionOptions {
 public:
  AWS_LOCATIONSERVICE_API JobActionOptions() = default;
  AWS_LOCATIONSERVICE_API JobActionOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API JobActionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Options specific to address validation jobs.</p>
   */
  inline const ValidateAddressActionOptions& GetValidateAddress() const { return m_validateAddress; }
  inline bool ValidateAddressHasBeenSet() const { return m_validateAddressHasBeenSet; }
  template <typename ValidateAddressT = ValidateAddressActionOptions>
  void SetValidateAddress(ValidateAddressT&& value) {
    m_validateAddressHasBeenSet = true;
    m_validateAddress = std::forward<ValidateAddressT>(value);
  }
  template <typename ValidateAddressT = ValidateAddressActionOptions>
  JobActionOptions& WithValidateAddress(ValidateAddressT&& value) {
    SetValidateAddress(std::forward<ValidateAddressT>(value));
    return *this;
  }
  ///@}
 private:
  ValidateAddressActionOptions m_validateAddress;
  bool m_validateAddressHasBeenSet = false;
};

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
