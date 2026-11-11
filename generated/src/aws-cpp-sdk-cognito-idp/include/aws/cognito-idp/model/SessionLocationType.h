/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The geographic location of the most recent activity on a session, derived
 * from the IP address.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SessionLocationType">AWS
 * API Reference</a></p>
 */
class SessionLocationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API SessionLocationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API SessionLocationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API SessionLocationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The city of the most recent activity on the session, derived from the IP
   * address. This value can be null if geo-IP resolution fails. The maximum length
   * is 256 characters.</p>
   */
  inline const Aws::String& GetCity() const { return m_city; }
  inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
  template <typename CityT = Aws::String>
  void SetCity(CityT&& value) {
    m_cityHasBeenSet = true;
    m_city = std::forward<CityT>(value);
  }
  template <typename CityT = Aws::String>
  SessionLocationType& WithCity(CityT&& value) {
    SetCity(std::forward<CityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the most recent activity on the session, derived from the IP
   * address and returned in English (for example, <code>United States</code>). This
   * is a country name as returned by the geo-IP database, not an ISO country code,
   * and can be <code>unknown</code> if geo-IP resolution fails.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  SessionLocationType& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_city;

  Aws::String m_country;
  bool m_cityHasBeenSet = false;
  bool m_countryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
