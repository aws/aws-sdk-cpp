/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

RecordingGroup::RecordingGroup(const JsonValue& jsonValue) : 
    m_allSupported(false),
    m_allSupportedHasBeenSet(false),
    m_includeGlobalResourceTypes(false),
    m_includeGlobalResourceTypesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingGroup& RecordingGroup::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> resourceTypesJsonList = jsonValue.GetArray("resourceTypes");
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
   Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
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