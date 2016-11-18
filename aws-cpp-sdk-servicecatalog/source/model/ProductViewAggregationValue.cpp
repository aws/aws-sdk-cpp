/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProductViewAggregationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProductViewAggregationValue::ProductViewAggregationValue() : 
    m_valueHasBeenSet(false),
    m_approximateCount(0),
    m_approximateCountHasBeenSet(false)
{
}

ProductViewAggregationValue::ProductViewAggregationValue(const JsonValue& jsonValue) : 
    m_valueHasBeenSet(false),
    m_approximateCount(0),
    m_approximateCountHasBeenSet(false)
{
  *this = jsonValue;
}

ProductViewAggregationValue& ProductViewAggregationValue::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateCount"))
  {
    m_approximateCount = jsonValue.GetInteger("ApproximateCount");

    m_approximateCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductViewAggregationValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_approximateCountHasBeenSet)
  {
   payload.WithInteger("ApproximateCount", m_approximateCount);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws