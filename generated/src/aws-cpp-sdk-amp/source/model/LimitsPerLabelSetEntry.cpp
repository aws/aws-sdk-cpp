/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LimitsPerLabelSetEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

LimitsPerLabelSetEntry::LimitsPerLabelSetEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

LimitsPerLabelSetEntry& LimitsPerLabelSetEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxSeries"))
  {
    m_maxSeries = jsonValue.GetInt64("maxSeries");
    m_maxSeriesHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitsPerLabelSetEntry::Jsonize() const
{
  JsonValue payload;

  if(m_maxSeriesHasBeenSet)
  {
   payload.WithInt64("maxSeries", m_maxSeries);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
