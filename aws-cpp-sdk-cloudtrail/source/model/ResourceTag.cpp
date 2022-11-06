/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ResourceTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

ResourceTag::ResourceTag() : 
    m_resourceIdHasBeenSet(false),
    m_tagsListHasBeenSet(false)
{
}

ResourceTag::ResourceTag(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_tagsListHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTag& ResourceTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagsList"))
  {
    Aws::Utils::Array<JsonView> tagsListJsonList = jsonValue.GetArray("TagsList");
    for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
    {
      m_tagsList.push_back(tagsListJsonList[tagsListIndex].AsObject());
    }
    m_tagsListHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTag::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_tagsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsListJsonList(m_tagsList.size());
   for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
   {
     tagsListJsonList[tagsListIndex].AsObject(m_tagsList[tagsListIndex].Jsonize());
   }
   payload.WithArray("TagsList", std::move(tagsListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
