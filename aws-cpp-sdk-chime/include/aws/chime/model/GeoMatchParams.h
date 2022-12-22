/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The country and area code for a proxy phone number in a proxy phone
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GeoMatchParams">AWS
   * API Reference</a></p>
   */
  class GeoMatchParams
  {
  public:
    AWS_CHIME_API GeoMatchParams();
    AWS_CHIME_API GeoMatchParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API GeoMatchParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>The country.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>The country.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>The country.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>The country.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>The country.</p>
     */
    inline GeoMatchParams& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>The country.</p>
     */
    inline GeoMatchParams& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>The country.</p>
     */
    inline GeoMatchParams& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>The area code.</p>
     */
    inline const Aws::String& GetAreaCode() const{ return m_areaCode; }

    /**
     * <p>The area code.</p>
     */
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }

    /**
     * <p>The area code.</p>
     */
    inline void SetAreaCode(const Aws::String& value) { m_areaCodeHasBeenSet = true; m_areaCode = value; }

    /**
     * <p>The area code.</p>
     */
    inline void SetAreaCode(Aws::String&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::move(value); }

    /**
     * <p>The area code.</p>
     */
    inline void SetAreaCode(const char* value) { m_areaCodeHasBeenSet = true; m_areaCode.assign(value); }

    /**
     * <p>The area code.</p>
     */
    inline GeoMatchParams& WithAreaCode(const Aws::String& value) { SetAreaCode(value); return *this;}

    /**
     * <p>The area code.</p>
     */
    inline GeoMatchParams& WithAreaCode(Aws::String&& value) { SetAreaCode(std::move(value)); return *this;}

    /**
     * <p>The area code.</p>
     */
    inline GeoMatchParams& WithAreaCode(const char* value) { SetAreaCode(value); return *this;}

  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_areaCode;
    bool m_areaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
