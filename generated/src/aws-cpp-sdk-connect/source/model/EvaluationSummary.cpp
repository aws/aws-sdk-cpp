/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationSummary.h>
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

EvaluationSummary::EvaluationSummary() : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationArnHasBeenSet(false),
    m_evaluationFormTitleHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_status(EvaluationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_evaluatorArnHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

EvaluationSummary::EvaluationSummary(JsonView jsonValue) : 
    m_evaluationIdHasBeenSet(false),
    m_evaluationArnHasBeenSet(false),
    m_evaluationFormTitleHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_status(EvaluationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_evaluatorArnHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationSummary& EvaluationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationId"))
  {
    m_evaluationId = jsonValue.GetString("EvaluationId");

    m_evaluationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationArn"))
  {
    m_evaluationArn = jsonValue.GetString("EvaluationArn");

    m_evaluationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormTitle"))
  {
    m_evaluationFormTitle = jsonValue.GetString("EvaluationFormTitle");

    m_evaluationFormTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

    m_evaluationFormIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EvaluationStatusMapper::GetEvaluationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluatorArn"))
  {
    m_evaluatorArn = jsonValue.GetString("EvaluatorArn");

    m_evaluatorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetObject("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationIdHasBeenSet)
  {
   payload.WithString("EvaluationId", m_evaluationId);

  }

  if(m_evaluationArnHasBeenSet)
  {
   payload.WithString("EvaluationArn", m_evaluationArn);

  }

  if(m_evaluationFormTitleHasBeenSet)
  {
   payload.WithString("EvaluationFormTitle", m_evaluationFormTitle);

  }

  if(m_evaluationFormIdHasBeenSet)
  {
   payload.WithString("EvaluationFormId", m_evaluationFormId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EvaluationStatusMapper::GetNameForEvaluationStatus(m_status));
  }

  if(m_evaluatorArnHasBeenSet)
  {
   payload.WithString("EvaluatorArn", m_evaluatorArn);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithObject("Score", m_score.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
