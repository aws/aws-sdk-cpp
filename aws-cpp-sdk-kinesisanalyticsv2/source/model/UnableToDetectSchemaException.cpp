/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/UnableToDetectSchemaException.h>
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

UnableToDetectSchemaException::UnableToDetectSchemaException() : 
    m_messageHasBeenSet(false),
    m_rawInputRecordsHasBeenSet(false),
    m_processedInputRecordsHasBeenSet(false)
{
}

UnableToDetectSchemaException::UnableToDetectSchemaException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_rawInputRecordsHasBeenSet(false),
    m_processedInputRecordsHasBeenSet(false)
{
  *this = jsonValue;
}

UnableToDetectSchemaException& UnableToDetectSchemaException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawInputRecords"))
  {
    Aws::Utils::Array<JsonView> rawInputRecordsJsonList = jsonValue.GetArray("RawInputRecords");
    for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
    {
      m_rawInputRecords.push_back(rawInputRecordsJsonList[rawInputRecordsIndex].AsString());
    }
    m_rawInputRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessedInputRecords"))
  {
    Aws::Utils::Array<JsonView> processedInputRecordsJsonList = jsonValue.GetArray("ProcessedInputRecords");
    for(unsigned processedInputRecordsIndex = 0; processedInputRecordsIndex < processedInputRecordsJsonList.GetLength(); ++processedInputRecordsIndex)
    {
      m_processedInputRecords.push_back(processedInputRecordsJsonList[processedInputRecordsIndex].AsString());
    }
    m_processedInputRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue UnableToDetectSchemaException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_rawInputRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rawInputRecordsJsonList(m_rawInputRecords.size());
   for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
   {
     rawInputRecordsJsonList[rawInputRecordsIndex].AsString(m_rawInputRecords[rawInputRecordsIndex]);
   }
   payload.WithArray("RawInputRecords", std::move(rawInputRecordsJsonList));

  }

  if(m_processedInputRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processedInputRecordsJsonList(m_processedInputRecords.size());
   for(unsigned processedInputRecordsIndex = 0; processedInputRecordsIndex < processedInputRecordsJsonList.GetLength(); ++processedInputRecordsIndex)
   {
     processedInputRecordsJsonList[processedInputRecordsIndex].AsString(m_processedInputRecords[processedInputRecordsIndex]);
   }
   payload.WithArray("ProcessedInputRecords", std::move(processedInputRecordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
