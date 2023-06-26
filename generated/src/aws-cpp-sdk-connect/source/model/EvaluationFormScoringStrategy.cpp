/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EvaluationFormScoringStrategy::EvaluationFormScoringStrategy() : 
    m_mode(EvaluationFormScoringMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_status(EvaluationFormScoringStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EvaluationFormScoringStrategy::EvaluationFormScoringStrategy(JsonView jsonValue) : 
    m_mode(EvaluationFormScoringMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_status(EvaluationFormScoringStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormScoringStrategy& EvaluationFormScoringStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = EvaluationFormScoringModeMapper::GetEvaluationFormScoringModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EvaluationFormScoringStatusMapper::GetEvaluationFormScoringStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormScoringStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", EvaluationFormScoringModeMapper::GetNameForEvaluationFormScoringMode(m_mode));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EvaluationFormScoringStatusMapper::GetNameForEvaluationFormScoringStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
