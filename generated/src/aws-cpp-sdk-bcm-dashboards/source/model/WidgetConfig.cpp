/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/WidgetConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

WidgetConfig::WidgetConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

WidgetConfig& WidgetConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryParameters"))
  {
    m_queryParameters = jsonValue.GetObject("queryParameters");
    m_queryParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayConfig"))
  {
    m_displayConfig = jsonValue.GetObject("displayConfig");
    m_displayConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue WidgetConfig::Jsonize() const
{
  JsonValue payload;

  if(m_queryParametersHasBeenSet)
  {
   payload.WithObject("queryParameters", m_queryParameters.Jsonize());

  }

  if(m_displayConfigHasBeenSet)
  {
   payload.WithObject("displayConfig", m_displayConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
