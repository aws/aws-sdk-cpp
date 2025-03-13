/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetFilterSummary.h>
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

AssetFilterSummary::AssetFilterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetFilterSummary& AssetFilterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveColumnNames"))
  {
    Aws::Utils::Array<JsonView> effectiveColumnNamesJsonList = jsonValue.GetArray("effectiveColumnNames");
    for(unsigned effectiveColumnNamesIndex = 0; effectiveColumnNamesIndex < effectiveColumnNamesJsonList.GetLength(); ++effectiveColumnNamesIndex)
    {
      m_effectiveColumnNames.push_back(effectiveColumnNamesJsonList[effectiveColumnNamesIndex].AsString());
    }
    m_effectiveColumnNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveRowFilter"))
  {
    m_effectiveRowFilter = jsonValue.GetString("effectiveRowFilter");
    m_effectiveRowFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = FilterStatusMapper::GetFilterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFilterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_effectiveColumnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> effectiveColumnNamesJsonList(m_effectiveColumnNames.size());
   for(unsigned effectiveColumnNamesIndex = 0; effectiveColumnNamesIndex < effectiveColumnNamesJsonList.GetLength(); ++effectiveColumnNamesIndex)
   {
     effectiveColumnNamesJsonList[effectiveColumnNamesIndex].AsString(m_effectiveColumnNames[effectiveColumnNamesIndex]);
   }
   payload.WithArray("effectiveColumnNames", std::move(effectiveColumnNamesJsonList));

  }

  if(m_effectiveRowFilterHasBeenSet)
  {
   payload.WithString("effectiveRowFilter", m_effectiveRowFilter);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FilterStatusMapper::GetNameForFilterStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
