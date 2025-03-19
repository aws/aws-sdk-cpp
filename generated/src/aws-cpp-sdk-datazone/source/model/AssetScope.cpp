/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetScope.h>
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

AssetScope::AssetScope(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetScope& AssetScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterIds"))
  {
    Aws::Utils::Array<JsonView> filterIdsJsonList = jsonValue.GetArray("filterIds");
    for(unsigned filterIdsIndex = 0; filterIdsIndex < filterIdsJsonList.GetLength(); ++filterIdsIndex)
    {
      m_filterIds.push_back(filterIdsJsonList[filterIdsIndex].AsString());
    }
    m_filterIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetScope::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_filterIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterIdsJsonList(m_filterIds.size());
   for(unsigned filterIdsIndex = 0; filterIdsIndex < filterIdsJsonList.GetLength(); ++filterIdsIndex)
   {
     filterIdsJsonList[filterIdsIndex].AsString(m_filterIds[filterIdsIndex]);
   }
   payload.WithArray("filterIds", std::move(filterIdsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
