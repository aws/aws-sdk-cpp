/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/InferenceInputNameConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

InferenceInputNameConfiguration::InferenceInputNameConfiguration() : 
    m_timestampFormatHasBeenSet(false),
    m_componentTimestampDelimiterHasBeenSet(false)
{
}

InferenceInputNameConfiguration::InferenceInputNameConfiguration(JsonView jsonValue) : 
    m_timestampFormatHasBeenSet(false),
    m_componentTimestampDelimiterHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceInputNameConfiguration& InferenceInputNameConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestampFormat"))
  {
    m_timestampFormat = jsonValue.GetString("TimestampFormat");

    m_timestampFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentTimestampDelimiter"))
  {
    m_componentTimestampDelimiter = jsonValue.GetString("ComponentTimestampDelimiter");

    m_componentTimestampDelimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceInputNameConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timestampFormatHasBeenSet)
  {
   payload.WithString("TimestampFormat", m_timestampFormat);

  }

  if(m_componentTimestampDelimiterHasBeenSet)
  {
   payload.WithString("ComponentTimestampDelimiter", m_componentTimestampDelimiter);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
