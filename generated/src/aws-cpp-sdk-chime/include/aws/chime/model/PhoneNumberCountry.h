﻿/**
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
    AWS_CHIME_API PhoneNumberCountry();
    AWS_CHIME_API PhoneNumberCountry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API PhoneNumberCountry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number country code. Format: ISO 3166-1 alpha-2.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline PhoneNumberCountry& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline PhoneNumberCountry& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline PhoneNumberCountry& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported phone number types. </p>
     */
    inline const Aws::Vector<PhoneNumberType>& GetSupportedPhoneNumberTypes() const{ return m_supportedPhoneNumberTypes; }
    inline bool SupportedPhoneNumberTypesHasBeenSet() const { return m_supportedPhoneNumberTypesHasBeenSet; }
    inline void SetSupportedPhoneNumberTypes(const Aws::Vector<PhoneNumberType>& value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes = value; }
    inline void SetSupportedPhoneNumberTypes(Aws::Vector<PhoneNumberType>&& value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes = std::move(value); }
    inline PhoneNumberCountry& WithSupportedPhoneNumberTypes(const Aws::Vector<PhoneNumberType>& value) { SetSupportedPhoneNumberTypes(value); return *this;}
    inline PhoneNumberCountry& WithSupportedPhoneNumberTypes(Aws::Vector<PhoneNumberType>&& value) { SetSupportedPhoneNumberTypes(std::move(value)); return *this;}
    inline PhoneNumberCountry& AddSupportedPhoneNumberTypes(const PhoneNumberType& value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes.push_back(value); return *this; }
    inline PhoneNumberCountry& AddSupportedPhoneNumberTypes(PhoneNumberType&& value) { m_supportedPhoneNumberTypesHasBeenSet = true; m_supportedPhoneNumberTypes.push_back(std::move(value)); return *this; }
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
