/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RecommendationJobPayloadConfig.h>
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

RecommendationJobPayloadConfig::RecommendationJobPayloadConfig() : 
    m_samplePayloadUrlHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false)
{
}

RecommendationJobPayloadConfig::RecommendationJobPayloadConfig(JsonView jsonValue) : 
    m_samplePayloadUrlHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationJobPayloadConfig& RecommendationJobPayloadConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SamplePayloadUrl"))
  {
    m_samplePayloadUrl = jsonValue.GetString("SamplePayloadUrl");

    m_samplePayloadUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedContentTypes"))
  {
    Aws::Utils::Array<JsonView> supportedContentTypesJsonList = jsonValue.GetArray("SupportedContentTypes");
    for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
    {
      m_supportedContentTypes.push_back(supportedContentTypesJsonList[supportedContentTypesIndex].AsString());
    }
    m_supportedContentTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationJobPayloadConfig::Jsonize() const
{
  JsonValue payload;

  if(m_samplePayloadUrlHasBeenSet)
  {
   payload.WithString("SamplePayloadUrl", m_samplePayloadUrl);

  }

  if(m_supportedContentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedContentTypesJsonList(m_supportedContentTypes.size());
   for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
   {
     supportedContentTypesJsonList[supportedContentTypesIndex].AsString(m_supportedContentTypes[supportedContentTypesIndex]);
   }
   payload.WithArray("SupportedContentTypes", std::move(supportedContentTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
