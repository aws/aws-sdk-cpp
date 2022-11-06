/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingGroup.h>
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

RecordingGroup::RecordingGroup() : 
    m_allSupported(false),
    m_allSupportedHasBeenSet(false),
    m_includeGlobalResourceTypes(false),
    m_includeGlobalResourceTypesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

RecordingGroup::RecordingGroup(JsonView jsonValue) : 
    m_allSupported(false),
    m_allSupportedHasBeenSet(false),
    m_includeGlobalResourceTypes(false),
    m_includeGlobalResourceTypesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingGroup& RecordingGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allSupported"))
  {
    m_allSupported = jsonValue.GetBool("allSupported");

    m_allSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeGlobalResourceTypes"))
  {
    m_includeGlobalResourceTypes = jsonValue.GetBool("includeGlobalResourceTypes");

    m_includeGlobalResourceTypesHasBeenSet = true;
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

  return *this;
}

JsonValue RecordingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_allSupportedHasBeenSet)
  {
   payload.WithBool("allSupported", m_allSupported);

  }

  if(m_includeGlobalResourceTypesHasBeenSet)
  {
   payload.WithBool("includeGlobalResourceTypes", m_includeGlobalResourceTypes);

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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
