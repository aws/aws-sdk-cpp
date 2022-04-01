/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/InterpolatedAssetPropertyValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

InterpolatedAssetPropertyValue::InterpolatedAssetPropertyValue() : 
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

InterpolatedAssetPropertyValue::InterpolatedAssetPropertyValue(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

InterpolatedAssetPropertyValue& InterpolatedAssetPropertyValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetObject("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue InterpolatedAssetPropertyValue::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithObject("timestamp", m_timestamp.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
