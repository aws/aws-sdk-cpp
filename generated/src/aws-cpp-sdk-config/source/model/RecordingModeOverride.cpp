/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingModeOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RecordingModeOverride::RecordingModeOverride() : 
    m_descriptionHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_recordingFrequency(RecordingFrequency::NOT_SET),
    m_recordingFrequencyHasBeenSet(false)
{
}

RecordingModeOverride::RecordingModeOverride(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_recordingFrequency(RecordingFrequency::NOT_SET),
    m_recordingFrequencyHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingModeOverride& RecordingModeOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("resourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(ResourceTypeMapper::GetResourceTypeForName(resourceTypesJsonList[resourceTypesIndex].AsString()));
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordingFrequency"))
  {
    m_recordingFrequency = RecordingFrequencyMapper::GetRecordingFrequencyForName(jsonValue.GetString("recordingFrequency"));

    m_recordingFrequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingModeOverride::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_resourceTypes[resourceTypesIndex]));
   }
   payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_recordingFrequencyHasBeenSet)
  {
   payload.WithString("recordingFrequency", RecordingFrequencyMapper::GetNameForRecordingFrequency(m_recordingFrequency));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
