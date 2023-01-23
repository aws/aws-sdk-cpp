/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetPropertySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AssetPropertySummary::AssetPropertySummary() : 
    m_idHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_assetCompositeModelIdHasBeenSet(false)
{
}

AssetPropertySummary::AssetPropertySummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_assetCompositeModelIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssetPropertySummary& AssetPropertySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notification"))
  {
    m_notification = jsonValue.GetObject("notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetCompositeModelId"))
  {
    m_assetCompositeModelId = jsonValue.GetString("assetCompositeModelId");

    m_assetCompositeModelIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetPropertySummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("notification", m_notification.Jsonize());

  }

  if(m_assetCompositeModelIdHasBeenSet)
  {
   payload.WithString("assetCompositeModelId", m_assetCompositeModelId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
