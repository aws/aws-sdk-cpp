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

#include <aws/directconnect/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

Location::Location() : 
    m_locationCodeHasBeenSet(false),
    m_locationNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availablePortSpeedsHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_locationCodeHasBeenSet(false),
    m_locationNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availablePortSpeedsHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("locationCode"))
  {
    m_locationCode = jsonValue.GetString("locationCode");

    m_locationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locationName"))
  {
    m_locationName = jsonValue.GetString("locationName");

    m_locationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availablePortSpeeds"))
  {
    Array<JsonView> availablePortSpeedsJsonList = jsonValue.GetArray("availablePortSpeeds");
    for(unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength(); ++availablePortSpeedsIndex)
    {
      m_availablePortSpeeds.push_back(availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString());
    }
    m_availablePortSpeedsHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_locationCodeHasBeenSet)
  {
   payload.WithString("locationCode", m_locationCode);

  }

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("locationName", m_locationName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_availablePortSpeedsHasBeenSet)
  {
   Array<JsonValue> availablePortSpeedsJsonList(m_availablePortSpeeds.size());
   for(unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength(); ++availablePortSpeedsIndex)
   {
     availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString(m_availablePortSpeeds[availablePortSpeedsIndex]);
   }
   payload.WithArray("availablePortSpeeds", std::move(availablePortSpeedsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
