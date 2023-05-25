/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalyDateInterval.h>
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

AnomalyDateInterval::AnomalyDateInterval() : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

AnomalyDateInterval::AnomalyDateInterval(JsonView jsonValue) : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

AnomalyDateInterval& AnomalyDateInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetString("EndDate");

    m_endDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AnomalyDateInterval::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
