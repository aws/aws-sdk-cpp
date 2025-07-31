/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/SeverityCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

SeverityCounts::SeverityCounts(JsonView jsonValue)
{
  *this = jsonValue;
}

SeverityCounts& SeverityCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("all"))
  {
    m_all = jsonValue.GetInt64("all");
    m_allHasBeenSet = true;
  }
  if(jsonValue.ValueExists("medium"))
  {
    m_medium = jsonValue.GetInt64("medium");
    m_mediumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("high"))
  {
    m_high = jsonValue.GetInt64("high");
    m_highHasBeenSet = true;
  }
  if(jsonValue.ValueExists("critical"))
  {
    m_critical = jsonValue.GetInt64("critical");
    m_criticalHasBeenSet = true;
  }
  return *this;
}

JsonValue SeverityCounts::Jsonize() const
{
  JsonValue payload;

  if(m_allHasBeenSet)
  {
   payload.WithInt64("all", m_all);

  }

  if(m_mediumHasBeenSet)
  {
   payload.WithInt64("medium", m_medium);

  }

  if(m_highHasBeenSet)
  {
   payload.WithInt64("high", m_high);

  }

  if(m_criticalHasBeenSet)
  {
   payload.WithInt64("critical", m_critical);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
