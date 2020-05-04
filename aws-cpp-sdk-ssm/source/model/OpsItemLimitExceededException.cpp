/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ssm/model/OpsItemLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemLimitExceededException::OpsItemLimitExceededException() : 
    m_resourceTypesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

OpsItemLimitExceededException::OpsItemLimitExceededException(JsonView jsonValue) : 
    m_resourceTypesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemLimitExceededException& OpsItemLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
    m_resourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitType"))
  {
    m_limitType = jsonValue.GetString("LimitType");

    m_limitTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypesHasBeenSet)
  {
   Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
   }
   payload.WithArray("ResourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_limitTypeHasBeenSet)
  {
   payload.WithString("LimitType", m_limitType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
