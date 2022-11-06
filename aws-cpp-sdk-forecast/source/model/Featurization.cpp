/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Featurization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

Featurization::Featurization() : 
    m_attributeNameHasBeenSet(false),
    m_featurizationPipelineHasBeenSet(false)
{
}

Featurization::Featurization(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_featurizationPipelineHasBeenSet(false)
{
  *this = jsonValue;
}

Featurization& Featurization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturizationPipeline"))
  {
    Aws::Utils::Array<JsonView> featurizationPipelineJsonList = jsonValue.GetArray("FeaturizationPipeline");
    for(unsigned featurizationPipelineIndex = 0; featurizationPipelineIndex < featurizationPipelineJsonList.GetLength(); ++featurizationPipelineIndex)
    {
      m_featurizationPipeline.push_back(featurizationPipelineJsonList[featurizationPipelineIndex].AsObject());
    }
    m_featurizationPipelineHasBeenSet = true;
  }

  return *this;
}

JsonValue Featurization::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_featurizationPipelineHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featurizationPipelineJsonList(m_featurizationPipeline.size());
   for(unsigned featurizationPipelineIndex = 0; featurizationPipelineIndex < featurizationPipelineJsonList.GetLength(); ++featurizationPipelineIndex)
   {
     featurizationPipelineJsonList[featurizationPipelineIndex].AsObject(m_featurizationPipeline[featurizationPipelineIndex].Jsonize());
   }
   payload.WithArray("FeaturizationPipeline", std::move(featurizationPipelineJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
