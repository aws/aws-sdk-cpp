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
#include <aws/kinesisanalytics/model/SourceSchema.h>
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

SourceSchema::SourceSchema() : 
    m_recordFormatHasBeenSet(false),
    m_recordEncodingHasBeenSet(false),
    m_recordColumnsHasBeenSet(false)
{
}

SourceSchema::SourceSchema(const JsonValue& jsonValue) : 
    m_recordFormatHasBeenSet(false),
    m_recordEncodingHasBeenSet(false),
    m_recordColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceSchema& SourceSchema::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordFormat"))
  {
    m_recordFormat = jsonValue.GetObject("RecordFormat");

    m_recordFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordEncoding"))
  {
    m_recordEncoding = jsonValue.GetString("RecordEncoding");

    m_recordEncodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordColumns"))
  {
    Array<JsonValue> recordColumnsJsonList = jsonValue.GetArray("RecordColumns");
    for(unsigned recordColumnsIndex = 0; recordColumnsIndex < recordColumnsJsonList.GetLength(); ++recordColumnsIndex)
    {
      m_recordColumns.push_back(recordColumnsJsonList[recordColumnsIndex].AsObject());
    }
    m_recordColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceSchema::Jsonize() const
{
  JsonValue payload;

  if(m_recordFormatHasBeenSet)
  {
   payload.WithObject("RecordFormat", m_recordFormat.Jsonize());

  }

  if(m_recordEncodingHasBeenSet)
  {
   payload.WithString("RecordEncoding", m_recordEncoding);

  }

  if(m_recordColumnsHasBeenSet)
  {
   Array<JsonValue> recordColumnsJsonList(m_recordColumns.size());
   for(unsigned recordColumnsIndex = 0; recordColumnsIndex < recordColumnsJsonList.GetLength(); ++recordColumnsIndex)
   {
     recordColumnsJsonList[recordColumnsIndex].AsObject(m_recordColumns[recordColumnsIndex].Jsonize());
   }
   payload.WithArray("RecordColumns", std::move(recordColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws