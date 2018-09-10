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

#include <aws/pinpoint/model/MetricDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MetricDimension::MetricDimension() : 
    m_comparisonOperatorHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

MetricDimension::MetricDimension(JsonView jsonValue) : 
    m_comparisonOperatorHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDimension& MetricDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = jsonValue.GetString("ComparisonOperator");

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDimension::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", m_comparisonOperator);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
