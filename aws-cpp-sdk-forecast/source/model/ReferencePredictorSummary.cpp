/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ReferencePredictorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ReferencePredictorSummary::ReferencePredictorSummary() : 
    m_arnHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ReferencePredictorSummary::ReferencePredictorSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ReferencePredictorSummary& ReferencePredictorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferencePredictorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
