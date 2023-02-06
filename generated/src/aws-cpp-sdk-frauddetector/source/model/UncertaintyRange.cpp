/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/UncertaintyRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

UncertaintyRange::UncertaintyRange() : 
    m_lowerBoundValue(0.0),
    m_lowerBoundValueHasBeenSet(false),
    m_upperBoundValue(0.0),
    m_upperBoundValueHasBeenSet(false)
{
}

UncertaintyRange::UncertaintyRange(JsonView jsonValue) : 
    m_lowerBoundValue(0.0),
    m_lowerBoundValueHasBeenSet(false),
    m_upperBoundValue(0.0),
    m_upperBoundValueHasBeenSet(false)
{
  *this = jsonValue;
}

UncertaintyRange& UncertaintyRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lowerBoundValue"))
  {
    m_lowerBoundValue = jsonValue.GetDouble("lowerBoundValue");

    m_lowerBoundValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperBoundValue"))
  {
    m_upperBoundValue = jsonValue.GetDouble("upperBoundValue");

    m_upperBoundValueHasBeenSet = true;
  }

  return *this;
}

JsonValue UncertaintyRange::Jsonize() const
{
  JsonValue payload;

  if(m_lowerBoundValueHasBeenSet)
  {
   payload.WithDouble("lowerBoundValue", m_lowerBoundValue);

  }

  if(m_upperBoundValueHasBeenSet)
  {
   payload.WithDouble("upperBoundValue", m_upperBoundValue);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
