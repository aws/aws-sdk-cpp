/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/City.h>
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

City::City() : 
    m_cityNameHasBeenSet(false)
{
}

City::City(JsonView jsonValue) : 
    m_cityNameHasBeenSet(false)
{
  *this = jsonValue;
}

City& City::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cityName"))
  {
    m_cityName = jsonValue.GetString("cityName");

    m_cityNameHasBeenSet = true;
  }

  return *this;
}

JsonValue City::Jsonize() const
{
  JsonValue payload;

  if(m_cityNameHasBeenSet)
  {
   payload.WithString("cityName", m_cityName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
