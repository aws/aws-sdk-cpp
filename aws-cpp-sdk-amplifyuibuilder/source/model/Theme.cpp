/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/Theme.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

Theme::Theme() : 
    m_appIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

Theme::Theme(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

Theme& Theme::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
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

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Theme::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("overrides", std::move(overridesJsonList));

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

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
