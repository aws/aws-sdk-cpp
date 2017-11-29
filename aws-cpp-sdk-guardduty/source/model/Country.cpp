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

#include <aws/guardduty/model/Country.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Country::Country() : 
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false)
{
}

Country::Country(const JsonValue& jsonValue) : 
    m_countryCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false)
{
  *this = jsonValue;
}

Country& Country::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("countryCode"))
  {
    m_countryCode = jsonValue.GetString("countryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("countryName"))
  {
    m_countryName = jsonValue.GetString("countryName");

    m_countryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Country::Jsonize() const
{
  JsonValue payload;

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("countryCode", m_countryCode);

  }

  if(m_countryNameHasBeenSet)
  {
   payload.WithString("countryName", m_countryName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
