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

#include <aws/kinesisanalyticsv2/model/SqlApplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

SqlApplicationConfiguration::SqlApplicationConfiguration() : 
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_referenceDataSourcesHasBeenSet(false)
{
}

SqlApplicationConfiguration::SqlApplicationConfiguration(JsonView jsonValue) : 
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_referenceDataSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

SqlApplicationConfiguration& SqlApplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Inputs"))
  {
    Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsObject());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    Array<JsonView> outputsJsonList = jsonValue.GetArray("Outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceDataSources"))
  {
    Array<JsonView> referenceDataSourcesJsonList = jsonValue.GetArray("ReferenceDataSources");
    for(unsigned referenceDataSourcesIndex = 0; referenceDataSourcesIndex < referenceDataSourcesJsonList.GetLength(); ++referenceDataSourcesIndex)
    {
      m_referenceDataSources.push_back(referenceDataSourcesJsonList[referenceDataSourcesIndex].AsObject());
    }
    m_referenceDataSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlApplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputsHasBeenSet)
  {
   Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsObject(m_inputs[inputsIndex].Jsonize());
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_outputsHasBeenSet)
  {
   Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_referenceDataSourcesHasBeenSet)
  {
   Array<JsonValue> referenceDataSourcesJsonList(m_referenceDataSources.size());
   for(unsigned referenceDataSourcesIndex = 0; referenceDataSourcesIndex < referenceDataSourcesJsonList.GetLength(); ++referenceDataSourcesIndex)
   {
     referenceDataSourcesJsonList[referenceDataSourcesIndex].AsObject(m_referenceDataSources[referenceDataSourcesIndex].Jsonize());
   }
   payload.WithArray("ReferenceDataSources", std::move(referenceDataSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
