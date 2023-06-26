/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchCasesResponseItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SearchCasesResponseItem::SearchCasesResponseItem() : 
    m_caseIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

SearchCasesResponseItem::SearchCasesResponseItem(JsonView jsonValue) : 
    m_caseIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

SearchCasesResponseItem& SearchCasesResponseItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");

    m_caseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
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

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchCasesResponseItem::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

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

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
