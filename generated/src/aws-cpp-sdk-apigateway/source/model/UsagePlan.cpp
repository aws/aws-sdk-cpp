/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UsagePlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

UsagePlan::UsagePlan() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_apiStagesHasBeenSet(false),
    m_throttleHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

UsagePlan::UsagePlan(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_apiStagesHasBeenSet(false),
    m_throttleHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

UsagePlan& UsagePlan::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiStages"))
  {
    Aws::Utils::Array<JsonView> apiStagesJsonList = jsonValue.GetArray("apiStages");
    for(unsigned apiStagesIndex = 0; apiStagesIndex < apiStagesJsonList.GetLength(); ++apiStagesIndex)
    {
      m_apiStages.push_back(apiStagesJsonList[apiStagesIndex].AsObject());
    }
    m_apiStagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttle"))
  {
    m_throttle = jsonValue.GetObject("throttle");

    m_throttleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("quota"))
  {
    m_quota = jsonValue.GetObject("quota");

    m_quotaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productCode"))
  {
    m_productCode = jsonValue.GetString("productCode");

    m_productCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue UsagePlan::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_apiStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> apiStagesJsonList(m_apiStages.size());
   for(unsigned apiStagesIndex = 0; apiStagesIndex < apiStagesJsonList.GetLength(); ++apiStagesIndex)
   {
     apiStagesJsonList[apiStagesIndex].AsObject(m_apiStages[apiStagesIndex].Jsonize());
   }
   payload.WithArray("apiStages", std::move(apiStagesJsonList));

  }

  if(m_throttleHasBeenSet)
  {
   payload.WithObject("throttle", m_throttle.Jsonize());

  }

  if(m_quotaHasBeenSet)
  {
   payload.WithObject("quota", m_quota.Jsonize());

  }

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("productCode", m_productCode);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
