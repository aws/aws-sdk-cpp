/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/TotalImpactFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

TotalImpactFilter::TotalImpactFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TotalImpactFilter& TotalImpactFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericOperator"))
  {
    m_numericOperator = NumericOperatorMapper::GetNumericOperatorForName(jsonValue.GetString("NumericOperator"));
    m_numericOperatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartValue"))
  {
    m_startValue = jsonValue.GetDouble("StartValue");
    m_startValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndValue"))
  {
    m_endValue = jsonValue.GetDouble("EndValue");
    m_endValueHasBeenSet = true;
  }
  return *this;
}

JsonValue TotalImpactFilter::Jsonize() const
{
  JsonValue payload;

  if(m_numericOperatorHasBeenSet)
  {
   payload.WithString("NumericOperator", NumericOperatorMapper::GetNameForNumericOperator(m_numericOperator));
  }

  if(m_startValueHasBeenSet)
  {
   payload.WithDouble("StartValue", m_startValue);

  }

  if(m_endValueHasBeenSet)
  {
   payload.WithDouble("EndValue", m_endValue);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
