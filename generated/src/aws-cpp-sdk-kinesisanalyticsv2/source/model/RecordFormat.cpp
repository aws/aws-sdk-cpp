/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RecordFormat.h>
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

RecordFormat::RecordFormat() : 
    m_recordFormatType(RecordFormatType::NOT_SET),
    m_recordFormatTypeHasBeenSet(false),
    m_mappingParametersHasBeenSet(false)
{
}

RecordFormat::RecordFormat(JsonView jsonValue) : 
    m_recordFormatType(RecordFormatType::NOT_SET),
    m_recordFormatTypeHasBeenSet(false),
    m_mappingParametersHasBeenSet(false)
{
  *this = jsonValue;
}

RecordFormat& RecordFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordFormatType"))
  {
    m_recordFormatType = RecordFormatTypeMapper::GetRecordFormatTypeForName(jsonValue.GetString("RecordFormatType"));

    m_recordFormatTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MappingParameters"))
  {
    m_mappingParameters = jsonValue.GetObject("MappingParameters");

    m_mappingParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordFormat::Jsonize() const
{
  JsonValue payload;

  if(m_recordFormatTypeHasBeenSet)
  {
   payload.WithString("RecordFormatType", RecordFormatTypeMapper::GetNameForRecordFormatType(m_recordFormatType));
  }

  if(m_mappingParametersHasBeenSet)
  {
   payload.WithObject("MappingParameters", m_mappingParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
