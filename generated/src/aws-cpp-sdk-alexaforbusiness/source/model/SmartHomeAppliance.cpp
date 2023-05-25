/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
