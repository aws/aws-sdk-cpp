/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CdcSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

CdcSpecification::CdcSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

CdcSpecification& CdcSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = CdcStatusMapper::GetCdcStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("viewType"))
  {
    m_viewType = ViewTypeMapper::GetViewTypeForName(jsonValue.GetString("viewType"));
    m_viewTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propagateTags"))
  {
    m_propagateTags = CdcPropagateTagsMapper::GetCdcPropagateTagsForName(jsonValue.GetString("propagateTags"));
    m_propagateTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue CdcSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CdcStatusMapper::GetNameForCdcStatus(m_status));
  }

  if(m_viewTypeHasBeenSet)
  {
   payload.WithString("viewType", ViewTypeMapper::GetNameForViewType(m_viewType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("propagateTags", CdcPropagateTagsMapper::GetNameForCdcPropagateTags(m_propagateTags));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
