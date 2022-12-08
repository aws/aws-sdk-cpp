/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a country.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_SECURITYHUB_API Country();
    AWS_SECURITYHUB_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline Country& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline Country& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline Country& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}


    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountryName() const{ return m_countryName; }

    /**
     * <p>The name of the country.</p>
     */
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(const Aws::String& value) { m_countryNameHasBeenSet = true; m_countryName = value; }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(Aws::String&& value) { m_countryNameHasBeenSet = true; m_countryName = std::move(value); }

    /**
     * <p>The name of the country.</p>
     */
    inline void SetCountryName(const char* value) { m_countryNameHasBeenSet = true; m_countryName.assign(value); }

    /**
     * <p>The name of the country.</p>
     */
    inline Country& WithCountryName(const Aws::String& value) { SetCountryName(value); return *this;}

    /**
     * <p>The name of the country.</p>
     */
    inline Country& WithCountryName(Aws::String&& value) { SetCountryName(std::move(value)); return *this;}

    /**
     * <p>The name of the country.</p>
     */
    inline Country& WithCountryName(const char* value) { SetCountryName(value); return *this;}

  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
