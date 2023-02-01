/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationDescription.h>
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

SqlApplicationConfigurationDescription::SqlApplicationConfigurationDescription() : 
    m_inputDescriptionsHasBeenSet(false),
    m_outputDescriptionsHasBeenSet(false),
    m_referenceDataSourceDescriptionsHasBeenSet(false)
{
}

SqlApplicationConfigurationDescription::SqlApplicationConfigurationDescription(JsonView jsonValue) : 
    m_inputDescriptionsHasBeenSet(false),
    m_outputDescriptionsHasBeenSet(false),
    m_referenceDataSourceDescriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SqlApplicationConfigurationDescription& SqlApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputDescriptions"))
  {
    Aws::Utils::Array<JsonView> inputDescriptionsJsonList = jsonValue.GetArray("InputDescriptions");
    for(unsigned inputDescriptionsIndex = 0; inputDescriptionsIndex < inputDescriptionsJsonList.GetLength(); ++inputDescriptionsIndex)
    {
      m_inputDescriptions.push_back(inputDescriptionsJsonList[inputDescriptionsIndex].AsObject());
    }
    m_inputDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDescriptions"))
  {
    Aws::Utils::Array<JsonView> outputDescriptionsJsonList = jsonValue.GetArray("OutputDescriptions");
    for(unsigned outputDescriptionsIndex = 0; outputDescriptionsIndex < outputDescriptionsJsonList.GetLength(); ++outputDescriptionsIndex)
    {
      m_outputDescriptions.push_back(outputDescriptionsJsonList[outputDescriptionsIndex].AsObject());
    }
    m_outputDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceDataSourceDescriptions"))
  {
    Aws::Utils::Array<JsonView> referenceDataSourceDescriptionsJsonList = jsonValue.GetArray("ReferenceDataSourceDescriptions");
    for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
    {
      m_referenceDataSourceDescriptions.push_back(referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject());
    }
    m_referenceDataSourceDescriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_inputDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputDescriptionsJsonList(m_inputDescriptions.size());
   for(unsigned inputDescriptionsIndex = 0; inputDescriptionsIndex < inputDescriptionsJsonList.GetLength(); ++inputDescriptionsIndex)
   {
     inputDescriptionsJsonList[inputDescriptionsIndex].AsObject(m_inputDescriptions[inputDescriptionsIndex].Jsonize());
   }
   payload.WithArray("InputDescriptions", std::move(inputDescriptionsJsonList));

  }

  if(m_outputDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputDescriptionsJsonList(m_outputDescriptions.size());
   for(unsigned outputDescriptionsIndex = 0; outputDescriptionsIndex < outputDescriptionsJsonList.GetLength(); ++outputDescriptionsIndex)
   {
     outputDescriptionsJsonList[outputDescriptionsIndex].AsObject(m_outputDescriptions[outputDescriptionsIndex].Jsonize());
   }
   payload.WithArray("OutputDescriptions", std::move(outputDescriptionsJsonList));

  }

  if(m_referenceDataSourceDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceDataSourceDescriptionsJsonList(m_referenceDataSourceDescriptions.size());
   for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
   {
     referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject(m_referenceDataSourceDescriptions[referenceDataSourceDescriptionsIndex].Jsonize());
   }
   payload.WithArray("ReferenceDataSourceDescriptions", std::move(referenceDataSourceDescriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
