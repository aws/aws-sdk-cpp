/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/Exclusions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

Exclusions::Exclusions() : 
    m_excludeBootVolumes(false),
    m_excludeBootVolumesHasBeenSet(false),
    m_excludeVolumeTypesHasBeenSet(false),
    m_excludeTagsHasBeenSet(false)
{
}

Exclusions::Exclusions(JsonView jsonValue) : 
    m_excludeBootVolumes(false),
    m_excludeBootVolumesHasBeenSet(false),
    m_excludeVolumeTypesHasBeenSet(false),
    m_excludeTagsHasBeenSet(false)
{
  *this = jsonValue;
}

Exclusions& Exclusions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExcludeBootVolumes"))
  {
    m_excludeBootVolumes = jsonValue.GetBool("ExcludeBootVolumes");

    m_excludeBootVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeVolumeTypes"))
  {
    Aws::Utils::Array<JsonView> excludeVolumeTypesJsonList = jsonValue.GetArray("ExcludeVolumeTypes");
    for(unsigned excludeVolumeTypesIndex = 0; excludeVolumeTypesIndex < excludeVolumeTypesJsonList.GetLength(); ++excludeVolumeTypesIndex)
    {
      m_excludeVolumeTypes.push_back(excludeVolumeTypesJsonList[excludeVolumeTypesIndex].AsString());
    }
    m_excludeVolumeTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeTags"))
  {
    Aws::Utils::Array<JsonView> excludeTagsJsonList = jsonValue.GetArray("ExcludeTags");
    for(unsigned excludeTagsIndex = 0; excludeTagsIndex < excludeTagsJsonList.GetLength(); ++excludeTagsIndex)
    {
      m_excludeTags.push_back(excludeTagsJsonList[excludeTagsIndex].AsObject());
    }
    m_excludeTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Exclusions::Jsonize() const
{
  JsonValue payload;

  if(m_excludeBootVolumesHasBeenSet)
  {
   payload.WithBool("ExcludeBootVolumes", m_excludeBootVolumes);

  }

  if(m_excludeVolumeTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeVolumeTypesJsonList(m_excludeVolumeTypes.size());
   for(unsigned excludeVolumeTypesIndex = 0; excludeVolumeTypesIndex < excludeVolumeTypesJsonList.GetLength(); ++excludeVolumeTypesIndex)
   {
     excludeVolumeTypesJsonList[excludeVolumeTypesIndex].AsString(m_excludeVolumeTypes[excludeVolumeTypesIndex]);
   }
   payload.WithArray("ExcludeVolumeTypes", std::move(excludeVolumeTypesJsonList));

  }

  if(m_excludeTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeTagsJsonList(m_excludeTags.size());
   for(unsigned excludeTagsIndex = 0; excludeTagsIndex < excludeTagsJsonList.GetLength(); ++excludeTagsIndex)
   {
     excludeTagsJsonList[excludeTagsIndex].AsObject(m_excludeTags[excludeTagsIndex].Jsonize());
   }
   payload.WithArray("ExcludeTags", std::move(excludeTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
