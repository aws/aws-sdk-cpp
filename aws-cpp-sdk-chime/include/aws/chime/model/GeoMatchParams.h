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

  class AWS_CHIME_API GeoMatchParams
  {
  public:
    GeoMatchParams();
    GeoMatchParams(Aws::Utils::Json::JsonView jsonValue);
    GeoMatchParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
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
    bool m_countryHasBeenSet;

    Aws::String m_areaCode;
    bool m_areaCodeHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
