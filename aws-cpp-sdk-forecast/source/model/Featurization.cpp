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
    Array<JsonView> featurizationPipelineJsonList = jsonValue.GetArray("FeaturizationPipeline");
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
   Array<JsonValue> featurizationPipelineJsonList(m_featurizationPipeline.size());
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
