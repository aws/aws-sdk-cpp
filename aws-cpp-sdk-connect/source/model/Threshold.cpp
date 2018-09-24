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

#include <aws/connect/model/Threshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Threshold::Threshold() : 
    m_comparison(Comparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
}

Threshold::Threshold(JsonView jsonValue) : 
    m_comparison(Comparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
  *this = jsonValue;
}

Threshold& Threshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = ComparisonMapper::GetComparisonForName(jsonValue.GetString("Comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdValue"))
  {
    m_thresholdValue = jsonValue.GetDouble("ThresholdValue");

    m_thresholdValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Threshold::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("Comparison", ComparisonMapper::GetNameForComparison(m_comparison));
  }

  if(m_thresholdValueHasBeenSet)
  {
   payload.WithDouble("ThresholdValue", m_thresholdValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
