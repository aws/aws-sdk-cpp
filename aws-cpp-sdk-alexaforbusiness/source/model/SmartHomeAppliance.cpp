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

#include <aws/alexaforbusiness/model/SmartHomeAppliance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

SmartHomeAppliance::SmartHomeAppliance() : 
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_manufacturerNameHasBeenSet(false)
{
}

SmartHomeAppliance::SmartHomeAppliance(JsonView jsonValue) : 
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_manufacturerNameHasBeenSet(false)
{
  *this = jsonValue;
}

SmartHomeAppliance& SmartHomeAppliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FriendlyName"))
  {
    m_friendlyName = jsonValue.GetString("FriendlyName");

    m_friendlyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerName"))
  {
    m_manufacturerName = jsonValue.GetString("ManufacturerName");

    m_manufacturerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SmartHomeAppliance::Jsonize() const
{
  JsonValue payload;

  if(m_friendlyNameHasBeenSet)
  {
   payload.WithString("FriendlyName", m_friendlyName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_manufacturerNameHasBeenSet)
  {
   payload.WithString("ManufacturerName", m_manufacturerName);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
