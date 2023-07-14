/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DestinationSchema::DestinationSchema(JsonView jsonValue) : 
    m_recordFormatType(RecordFormatType::NOT_SET),
    m_recordFormatTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationSchema& DestinationSchema::operator =(JsonView jsonValue)
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
