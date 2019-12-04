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

#include <aws/sagemaker/model/DebugHookConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DebugHookConfig::DebugHookConfig() : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_hookParametersHasBeenSet(false),
    m_collectionConfigurationsHasBeenSet(false)
{
}

DebugHookConfig::DebugHookConfig(JsonView jsonValue) : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_hookParametersHasBeenSet(false),
    m_collectionConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

DebugHookConfig& DebugHookConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HookParameters"))
  {
    Aws::Map<Aws::String, JsonView> hookParametersJsonMap = jsonValue.GetObject("HookParameters").GetAllObjects();
    for(auto& hookParametersItem : hookParametersJsonMap)
    {
      m_hookParameters[hookParametersItem.first] = hookParametersItem.second.AsString();
    }
    m_hookParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectionConfigurations"))
  {
    Array<JsonView> collectionConfigurationsJsonList = jsonValue.GetArray("CollectionConfigurations");
    for(unsigned collectionConfigurationsIndex = 0; collectionConfigurationsIndex < collectionConfigurationsJsonList.GetLength(); ++collectionConfigurationsIndex)
    {
      m_collectionConfigurations.push_back(collectionConfigurationsJsonList[collectionConfigurationsIndex].AsObject());
    }
    m_collectionConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue DebugHookConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_hookParametersHasBeenSet)
  {
   JsonValue hookParametersJsonMap;
   for(auto& hookParametersItem : m_hookParameters)
   {
     hookParametersJsonMap.WithString(hookParametersItem.first, hookParametersItem.second);
   }
   payload.WithObject("HookParameters", std::move(hookParametersJsonMap));

  }

  if(m_collectionConfigurationsHasBeenSet)
  {
   Array<JsonValue> collectionConfigurationsJsonList(m_collectionConfigurations.size());
   for(unsigned collectionConfigurationsIndex = 0; collectionConfigurationsIndex < collectionConfigurationsJsonList.GetLength(); ++collectionConfigurationsIndex)
   {
     collectionConfigurationsJsonList[collectionConfigurationsIndex].AsObject(m_collectionConfigurations[collectionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("CollectionConfigurations", std::move(collectionConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
