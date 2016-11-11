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
#include <aws/kinesisanalytics/model/InputSchemaUpdate.h>
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

InputSchemaUpdate::InputSchemaUpdate() : 
    m_recordFormatUpdateHasBeenSet(false),
    m_recordEncodingUpdateHasBeenSet(false),
    m_recordColumnUpdatesHasBeenSet(false)
{
}

InputSchemaUpdate::InputSchemaUpdate(const JsonValue& jsonValue) : 
    m_recordFormatUpdateHasBeenSet(false),
    m_recordEncodingUpdateHasBeenSet(false),
    m_recordColumnUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

InputSchemaUpdate& InputSchemaUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordFormatUpdate"))
  {
    m_recordFormatUpdate = jsonValue.GetObject("RecordFormatUpdate");

    m_recordFormatUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordEncodingUpdate"))
  {
    m_recordEncodingUpdate = jsonValue.GetString("RecordEncodingUpdate");

    m_recordEncodingUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordColumnUpdates"))
  {
    Array<JsonValue> recordColumnUpdatesJsonList = jsonValue.GetArray("RecordColumnUpdates");
    for(unsigned recordColumnUpdatesIndex = 0; recordColumnUpdatesIndex < recordColumnUpdatesJsonList.GetLength(); ++recordColumnUpdatesIndex)
    {
      m_recordColumnUpdates.push_back(recordColumnUpdatesJsonList[recordColumnUpdatesIndex].AsObject());
    }
    m_recordColumnUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSchemaUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_recordFormatUpdateHasBeenSet)
  {
   payload.WithObject("RecordFormatUpdate", m_recordFormatUpdate.Jsonize());

  }

  if(m_recordEncodingUpdateHasBeenSet)
  {
   payload.WithString("RecordEncodingUpdate", m_recordEncodingUpdate);

  }

  if(m_recordColumnUpdatesHasBeenSet)
  {
   Array<JsonValue> recordColumnUpdatesJsonList(m_recordColumnUpdates.size());
   for(unsigned recordColumnUpdatesIndex = 0; recordColumnUpdatesIndex < recordColumnUpdatesJsonList.GetLength(); ++recordColumnUpdatesIndex)
   {
     recordColumnUpdatesJsonList[recordColumnUpdatesIndex].AsObject(m_recordColumnUpdates[recordColumnUpdatesIndex].Jsonize());
   }
   payload.WithArray("RecordColumnUpdates", std::move(recordColumnUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws