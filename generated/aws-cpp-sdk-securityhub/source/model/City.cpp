/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/City.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
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
  if(jsonValue.ValueExists("CityName"))
  {
    m_cityName = jsonValue.GetString("CityName");

    m_cityNameHasBeenSet = true;
  }

  return *this;
}

JsonValue City::Jsonize() const
{
  JsonValue payload;

  if(m_cityNameHasBeenSet)
  {
   payload.WithString("CityName", m_cityName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
