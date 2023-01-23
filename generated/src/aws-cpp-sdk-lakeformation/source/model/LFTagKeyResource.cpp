/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/LFTagKeyResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

LFTagKeyResource::LFTagKeyResource() : 
    m_catalogIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

LFTagKeyResource::LFTagKeyResource(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
  *this = jsonValue;
}

LFTagKeyResource& LFTagKeyResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValues"))
  {
    Aws::Utils::Array<JsonView> tagValuesJsonList = jsonValue.GetArray("TagValues");
    for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
    {
      m_tagValues.push_back(tagValuesJsonList[tagValuesIndex].AsString());
    }
    m_tagValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue LFTagKeyResource::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagValuesJsonList(m_tagValues.size());
   for(unsigned tagValuesIndex = 0; tagValuesIndex < tagValuesJsonList.GetLength(); ++tagValuesIndex)
   {
     tagValuesJsonList[tagValuesIndex].AsString(m_tagValues[tagValuesIndex]);
   }
   payload.WithArray("TagValues", std::move(tagValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
