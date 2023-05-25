/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_referenceDataSourceUpdatesHasBeenSet(false),
    m_cloudWatchLoggingOptionUpdatesHasBeenSet(false)
{
}

ApplicationUpdate::ApplicationUpdate(JsonView jsonValue) : 
    m_inputUpdatesHasBeenSet(false),
    m_applicationCodeUpdateHasBeenSet(false),
    m_outputUpdatesHasBeenSet(false),
    m_referenceDataSourceUpdatesHasBeenSet(false),
    m_cloudWatchLoggingOptionUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationUpdate& ApplicationUpdate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ApplicationCodeUpdate"))
  {
    m_applicationCodeUpdate = jsonValue.GetString("ApplicationCodeUpdate");

    m_applicationCodeUpdateHasBeenSet = true;
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

  if(jsonValue.ValueExists("CloudWatchLoggingOptionUpdates"))
  {
    Aws::Utils::Array<JsonView> cloudWatchLoggingOptionUpdatesJsonList = jsonValue.GetArray("CloudWatchLoggingOptionUpdates");
    for(unsigned cloudWatchLoggingOptionUpdatesIndex = 0; cloudWatchLoggingOptionUpdatesIndex < cloudWatchLoggingOptionUpdatesJsonList.GetLength(); ++cloudWatchLoggingOptionUpdatesIndex)
    {
      m_cloudWatchLoggingOptionUpdates.push_back(cloudWatchLoggingOptionUpdatesJsonList[cloudWatchLoggingOptionUpdatesIndex].AsObject());
    }
    m_cloudWatchLoggingOptionUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationUpdate::Jsonize() const
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

  if(m_applicationCodeUpdateHasBeenSet)
  {
   payload.WithString("ApplicationCodeUpdate", m_applicationCodeUpdate);

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

  if(m_cloudWatchLoggingOptionUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cloudWatchLoggingOptionUpdatesJsonList(m_cloudWatchLoggingOptionUpdates.size());
   for(unsigned cloudWatchLoggingOptionUpdatesIndex = 0; cloudWatchLoggingOptionUpdatesIndex < cloudWatchLoggingOptionUpdatesJsonList.GetLength(); ++cloudWatchLoggingOptionUpdatesIndex)
   {
     cloudWatchLoggingOptionUpdatesJsonList[cloudWatchLoggingOptionUpdatesIndex].AsObject(m_cloudWatchLoggingOptionUpdates[cloudWatchLoggingOptionUpdatesIndex].Jsonize());
   }
   payload.WithArray("CloudWatchLoggingOptionUpdates", std::move(cloudWatchLoggingOptionUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
