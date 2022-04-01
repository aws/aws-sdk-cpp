/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/Cost.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

Cost::Cost() : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_frequency(CostFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
}

Cost::Cost(JsonView jsonValue) : 
    m_amount(0.0),
    m_amountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_frequency(CostFrequency::NOT_SET),
    m_frequencyHasBeenSet(false)
{
  *this = jsonValue;
}

Cost& Cost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currency"))
  {
    m_currency = jsonValue.GetString("currency");

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = CostFrequencyMapper::GetCostFrequencyForName(jsonValue.GetString("frequency"));

    m_frequencyHasBeenSet = true;
  }

  return *this;
}

JsonValue Cost::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", m_currency);

  }

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", CostFrequencyMapper::GetNameForCostFrequency(m_frequency));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
