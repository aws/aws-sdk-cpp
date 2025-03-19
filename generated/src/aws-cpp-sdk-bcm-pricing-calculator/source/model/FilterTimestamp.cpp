/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/FilterTimestamp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

FilterTimestamp::FilterTimestamp(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterTimestamp& FilterTimestamp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afterTimestamp"))
  {
    m_afterTimestamp = jsonValue.GetDouble("afterTimestamp");
    m_afterTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("beforeTimestamp"))
  {
    m_beforeTimestamp = jsonValue.GetDouble("beforeTimestamp");
    m_beforeTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterTimestamp::Jsonize() const
{
  JsonValue payload;

  if(m_afterTimestampHasBeenSet)
  {
   payload.WithDouble("afterTimestamp", m_afterTimestamp.SecondsWithMSPrecision());
  }

  if(m_beforeTimestampHasBeenSet)
  {
   payload.WithDouble("beforeTimestamp", m_beforeTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
