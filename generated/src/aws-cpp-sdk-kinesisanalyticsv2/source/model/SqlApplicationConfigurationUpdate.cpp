/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/SqlApplicationConfigurationUpdate.h>
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

SqlApplicationConfigurationUpdate::SqlApplicationConfigurationUpdate() : 
    m_inputUpdatesHasBeenSet(false),
    m_outputUpdatesHasBeenSet(false),
    m_referenceDataSourceUpdatesHasBeenSet(false)
{
}

SqlApplicationConfigurationUpdate::SqlApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_inputUpdatesHasBeenSet(false),
    m_outputUpdatesHasBeenSet(false),
    m_referenceDataSourceUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

SqlApplicationConfigurationUpdate& SqlApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputUpdates"))
  {
    Aws::Utils::Array<JsonView> inputUpdatesJsonList = jsonValue.GetArray("InputUpdates");
    for(unsigned inputUpdatesIndex = 0; inputUpdatesIndex < inputUpdatesJsonList.GetLength(); ++inputUpdatesIndex)
    {
      m_inputUpdates.push_back(inputUpdatesJsonList[inputUpdatesIndex].AsObject());
    }
    m_inputUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUpdates"))
  {
    Aws::Utils::Array<JsonView> outputUpdatesJsonList = jsonValue.GetArray("OutputUpdates");
    for(unsigned outputUpdatesIndex = 0; outputUpdatesIndex < outputUpdatesJsonList.GetLength(); ++outputUpdatesIndex)
    {
      m_outputUpdates.push_back(outputUpdatesJsonList[outputUpdatesIndex].AsObject());
    }
    m_outputUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceDataSourceUpdates"))
  {
    Aws::Utils::Array<JsonView> referenceDataSourceUpdatesJsonList = jsonValue.GetArray("ReferenceDataSourceUpdates");
    for(unsigned referenceDataSourceUpdatesIndex = 0; referenceDataSourceUpdatesIndex < referenceDataSourceUpdatesJsonList.GetLength(); ++referenceDataSourceUpdatesIndex)
    {
      m_referenceDataSourceUpdates.push_back(referenceDataSourceUpdatesJsonList[referenceDataSourceUpdatesIndex].AsObject());
    }
    m_referenceDataSourceUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_inputUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputUpdatesJsonList(m_inputUpdates.size());
   for(unsigned inputUpdatesIndex = 0; inputUpdatesIndex < inputUpdatesJsonList.GetLength(); ++inputUpdatesIndex)
   {
     inputUpdatesJsonList[inputUpdatesIndex].AsObject(m_inputUpdates[inputUpdatesIndex].Jsonize());
   }
   payload.WithArray("InputUpdates", std::move(inputUpdatesJsonList));

  }

  if(m_outputUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputUpdatesJsonList(m_outputUpdates.size());
   for(unsigned outputUpdatesIndex = 0; outputUpdatesIndex < outputUpdatesJsonList.GetLength(); ++outputUpdatesIndex)
   {
     outputUpdatesJsonList[outputUpdatesIndex].AsObject(m_outputUpdates[outputUpdatesIndex].Jsonize());
   }
   payload.WithArray("OutputUpdates", std::move(outputUpdatesJsonList));

  }

  if(m_referenceDataSourceUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referenceDataSourceUpdatesJsonList(m_referenceDataSourceUpdates.size());
   for(unsigned referenceDataSourceUpdatesIndex = 0; referenceDataSourceUpdatesIndex < referenceDataSourceUpdatesJsonList.GetLength(); ++referenceDataSourceUpdatesIndex)
   {
     referenceDataSourceUpdatesJsonList[referenceDataSourceUpdatesIndex].AsObject(m_referenceDataSourceUpdates[referenceDataSourceUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReferenceDataSourceUpdates", std::move(referenceDataSourceUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
