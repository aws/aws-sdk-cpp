/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/Widget.h>
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

Widget::Widget(JsonView jsonValue)
{
  *this = jsonValue;
}

Widget& Widget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("horizontalOffset"))
  {
    m_horizontalOffset = jsonValue.GetInteger("horizontalOffset");
    m_horizontalOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configs"))
  {
    Aws::Utils::Array<JsonView> configsJsonList = jsonValue.GetArray("configs");
    for(unsigned configsIndex = 0; configsIndex < configsJsonList.GetLength(); ++configsIndex)
    {
      m_configs.push_back(configsJsonList[configsIndex].AsObject());
    }
    m_configsHasBeenSet = true;
  }
  return *this;
}

JsonValue Widget::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_horizontalOffsetHasBeenSet)
  {
   payload.WithInteger("horizontalOffset", m_horizontalOffset);

  }

  if(m_configsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configsJsonList(m_configs.size());
   for(unsigned configsIndex = 0; configsIndex < configsJsonList.GetLength(); ++configsIndex)
   {
     configsJsonList[configsIndex].AsObject(m_configs[configsIndex].Jsonize());
   }
   payload.WithArray("configs", std::move(configsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
