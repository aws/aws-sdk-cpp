/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/CountPercent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

CountPercent::CountPercent() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_percentage(0.0),
    m_percentageHasBeenSet(false)
{
}

CountPercent::CountPercent(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_percentage(0.0),
    m_percentageHasBeenSet(false)
{
  *this = jsonValue;
}

CountPercent& CountPercent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Percentage"))
  {
    m_percentage = jsonValue.GetDouble("Percentage");

    m_percentageHasBeenSet = true;
  }

  return *this;
}

JsonValue CountPercent::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_percentageHasBeenSet)
  {
   payload.WithDouble("Percentage", m_percentage);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
