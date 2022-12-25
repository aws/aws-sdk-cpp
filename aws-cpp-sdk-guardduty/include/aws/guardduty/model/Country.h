/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the country where the remote IP address is
   * located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_GUARDDUTY_API Country();
    AWS_GUARDDUTY_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The country code of the remote IP address.</p>
     */
    inline Country& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = std::move(value); }

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(Aws::String&& value) { SetCountryName(std::move(value)); return *this;}

    /**
     * <p>The country name of the remote IP address.</p>
     */
    inline Country& WithCountryName(const char* value) { SetCountryName(value); return *this;}

  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
