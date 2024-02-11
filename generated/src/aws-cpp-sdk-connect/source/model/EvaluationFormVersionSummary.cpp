/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormVersionSummary.h>
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

EvaluationFormVersionSummary::EvaluationFormVersionSummary() : 
    m_evaluationFormArnHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_status(EvaluationFormVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false)
{
}

EvaluationFormVersionSummary::EvaluationFormVersionSummary(JsonView jsonValue) : 
    m_evaluationFormArnHasBeenSet(false),
    m_evaluationFormIdHasBeenSet(false),
    m_evaluationFormVersion(0),
    m_evaluationFormVersionHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_status(EvaluationFormVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationFormVersionSummary& EvaluationFormVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EvaluationFormArn"))
  {
    m_evaluationFormArn = jsonValue.GetString("EvaluationFormArn");

    m_evaluationFormArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormId"))
  {
    m_evaluationFormId = jsonValue.GetString("EvaluationFormId");

    m_evaluationFormIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationFormVersion"))
  {
    m_evaluationFormVersion = jsonValue.GetInteger("EvaluationFormVersion");

    m_evaluationFormVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locked"))
  {
    m_locked = jsonValue.GetBool("Locked");

    m_lockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EvaluationFormVersionStatusMapper::GetEvaluationFormVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationFormVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_evaluationFormArnHasBeenSet)
  {
   payload.WithString("EvaluationFormArn", m_evaluationFormArn);

  }

  if(m_evaluationFormIdHasBeenSet)
  {
   payload.WithString("EvaluationFormId", m_evaluationFormId);

  }

  if(m_evaluationFormVersionHasBeenSet)
  {
   payload.WithInteger("EvaluationFormVersion", m_evaluationFormVersion);

  }

  if(m_lockedHasBeenSet)
  {
   payload.WithBool("Locked", m_locked);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EvaluationFormVersionStatusMapper::GetNameForEvaluationFormVersionStatus(m_status));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
