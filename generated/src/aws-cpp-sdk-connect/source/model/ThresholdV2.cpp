/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ThresholdV2.h>
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

ThresholdV2::ThresholdV2() : 
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
}

ThresholdV2::ThresholdV2(JsonView jsonValue) : 
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
  *this = jsonValue;
}

ThresholdV2& ThresholdV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = jsonValue.GetString("Comparison");

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdValue"))
  {
    m_thresholdValue = jsonValue.GetDouble("ThresholdValue");

    m_thresholdValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ThresholdV2::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("Comparison", m_comparison);

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
