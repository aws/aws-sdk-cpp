/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  class GeoMatchParams
  {
  public:
    AWS_CHIMESDKVOICE_API GeoMatchParams();
    AWS_CHIMESDKVOICE_API GeoMatchParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API GeoMatchParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCountry() const{ return m_country; }

    
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    
    inline GeoMatchParams& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    
    inline GeoMatchParams& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    
    inline GeoMatchParams& WithCountry(const char* value) { SetCountry(value); return *this;}


    
    inline const Aws::String& GetAreaCode() const{ return m_areaCode; }

    
    inline bool AreaCodeHasBeenSet() const { return m_areaCodeHasBeenSet; }

    
    inline void SetAreaCode(const Aws::String& value) { m_areaCodeHasBeenSet = true; m_areaCode = value; }

    
    inline void SetAreaCode(Aws::String&& value) { m_areaCodeHasBeenSet = true; m_areaCode = std::move(value); }

    
    inline void SetAreaCode(const char* value) { m_areaCodeHasBeenSet = true; m_areaCode.assign(value); }

    
    inline GeoMatchParams& WithAreaCode(const Aws::String& value) { SetAreaCode(value); return *this;}

    
    inline GeoMatchParams& WithAreaCode(Aws::String&& value) { SetAreaCode(std::move(value)); return *this;}

    
    inline GeoMatchParams& WithAreaCode(const char* value) { SetAreaCode(value); return *this;}

  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_areaCode;
    bool m_areaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
