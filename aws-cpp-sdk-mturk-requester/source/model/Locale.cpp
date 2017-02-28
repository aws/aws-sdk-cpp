/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/Locale.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

Locale::Locale() : 
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false)
{
}

Locale::Locale(const JsonValue& jsonValue) : 
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false)
{
  *this = jsonValue;
}

Locale& Locale::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subdivision"))
  {
    m_subdivision = jsonValue.GetString("Subdivision");

    m_subdivisionHasBeenSet = true;
  }

  return *this;
}

JsonValue Locale::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_subdivisionHasBeenSet)
  {
   payload.WithString("Subdivision", m_subdivision);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws