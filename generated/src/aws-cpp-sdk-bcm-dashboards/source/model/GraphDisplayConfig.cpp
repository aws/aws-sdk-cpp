/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/GraphDisplayConfig.h>
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

GraphDisplayConfig::GraphDisplayConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GraphDisplayConfig& GraphDisplayConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("visualType"))
  {
    m_visualType = VisualTypeMapper::GetVisualTypeForName(jsonValue.GetString("visualType"));
    m_visualTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GraphDisplayConfig::Jsonize() const
{
  JsonValue payload;

  if(m_visualTypeHasBeenSet)
  {
   payload.WithString("visualType", VisualTypeMapper::GetNameForVisualType(m_visualType));
  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
