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

#include <aws/wafv2/model/GeoMatchStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

GeoMatchStatement::GeoMatchStatement() : 
    m_countryCodesHasBeenSet(false)
{
}

GeoMatchStatement::GeoMatchStatement(JsonView jsonValue) : 
    m_countryCodesHasBeenSet(false)
{
  *this = jsonValue;
}

GeoMatchStatement& GeoMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CountryCodes"))
  {
    Array<JsonView> countryCodesJsonList = jsonValue.GetArray("CountryCodes");
    for(unsigned countryCodesIndex = 0; countryCodesIndex < countryCodesJsonList.GetLength(); ++countryCodesIndex)
    {
      m_countryCodes.push_back(CountryCodeMapper::GetCountryCodeForName(countryCodesJsonList[countryCodesIndex].AsString()));
    }
    m_countryCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodesHasBeenSet)
  {
   Array<JsonValue> countryCodesJsonList(m_countryCodes.size());
   for(unsigned countryCodesIndex = 0; countryCodesIndex < countryCodesJsonList.GetLength(); ++countryCodesIndex)
   {
     countryCodesJsonList[countryCodesIndex].AsString(CountryCodeMapper::GetNameForCountryCode(m_countryCodes[countryCodesIndex]));
   }
   payload.WithArray("CountryCodes", std::move(countryCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
