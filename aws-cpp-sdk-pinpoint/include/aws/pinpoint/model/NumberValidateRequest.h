/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a phone number to validate and retrieve information
   * about.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/NumberValidateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API NumberValidateRequest
  {
  public:
    NumberValidateRequest();
    NumberValidateRequest(Aws::Utils::Json::JsonView jsonValue);
    NumberValidateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateRequest& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateRequest& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region where the phone number was originally registered.</p>
     */
    inline NumberValidateRequest& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline NumberValidateRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline NumberValidateRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to retrieve information about. The phone number that you
     * provide should include a valid numeric country code. Otherwise, the operation
     * might result in an error.</p>
     */
    inline NumberValidateRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
