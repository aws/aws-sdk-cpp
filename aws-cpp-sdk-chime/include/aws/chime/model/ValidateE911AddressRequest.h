/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class ValidateE911AddressRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API ValidateE911AddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateE911Address"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The AWS account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The AWS account ID.</p>
     */
    inline ValidateE911AddressRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline ValidateE911AddressRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID.</p>
     */
    inline ValidateE911AddressRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline const Aws::String& GetStreetNumber() const{ return m_streetNumber; }

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline bool StreetNumberHasBeenSet() const { return m_streetNumberHasBeenSet; }

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline void SetStreetNumber(const Aws::String& value) { m_streetNumberHasBeenSet = true; m_streetNumber = value; }

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline void SetStreetNumber(Aws::String&& value) { m_streetNumberHasBeenSet = true; m_streetNumber = std::move(value); }

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline void SetStreetNumber(const char* value) { m_streetNumberHasBeenSet = true; m_streetNumber.assign(value); }

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetNumber(const Aws::String& value) { SetStreetNumber(value); return *this;}

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetNumber(Aws::String&& value) { SetStreetNumber(std::move(value)); return *this;}

    /**
     * <p>The address street number, such as <code>200</code> or <code>2121</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetNumber(const char* value) { SetStreetNumber(value); return *this;}


    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline const Aws::String& GetStreetInfo() const{ return m_streetInfo; }

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline bool StreetInfoHasBeenSet() const { return m_streetInfoHasBeenSet; }

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetInfo(const Aws::String& value) { m_streetInfoHasBeenSet = true; m_streetInfo = value; }

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetInfo(Aws::String&& value) { m_streetInfoHasBeenSet = true; m_streetInfo = std::move(value); }

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline void SetStreetInfo(const char* value) { m_streetInfoHasBeenSet = true; m_streetInfo.assign(value); }

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetInfo(const Aws::String& value) { SetStreetInfo(value); return *this;}

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetInfo(Aws::String&& value) { SetStreetInfo(std::move(value)); return *this;}

    /**
     * <p>The address street information, such as <code>8th Avenue</code>.</p>
     */
    inline ValidateE911AddressRequest& WithStreetInfo(const char* value) { SetStreetInfo(value); return *this;}


    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline ValidateE911AddressRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline ValidateE911AddressRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The address city, such as <code>Portland</code>.</p>
     */
    inline ValidateE911AddressRequest& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline ValidateE911AddressRequest& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline ValidateE911AddressRequest& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The address state, such as <code>ME</code>.</p>
     */
    inline ValidateE911AddressRequest& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline ValidateE911AddressRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline ValidateE911AddressRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The address country, such as <code>US</code>. </p>
     */
    inline ValidateE911AddressRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline const Aws::String& GetPostalCode() const{ return m_postalCode; }

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline bool PostalCodeHasBeenSet() const { return m_postalCodeHasBeenSet; }

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline void SetPostalCode(const Aws::String& value) { m_postalCodeHasBeenSet = true; m_postalCode = value; }

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline void SetPostalCode(Aws::String&& value) { m_postalCodeHasBeenSet = true; m_postalCode = std::move(value); }

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline void SetPostalCode(const char* value) { m_postalCodeHasBeenSet = true; m_postalCode.assign(value); }

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline ValidateE911AddressRequest& WithPostalCode(const Aws::String& value) { SetPostalCode(value); return *this;}

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline ValidateE911AddressRequest& WithPostalCode(Aws::String&& value) { SetPostalCode(std::move(value)); return *this;}

    /**
     * <p>The address postal code, such as <code>04352</code>.</p>
     */
    inline ValidateE911AddressRequest& WithPostalCode(const char* value) { SetPostalCode(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_streetNumber;
    bool m_streetNumberHasBeenSet = false;

    Aws::String m_streetInfo;
    bool m_streetInfoHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_postalCode;
    bool m_postalCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
