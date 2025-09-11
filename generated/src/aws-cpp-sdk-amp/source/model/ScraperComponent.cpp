/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScraperComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

ScraperComponent::ScraperComponent(JsonView jsonValue)
{
  *this = jsonValue;
}

ScraperComponent& ScraperComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ScraperComponentTypeMapper::GetScraperComponentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("config"))
  {
    m_config = jsonValue.GetObject("config");
    m_configHasBeenSet = true;
  }
  return *this;
}

JsonValue ScraperComponent::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ScraperComponentTypeMapper::GetNameForScraperComponentType(m_type));
  }

  if(m_configHasBeenSet)
  {
   payload.WithObject("config", m_config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
