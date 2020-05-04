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

#include <aws/kinesisanalytics/model/UnableToDetectSchemaException.h>
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
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawInputRecords"))
  {
    Array<JsonView> rawInputRecordsJsonList = jsonValue.GetArray("RawInputRecords");
    for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
    {
      m_rawInputRecords.push_back(rawInputRecordsJsonList[rawInputRecordsIndex].AsString());
    }
    m_rawInputRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessedInputRecords"))
  {
    Array<JsonView> processedInputRecordsJsonList = jsonValue.GetArray("ProcessedInputRecords");
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
   payload.WithString("message", m_message);

  }

  if(m_rawInputRecordsHasBeenSet)
  {
   Array<JsonValue> rawInputRecordsJsonList(m_rawInputRecords.size());
   for(unsigned rawInputRecordsIndex = 0; rawInputRecordsIndex < rawInputRecordsJsonList.GetLength(); ++rawInputRecordsIndex)
   {
     rawInputRecordsJsonList[rawInputRecordsIndex].AsString(m_rawInputRecords[rawInputRecordsIndex]);
   }
   payload.WithArray("RawInputRecords", std::move(rawInputRecordsJsonList));

  }

  if(m_processedInputRecordsHasBeenSet)
  {
   Array<JsonValue> processedInputRecordsJsonList(m_processedInputRecords.size());
   for(unsigned processedInputRecordsIndex = 0; processedInputRecordsIndex < processedInputRecordsJsonList.GetLength(); ++processedInputRecordsIndex)
   {
     processedInputRecordsJsonList[processedInputRecordsIndex].AsString(m_processedInputRecords[processedInputRecordsIndex]);
   }
   payload.WithArray("ProcessedInputRecords", std::move(processedInputRecordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
