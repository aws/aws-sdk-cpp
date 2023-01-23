/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/TimestampPartition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

TimestampPartition::TimestampPartition() : 
    m_attributeNameHasBeenSet(false),
    m_timestampFormatHasBeenSet(false)
{
}

TimestampPartition::TimestampPartition(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_timestampFormatHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampPartition& TimestampPartition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributeName"))
  {
    m_attributeName = jsonValue.GetString("attributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("timestampFormat");

    m_timestampFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampPartition::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", m_attributeName);

  }

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("timestampFormat", m_timestampFormat);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
