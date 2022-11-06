/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DataQualityAppSpecification.h>
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

DataQualityAppSpecification::DataQualityAppSpecification() : 
    m_imageUriHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false),
    m_recordPreprocessorSourceUriHasBeenSet(false),
    m_postAnalyticsProcessorSourceUriHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

DataQualityAppSpecification::DataQualityAppSpecification(JsonView jsonValue) : 
    m_imageUriHasBeenSet(false),
    m_containerEntrypointHasBeenSet(false),
    m_containerArgumentsHasBeenSet(false),
    m_recordPreprocessorSourceUriHasBeenSet(false),
    m_postAnalyticsProcessorSourceUriHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityAppSpecification& DataQualityAppSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageUri"))
  {
    m_imageUri = jsonValue.GetString("ImageUri");

    m_imageUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerEntrypoint"))
  {
    Aws::Utils::Array<JsonView> containerEntrypointJsonList = jsonValue.GetArray("ContainerEntrypoint");
    for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
    {
      m_containerEntrypoint.push_back(containerEntrypointJsonList[containerEntrypointIndex].AsString());
    }
    m_containerEntrypointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerArguments"))
  {
    Aws::Utils::Array<JsonView> containerArgumentsJsonList = jsonValue.GetArray("ContainerArguments");
    for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
    {
      m_containerArguments.push_back(containerArgumentsJsonList[containerArgumentsIndex].AsString());
    }
    m_containerArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordPreprocessorSourceUri"))
  {
    m_recordPreprocessorSourceUri = jsonValue.GetString("RecordPreprocessorSourceUri");

    m_recordPreprocessorSourceUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostAnalyticsProcessorSourceUri"))
  {
    m_postAnalyticsProcessorSourceUri = jsonValue.GetString("PostAnalyticsProcessorSourceUri");

    m_postAnalyticsProcessorSourceUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityAppSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("ImageUri", m_imageUri);

  }

  if(m_containerEntrypointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerEntrypointJsonList(m_containerEntrypoint.size());
   for(unsigned containerEntrypointIndex = 0; containerEntrypointIndex < containerEntrypointJsonList.GetLength(); ++containerEntrypointIndex)
   {
     containerEntrypointJsonList[containerEntrypointIndex].AsString(m_containerEntrypoint[containerEntrypointIndex]);
   }
   payload.WithArray("ContainerEntrypoint", std::move(containerEntrypointJsonList));

  }

  if(m_containerArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerArgumentsJsonList(m_containerArguments.size());
   for(unsigned containerArgumentsIndex = 0; containerArgumentsIndex < containerArgumentsJsonList.GetLength(); ++containerArgumentsIndex)
   {
     containerArgumentsJsonList[containerArgumentsIndex].AsString(m_containerArguments[containerArgumentsIndex]);
   }
   payload.WithArray("ContainerArguments", std::move(containerArgumentsJsonList));

  }

  if(m_recordPreprocessorSourceUriHasBeenSet)
  {
   payload.WithString("RecordPreprocessorSourceUri", m_recordPreprocessorSourceUri);

  }

  if(m_postAnalyticsProcessorSourceUriHasBeenSet)
  {
   payload.WithString("PostAnalyticsProcessorSourceUri", m_postAnalyticsProcessorSourceUri);

  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("Environment", std::move(environmentJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
