/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AbortConfigCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

AbortConfigCriteria::AbortConfigCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

AbortConfigCriteria& AbortConfigCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = AbortCriteriaActionMapper::GetAbortCriteriaActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureType"))
  {
    m_failureType = AbortCriteriaFailureTypeMapper::GetAbortCriteriaFailureTypeForName(jsonValue.GetString("FailureType"));
    m_failureTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinNumberOfExecutedThings"))
  {
    m_minNumberOfExecutedThings = jsonValue.GetInteger("MinNumberOfExecutedThings");
    m_minNumberOfExecutedThingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetDouble("ThresholdPercentage");
    m_thresholdPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue AbortConfigCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", AbortCriteriaActionMapper::GetNameForAbortCriteriaAction(m_action));
  }

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("FailureType", AbortCriteriaFailureTypeMapper::GetNameForAbortCriteriaFailureType(m_failureType));
  }

  if(m_minNumberOfExecutedThingsHasBeenSet)
  {
   payload.WithInteger("MinNumberOfExecutedThings", m_minNumberOfExecutedThings);

  }

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithDouble("ThresholdPercentage", m_thresholdPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
