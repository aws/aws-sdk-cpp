/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetInDataProductListingItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetInDataProductListingItem::AssetInDataProductListingItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetInDataProductListingItem& AssetInDataProductListingItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");
    m_entityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityRevision"))
  {
    m_entityRevision = jsonValue.GetString("entityRevision");
    m_entityRevisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");
    m_entityTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetInDataProductListingItem::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_entityRevisionHasBeenSet)
  {
   payload.WithString("entityRevision", m_entityRevision);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", m_entityType);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
