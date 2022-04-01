/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/MapConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

MapConfiguration::MapConfiguration() : 
    m_styleHasBeenSet(false)
{
}

MapConfiguration::MapConfiguration(JsonView jsonValue) : 
    m_styleHasBeenSet(false)
{
  *this = jsonValue;
}

MapConfiguration& MapConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Style"))
  {
    m_style = jsonValue.GetString("Style");

    m_styleHasBeenSet = true;
  }

  return *this;
}

JsonValue MapConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_styleHasBeenSet)
  {
   payload.WithString("Style", m_style);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
