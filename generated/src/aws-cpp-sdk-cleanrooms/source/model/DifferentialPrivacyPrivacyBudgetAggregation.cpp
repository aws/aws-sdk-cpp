/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyPrivacyBudgetAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DifferentialPrivacyPrivacyBudgetAggregation::DifferentialPrivacyPrivacyBudgetAggregation() : 
    m_type(DifferentialPrivacyAggregationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
}

DifferentialPrivacyPrivacyBudgetAggregation::DifferentialPrivacyPrivacyBudgetAggregation(JsonView jsonValue) : 
    m_type(DifferentialPrivacyAggregationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_remainingCount(0),
    m_remainingCountHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacyPrivacyBudgetAggregation& DifferentialPrivacyPrivacyBudgetAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DifferentialPrivacyAggregationTypeMapper::GetDifferentialPrivacyAggregationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCount"))
  {
    m_maxCount = jsonValue.GetInteger("maxCount");

    m_maxCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remainingCount"))
  {
    m_remainingCount = jsonValue.GetInteger("remainingCount");

    m_remainingCountHasBeenSet = true;
  }

  return *this;
}

JsonValue DifferentialPrivacyPrivacyBudgetAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DifferentialPrivacyAggregationTypeMapper::GetNameForDifferentialPrivacyAggregationType(m_type));
  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithInteger("maxCount", m_maxCount);

  }

  if(m_remainingCountHasBeenSet)
  {
   payload.WithInteger("remainingCount", m_remainingCount);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
