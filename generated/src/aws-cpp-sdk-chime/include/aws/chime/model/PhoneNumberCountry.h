/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/PhoneNumberType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>The phone number country.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PhoneNumberCountry">AWS
   * API Reference</a></p>
   */
  class PhoneNumberCountry
  {
  public:
    AWS_CHIME_API PhoneNumberCountry() = default;
    AWS_CHIME_API PhoneNumberCountry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API PhoneNumberCountry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number country code. Format: ISO 3166-1 alpha-2.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    PhoneNumberCountry& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported phone number types. </p>
     */
    inline const Aws::Vector<PhoneNumberType>& GetSupportedPhoneNumberTypes() const { return m_supportedPhoneNumberTypes; }
    inline bool SupportedPhoneNumberTypesHasBeenSet() const { return m_supportedPhoneNumberTypesHasBeenSet; }
    template<typename SupportedPhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    void SetSupportedPhoneNumberTypes(SupportedPhoneNumberTypesT&& value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes = std::forward<SupportedPhoneNumberTypesT>(value); }
    template<typename SupportedPhoneNumberTypesT = Aws::Vector<PhoneNumberType>>
    PhoneNumberCountry& WithSupportedPhoneNumberTypes(SupportedPhoneNumberTypesT&& value) { SetSupportedPhoneNumberTypes(std::forward<SupportedPhoneNumberTypesT>(value)); return *this;}
    inline PhoneNumberCountry& AddSupportedPhoneNumberTypes(PhoneNumberType value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::Vector<PhoneNumberType> m_supportedPhoneNumberTypes;
    bool m_supportedPhoneNumberTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
