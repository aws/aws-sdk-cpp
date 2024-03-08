/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetCompositeModelSummary.h>
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

AssetCompositeModelSummary::AssetCompositeModelSummary() : 
    m_idHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

AssetCompositeModelSummary::AssetCompositeModelSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AssetCompositeModelSummary& AssetCompositeModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    Aws::Utils::Array<JsonView> pathJsonList = jsonValue.GetArray("path");
    for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
    {
      m_path.push_back(pathJsonList[pathIndex].AsObject());
    }
    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetCompositeModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_pathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathJsonList(m_path.size());
   for(unsigned pathIndex = 0; pathIndex < pathJsonList.GetLength(); ++pathIndex)
   {
     pathJsonList[pathIndex].AsObject(m_path[pathIndex].Jsonize());
   }
   payload.WithArray("path", std::move(pathJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
