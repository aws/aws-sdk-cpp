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
#include <aws/kinesisanalytics/model/DestinationSchema.h>
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

DestinationSchema::DestinationSchema() : 
    m_recordFormatType(RecordFormatType::NOT_SET),
    m_recordFormatTypeHasBeenSet(false)
{
}

DestinationSchema::DestinationSchema(const JsonValue& jsonValue) : 
    m_recordFormatType(RecordFormatType::NOT_SET),
    m_recordFormatTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationSchema& DestinationSchema::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("RecordFormatType"))
  {
    m_recordFormatType = RecordFormatTypeMapper::GetRecordFormatTypeForName(jsonValue.GetString("RecordFormatType"));

    m_recordFormatTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationSchema::Jsonize() const
{
  JsonValue payload;

  if(m_recordFormatTypeHasBeenSet)
  {
   payload.WithString("RecordFormatType", RecordFormatTypeMapper::GetNameForRecordFormatType(m_recordFormatType));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws