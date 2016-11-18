/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/ApplicationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

ApplicationUpdate::ApplicationUpdate() : 
    m_inputUpdatesHasBeenSet(false),
    m_applicationCodeUpdateHasBeenSet(false),
    m_outputUpdatesHasBeenSet(false),
    m_referenceDataSourceUpdatesHasBeenSet(false)
{
}

ApplicationUpdate::ApplicationUpdate(const JsonValue& jsonValue) : 
    m_inputUpdatesHasBeenSet(false),
    m_applicationCodeUpdateHasBeenSet(false),
    m_outputUpdatesHasBeenSet(false),
    m_referenceDataSourceUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationUpdate& ApplicationUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InputUpdates"))
  {
    Array<JsonValue> inputUpdatesJsonList = jsonValue.GetArray("InputUpdates");
    for(unsigned inputUpdatesIndex = 0; inputUpdatesIndex < inputUpdatesJsonList.GetLength(); ++inputUpdatesIndex)
    {
      m_inputUpdates.push_back(inputUpdatesJsonList[inputUpdatesIndex].AsObject());
    }
    m_inputUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationCodeUpdate"))
  {
    m_applicationCodeUpdate = jsonValue.GetString("ApplicationCodeUpdate");

    m_applicationCodeUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUpdates"))
  {
    Array<JsonValue> outputUpdatesJsonList = jsonValue.GetArray("OutputUpdates");
    for(unsigned outputUpdatesIndex = 0; outputUpdatesIndex < outputUpdatesJsonList.GetLength(); ++outputUpdatesIndex)
    {
      m_outputUpdates.push_back(outputUpdatesJsonList[outputUpdatesIndex].AsObject());
    }
    m_outputUpdatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceDataSourceUpdates"))
  {
    Array<JsonValue> referenceDataSourceUpdatesJsonList = jsonValue.GetArray("ReferenceDataSourceUpdates");
    for(unsigned referenceDataSourceUpdatesIndex = 0; referenceDataSourceUpdatesIndex < referenceDataSourceUpdatesJsonList.GetLength(); ++referenceDataSourceUpdatesIndex)
    {
      m_referenceDataSourceUpdates.push_back(referenceDataSourceUpdatesJsonList[referenceDataSourceUpdatesIndex].AsObject());
    }
    m_referenceDataSourceUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_inputUpdatesHasBeenSet)
  {
   Array<JsonValue> inputUpdatesJsonList(m_inputUpdates.size());
   for(unsigned inputUpdatesIndex = 0; inputUpdatesIndex < inputUpdatesJsonList.GetLength(); ++inputUpdatesIndex)
   {
     inputUpdatesJsonList[inputUpdatesIndex].AsObject(m_inputUpdates[inputUpdatesIndex].Jsonize());
   }
   payload.WithArray("InputUpdates", std::move(inputUpdatesJsonList));

  }

  if(m_applicationCodeUpdateHasBeenSet)
  {
   payload.WithString("ApplicationCodeUpdate", m_applicationCodeUpdate);

  }

  if(m_outputUpdatesHasBeenSet)
  {
   Array<JsonValue> outputUpdatesJsonList(m_outputUpdates.size());
   for(unsigned outputUpdatesIndex = 0; outputUpdatesIndex < outputUpdatesJsonList.GetLength(); ++outputUpdatesIndex)
   {
     outputUpdatesJsonList[outputUpdatesIndex].AsObject(m_outputUpdates[outputUpdatesIndex].Jsonize());
   }
   payload.WithArray("OutputUpdates", std::move(outputUpdatesJsonList));

  }

  if(m_referenceDataSourceUpdatesHasBeenSet)
  {
   Array<JsonValue> referenceDataSourceUpdatesJsonList(m_referenceDataSourceUpdates.size());
   for(unsigned referenceDataSourceUpdatesIndex = 0; referenceDataSourceUpdatesIndex < referenceDataSourceUpdatesJsonList.GetLength(); ++referenceDataSourceUpdatesIndex)
   {
     referenceDataSourceUpdatesJsonList[referenceDataSourceUpdatesIndex].AsObject(m_referenceDataSourceUpdates[referenceDataSourceUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReferenceDataSourceUpdates", std::move(referenceDataSourceUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws