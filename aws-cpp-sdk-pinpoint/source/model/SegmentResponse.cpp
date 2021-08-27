/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentResponse::SegmentResponse() : 
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_importDefinitionHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false),
    m_segmentType(SegmentType::NOT_SET),
    m_segmentTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

SegmentResponse::SegmentResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_importDefinitionHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false),
    m_segmentType(SegmentType::NOT_SET),
    m_segmentTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentResponse& SegmentResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportDefinition"))
  {
    m_importDefinition = jsonValue.GetObject("ImportDefinition");

    m_importDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentGroups"))
  {
    m_segmentGroups = jsonValue.GetObject("SegmentGroups");

    m_segmentGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentType"))
  {
    m_segmentType = SegmentTypeMapper::GetSegmentTypeForName(jsonValue.GetString("SegmentType"));

    m_segmentTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_importDefinitionHasBeenSet)
  {
   payload.WithObject("ImportDefinition", m_importDefinition.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_segmentGroupsHasBeenSet)
  {
   payload.WithObject("SegmentGroups", m_segmentGroups.Jsonize());

  }

  if(m_segmentTypeHasBeenSet)
  {
   payload.WithString("SegmentType", SegmentTypeMapper::GetNameForSegmentType(m_segmentType));
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

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
