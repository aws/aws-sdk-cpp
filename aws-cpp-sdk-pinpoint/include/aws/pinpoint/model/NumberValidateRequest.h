/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class NumberValidateRequest
  {
  public:
    AWS_PINPOINT_API NumberValidateRequest();
    AWS_PINPOINT_API NumberValidateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API NumberValidateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
