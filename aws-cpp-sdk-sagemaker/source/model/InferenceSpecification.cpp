﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceSpecification.h>
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

InferenceSpecification::InferenceSpecification() : 
    m_containersHasBeenSet(false),
    m_supportedTransformInstanceTypesHasBeenSet(false),
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedResponseMIMETypesHasBeenSet(false)
{
}

InferenceSpecification::InferenceSpecification(JsonView jsonValue) : 
    m_containersHasBeenSet(false),
    m_supportedTransformInstanceTypesHasBeenSet(false),
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet(false),
    m_supportedContentTypesHasBeenSet(false),
    m_supportedResponseMIMETypesHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceSpecification& InferenceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Containers"))
  {
    Array<JsonView> containersJsonList = jsonValue.GetArray("Containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedTransformInstanceTypes"))
  {
    Array<JsonView> supportedTransformInstanceTypesJsonList = jsonValue.GetArray("SupportedTransformInstanceTypes");
    for(unsigned supportedTransformInstanceTypesIndex = 0; supportedTransformInstanceTypesIndex < supportedTransformInstanceTypesJsonList.GetLength(); ++supportedTransformInstanceTypesIndex)
    {
      m_supportedTransformInstanceTypes.push_back(TransformInstanceTypeMapper::GetTransformInstanceTypeForName(supportedTransformInstanceTypesJsonList[supportedTransformInstanceTypesIndex].AsString()));
    }
    m_supportedTransformInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedRealtimeInferenceInstanceTypes"))
  {
    Array<JsonView> supportedRealtimeInferenceInstanceTypesJsonList = jsonValue.GetArray("SupportedRealtimeInferenceInstanceTypes");
    for(unsigned supportedRealtimeInferenceInstanceTypesIndex = 0; supportedRealtimeInferenceInstanceTypesIndex < supportedRealtimeInferenceInstanceTypesJsonList.GetLength(); ++supportedRealtimeInferenceInstanceTypesIndex)
    {
      m_supportedRealtimeInferenceInstanceTypes.push_back(ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(supportedRealtimeInferenceInstanceTypesJsonList[supportedRealtimeInferenceInstanceTypesIndex].AsString()));
    }
    m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedContentTypes"))
  {
    Array<JsonView> supportedContentTypesJsonList = jsonValue.GetArray("SupportedContentTypes");
    for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
    {
      m_supportedContentTypes.push_back(supportedContentTypesJsonList[supportedContentTypesIndex].AsString());
    }
    m_supportedContentTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedResponseMIMETypes"))
  {
    Array<JsonView> supportedResponseMIMETypesJsonList = jsonValue.GetArray("SupportedResponseMIMETypes");
    for(unsigned supportedResponseMIMETypesIndex = 0; supportedResponseMIMETypesIndex < supportedResponseMIMETypesJsonList.GetLength(); ++supportedResponseMIMETypesIndex)
    {
      m_supportedResponseMIMETypes.push_back(supportedResponseMIMETypesJsonList[supportedResponseMIMETypesIndex].AsString());
    }
    m_supportedResponseMIMETypesHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_containersHasBeenSet)
  {
   Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("Containers", std::move(containersJsonList));

  }

  if(m_supportedTransformInstanceTypesHasBeenSet)
  {
   Array<JsonValue> supportedTransformInstanceTypesJsonList(m_supportedTransformInstanceTypes.size());
   for(unsigned supportedTransformInstanceTypesIndex = 0; supportedTransformInstanceTypesIndex < supportedTransformInstanceTypesJsonList.GetLength(); ++supportedTransformInstanceTypesIndex)
   {
     supportedTransformInstanceTypesJsonList[supportedTransformInstanceTypesIndex].AsString(TransformInstanceTypeMapper::GetNameForTransformInstanceType(m_supportedTransformInstanceTypes[supportedTransformInstanceTypesIndex]));
   }
   payload.WithArray("SupportedTransformInstanceTypes", std::move(supportedTransformInstanceTypesJsonList));

  }

  if(m_supportedRealtimeInferenceInstanceTypesHasBeenSet)
  {
   Array<JsonValue> supportedRealtimeInferenceInstanceTypesJsonList(m_supportedRealtimeInferenceInstanceTypes.size());
   for(unsigned supportedRealtimeInferenceInstanceTypesIndex = 0; supportedRealtimeInferenceInstanceTypesIndex < supportedRealtimeInferenceInstanceTypesJsonList.GetLength(); ++supportedRealtimeInferenceInstanceTypesIndex)
   {
     supportedRealtimeInferenceInstanceTypesJsonList[supportedRealtimeInferenceInstanceTypesIndex].AsString(ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_supportedRealtimeInferenceInstanceTypes[supportedRealtimeInferenceInstanceTypesIndex]));
   }
   payload.WithArray("SupportedRealtimeInferenceInstanceTypes", std::move(supportedRealtimeInferenceInstanceTypesJsonList));

  }

  if(m_supportedContentTypesHasBeenSet)
  {
   Array<JsonValue> supportedContentTypesJsonList(m_supportedContentTypes.size());
   for(unsigned supportedContentTypesIndex = 0; supportedContentTypesIndex < supportedContentTypesJsonList.GetLength(); ++supportedContentTypesIndex)
   {
     supportedContentTypesJsonList[supportedContentTypesIndex].AsString(m_supportedContentTypes[supportedContentTypesIndex]);
   }
   payload.WithArray("SupportedContentTypes", std::move(supportedContentTypesJsonList));

  }

  if(m_supportedResponseMIMETypesHasBeenSet)
  {
   Array<JsonValue> supportedResponseMIMETypesJsonList(m_supportedResponseMIMETypes.size());
   for(unsigned supportedResponseMIMETypesIndex = 0; supportedResponseMIMETypesIndex < supportedResponseMIMETypesJsonList.GetLength(); ++supportedResponseMIMETypesIndex)
   {
     supportedResponseMIMETypesJsonList[supportedResponseMIMETypesIndex].AsString(m_supportedResponseMIMETypes[supportedResponseMIMETypesIndex]);
   }
   payload.WithArray("SupportedResponseMIMETypes", std::move(supportedResponseMIMETypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
