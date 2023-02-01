/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ResourceSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ResourceSet::ResourceSet() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTokenHasBeenSet(false),
    m_resourceTypeListHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

ResourceSet::ResourceSet(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTokenHasBeenSet(false),
    m_resourceTypeListHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSet& ResourceSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

    m_updateTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypeList"))
  {
    Aws::Utils::Array<JsonView> resourceTypeListJsonList = jsonValue.GetArray("ResourceTypeList");
    for(unsigned resourceTypeListIndex = 0; resourceTypeListIndex < resourceTypeListJsonList.GetLength(); ++resourceTypeListIndex)
    {
      m_resourceTypeList.push_back(resourceTypeListJsonList[resourceTypeListIndex].AsString());
    }
    m_resourceTypeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSet::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_updateTokenHasBeenSet)
  {
   payload.WithString("UpdateToken", m_updateToken);

  }

  if(m_resourceTypeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeListJsonList(m_resourceTypeList.size());
   for(unsigned resourceTypeListIndex = 0; resourceTypeListIndex < resourceTypeListJsonList.GetLength(); ++resourceTypeListIndex)
   {
     resourceTypeListJsonList[resourceTypeListIndex].AsString(m_resourceTypeList[resourceTypeListIndex]);
   }
   payload.WithArray("ResourceTypeList", std::move(resourceTypeListJsonList));

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
