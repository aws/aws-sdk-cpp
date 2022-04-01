/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/CloudWatchDimensionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

CloudWatchDimensionConfiguration::CloudWatchDimensionConfiguration() : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueSource(DimensionValueSource::NOT_SET),
    m_dimensionValueSourceHasBeenSet(false),
    m_defaultDimensionValueHasBeenSet(false)
{
}

CloudWatchDimensionConfiguration::CloudWatchDimensionConfiguration(JsonView jsonValue) : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueSource(DimensionValueSource::NOT_SET),
    m_dimensionValueSourceHasBeenSet(false),
    m_defaultDimensionValueHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchDimensionConfiguration& CloudWatchDimensionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = jsonValue.GetString("DimensionName");

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValueSource"))
  {
    m_dimensionValueSource = DimensionValueSourceMapper::GetDimensionValueSourceForName(jsonValue.GetString("DimensionValueSource"));

    m_dimensionValueSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultDimensionValue"))
  {
    m_defaultDimensionValue = jsonValue.GetString("DefaultDimensionValue");

    m_defaultDimensionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchDimensionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", m_dimensionName);

  }

  if(m_dimensionValueSourceHasBeenSet)
  {
   payload.WithString("DimensionValueSource", DimensionValueSourceMapper::GetNameForDimensionValueSource(m_dimensionValueSource));
  }

  if(m_defaultDimensionValueHasBeenSet)
  {
   payload.WithString("DefaultDimensionValue", m_defaultDimensionValue);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
