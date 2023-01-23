/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssociatedAssetsSummary.h>
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

AssociatedAssetsSummary::AssociatedAssetsSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assetModelIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hierarchiesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AssociatedAssetsSummary::AssociatedAssetsSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assetModelIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hierarchiesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedAssetsSummary& AssociatedAssetsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetModelId"))
  {
    m_assetModelId = jsonValue.GetString("assetModelId");

    m_assetModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

    m_lastUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hierarchies"))
  {
    Aws::Utils::Array<JsonView> hierarchiesJsonList = jsonValue.GetArray("hierarchies");
    for(unsigned hierarchiesIndex = 0; hierarchiesIndex < hierarchiesJsonList.GetLength(); ++hierarchiesIndex)
    {
      m_hierarchies.push_back(hierarchiesJsonList[hierarchiesIndex].AsObject());
    }
    m_hierarchiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedAssetsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_assetModelIdHasBeenSet)
  {
   payload.WithString("assetModelId", m_assetModelId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdateDateHasBeenSet)
  {
   payload.WithDouble("lastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_hierarchiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hierarchiesJsonList(m_hierarchies.size());
   for(unsigned hierarchiesIndex = 0; hierarchiesIndex < hierarchiesJsonList.GetLength(); ++hierarchiesIndex)
   {
     hierarchiesJsonList[hierarchiesIndex].AsObject(m_hierarchies[hierarchiesIndex].Jsonize());
   }
   payload.WithArray("hierarchies", std::move(hierarchiesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
