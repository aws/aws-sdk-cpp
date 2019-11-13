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

#include <aws/sesv2/model/CloudWatchDimensionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
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
} // namespace SESV2
} // namespace Aws
