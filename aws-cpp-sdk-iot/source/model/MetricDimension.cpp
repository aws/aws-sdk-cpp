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

#include <aws/iot/model/MetricDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MetricDimension::MetricDimension() : 
    m_dimensionNameHasBeenSet(false),
    m_operator(DimensionValueOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

MetricDimension::MetricDimension(JsonView jsonValue) : 
    m_dimensionNameHasBeenSet(false),
    m_operator(DimensionValueOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDimension& MetricDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensionName"))
  {
    m_dimensionName = jsonValue.GetString("dimensionName");

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = DimensionValueOperatorMapper::GetDimensionValueOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDimension::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("dimensionName", m_dimensionName);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", DimensionValueOperatorMapper::GetNameForDimensionValueOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
