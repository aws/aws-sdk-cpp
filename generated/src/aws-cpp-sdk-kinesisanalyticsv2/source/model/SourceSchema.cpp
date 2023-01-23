/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/SourceSchema.h>
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

SourceSchema::SourceSchema() : 
    m_recordFormatHasBeenSet(false),
    m_recordEncodingHasBeenSet(false),
    m_recordColumnsHasBeenSet(false)
{
}

SourceSchema::SourceSchema(JsonView jsonValue) : 
    m_recordFormatHasBeenSet(false),
    m_recordEncodingHasBeenSet(false),
    m_recordColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceSchema& SourceSchema::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> recordColumnsJsonList = jsonValue.GetArray("RecordColumns");
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
   Aws::Utils::Array<JsonValue> recordColumnsJsonList(m_recordColumns.size());
   for(unsigned recordColumnsIndex = 0; recordColumnsIndex < recordColumnsJsonList.GetLength(); ++recordColumnsIndex)
   {
     recordColumnsJsonList[recordColumnsIndex].AsObject(m_recordColumns[recordColumnsIndex].Jsonize());
   }
   payload.WithArray("RecordColumns", std::move(recordColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
