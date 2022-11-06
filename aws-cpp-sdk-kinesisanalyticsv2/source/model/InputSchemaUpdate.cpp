/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/InputSchemaUpdate.h>
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

InputSchemaUpdate::InputSchemaUpdate() : 
    m_recordFormatUpdateHasBeenSet(false),
    m_recordEncodingUpdateHasBeenSet(false),
    m_recordColumnUpdatesHasBeenSet(false)
{
}

InputSchemaUpdate::InputSchemaUpdate(JsonView jsonValue) : 
    m_recordFormatUpdateHasBeenSet(false),
    m_recordEncodingUpdateHasBeenSet(false),
    m_recordColumnUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

InputSchemaUpdate& InputSchemaUpdate::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> recordColumnUpdatesJsonList = jsonValue.GetArray("RecordColumnUpdates");
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
   Aws::Utils::Array<JsonValue> recordColumnUpdatesJsonList(m_recordColumnUpdates.size());
   for(unsigned recordColumnUpdatesIndex = 0; recordColumnUpdatesIndex < recordColumnUpdatesJsonList.GetLength(); ++recordColumnUpdatesIndex)
   {
     recordColumnUpdatesJsonList[recordColumnUpdatesIndex].AsObject(m_recordColumnUpdates[recordColumnUpdatesIndex].Jsonize());
   }
   payload.WithArray("RecordColumnUpdates", std::move(recordColumnUpdatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
