/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Stats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

Stats::Stats(JsonView jsonValue)
{
  *this = jsonValue;
}

Stats& Stats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetDouble("min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetDouble("max");
    m_maxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("avg"))
  {
    m_avg = jsonValue.GetDouble("avg");
    m_avgHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");
    m_sumHasBeenSet = true;
  }
  return *this;
}

JsonValue Stats::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithDouble("min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("max", m_max);

  }

  if(m_avgHasBeenSet)
  {
   payload.WithDouble("avg", m_avg);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
