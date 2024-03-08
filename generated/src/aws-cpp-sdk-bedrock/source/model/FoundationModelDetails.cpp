/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/FoundationModelDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

FoundationModelDetails::FoundationModelDetails() : 
    m_modelArnHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_outputModalitiesHasBeenSet(false),
    m_responseStreamingSupported(false),
    m_responseStreamingSupportedHasBeenSet(false),
    m_customizationsSupportedHasBeenSet(false),
    m_inferenceTypesSupportedHasBeenSet(false),
    m_modelLifecycleHasBeenSet(false)
{
}

FoundationModelDetails::FoundationModelDetails(JsonView jsonValue) : 
    m_modelArnHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_outputModalitiesHasBeenSet(false),
    m_responseStreamingSupported(false),
    m_responseStreamingSupportedHasBeenSet(false),
    m_customizationsSupportedHasBeenSet(false),
    m_inferenceTypesSupportedHasBeenSet(false),
    m_modelLifecycleHasBeenSet(false)
{
  *this = jsonValue;
}

FoundationModelDetails& FoundationModelDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputModalities"))
  {
    Aws::Utils::Array<JsonView> inputModalitiesJsonList = jsonValue.GetArray("inputModalities");
    for(unsigned inputModalitiesIndex = 0; inputModalitiesIndex < inputModalitiesJsonList.GetLength(); ++inputModalitiesIndex)
    {
      m_inputModalities.push_back(ModelModalityMapper::GetModelModalityForName(inputModalitiesJsonList[inputModalitiesIndex].AsString()));
    }
    m_inputModalitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputModalities"))
  {
    Aws::Utils::Array<JsonView> outputModalitiesJsonList = jsonValue.GetArray("outputModalities");
    for(unsigned outputModalitiesIndex = 0; outputModalitiesIndex < outputModalitiesJsonList.GetLength(); ++outputModalitiesIndex)
    {
      m_outputModalities.push_back(ModelModalityMapper::GetModelModalityForName(outputModalitiesJsonList[outputModalitiesIndex].AsString()));
    }
    m_outputModalitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseStreamingSupported"))
  {
    m_responseStreamingSupported = jsonValue.GetBool("responseStreamingSupported");

    m_responseStreamingSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customizationsSupported"))
  {
    Aws::Utils::Array<JsonView> customizationsSupportedJsonList = jsonValue.GetArray("customizationsSupported");
    for(unsigned customizationsSupportedIndex = 0; customizationsSupportedIndex < customizationsSupportedJsonList.GetLength(); ++customizationsSupportedIndex)
    {
      m_customizationsSupported.push_back(ModelCustomizationMapper::GetModelCustomizationForName(customizationsSupportedJsonList[customizationsSupportedIndex].AsString()));
    }
    m_customizationsSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceTypesSupported"))
  {
    Aws::Utils::Array<JsonView> inferenceTypesSupportedJsonList = jsonValue.GetArray("inferenceTypesSupported");
    for(unsigned inferenceTypesSupportedIndex = 0; inferenceTypesSupportedIndex < inferenceTypesSupportedJsonList.GetLength(); ++inferenceTypesSupportedIndex)
    {
      m_inferenceTypesSupported.push_back(InferenceTypeMapper::GetInferenceTypeForName(inferenceTypesSupportedJsonList[inferenceTypesSupportedIndex].AsString()));
    }
    m_inferenceTypesSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelLifecycle"))
  {
    m_modelLifecycle = jsonValue.GetObject("modelLifecycle");

    m_modelLifecycleHasBeenSet = true;
  }

  return *this;
}

JsonValue FoundationModelDetails::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_inputModalitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputModalitiesJsonList(m_inputModalities.size());
   for(unsigned inputModalitiesIndex = 0; inputModalitiesIndex < inputModalitiesJsonList.GetLength(); ++inputModalitiesIndex)
   {
     inputModalitiesJsonList[inputModalitiesIndex].AsString(ModelModalityMapper::GetNameForModelModality(m_inputModalities[inputModalitiesIndex]));
   }
   payload.WithArray("inputModalities", std::move(inputModalitiesJsonList));

  }

  if(m_outputModalitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputModalitiesJsonList(m_outputModalities.size());
   for(unsigned outputModalitiesIndex = 0; outputModalitiesIndex < outputModalitiesJsonList.GetLength(); ++outputModalitiesIndex)
   {
     outputModalitiesJsonList[outputModalitiesIndex].AsString(ModelModalityMapper::GetNameForModelModality(m_outputModalities[outputModalitiesIndex]));
   }
   payload.WithArray("outputModalities", std::move(outputModalitiesJsonList));

  }

  if(m_responseStreamingSupportedHasBeenSet)
  {
   payload.WithBool("responseStreamingSupported", m_responseStreamingSupported);

  }

  if(m_customizationsSupportedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customizationsSupportedJsonList(m_customizationsSupported.size());
   for(unsigned customizationsSupportedIndex = 0; customizationsSupportedIndex < customizationsSupportedJsonList.GetLength(); ++customizationsSupportedIndex)
   {
     customizationsSupportedJsonList[customizationsSupportedIndex].AsString(ModelCustomizationMapper::GetNameForModelCustomization(m_customizationsSupported[customizationsSupportedIndex]));
   }
   payload.WithArray("customizationsSupported", std::move(customizationsSupportedJsonList));

  }

  if(m_inferenceTypesSupportedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferenceTypesSupportedJsonList(m_inferenceTypesSupported.size());
   for(unsigned inferenceTypesSupportedIndex = 0; inferenceTypesSupportedIndex < inferenceTypesSupportedJsonList.GetLength(); ++inferenceTypesSupportedIndex)
   {
     inferenceTypesSupportedJsonList[inferenceTypesSupportedIndex].AsString(InferenceTypeMapper::GetNameForInferenceType(m_inferenceTypesSupported[inferenceTypesSupportedIndex]));
   }
   payload.WithArray("inferenceTypesSupported", std::move(inferenceTypesSupportedJsonList));

  }

  if(m_modelLifecycleHasBeenSet)
  {
   payload.WithObject("modelLifecycle", m_modelLifecycle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
