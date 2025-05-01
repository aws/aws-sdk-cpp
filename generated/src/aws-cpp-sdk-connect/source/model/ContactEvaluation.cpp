/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactEvaluation.h>
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

ContactEvaluation::ContactEvaluation(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactEvaluation& ContactEvaluation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FormId"))
  {
    m_formId = jsonValue.GetString("FormId");
    m_formIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationArn"))
  {
    m_evaluationArn = jsonValue.GetString("EvaluationArn");
    m_evaluationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTimestamp"))
  {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeleteTimestamp"))
  {
    m_deleteTimestamp = jsonValue.GetDouble("DeleteTimestamp");
    m_deleteTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportLocation"))
  {
    m_exportLocation = jsonValue.GetString("ExportLocation");
    m_exportLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactEvaluation::Jsonize() const
{
  JsonValue payload;

  if(m_formIdHasBeenSet)
  {
   payload.WithString("FormId", m_formId);

  }

  if(m_evaluationArnHasBeenSet)
  {
   payload.WithString("EvaluationArn", m_evaluationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if(m_deleteTimestampHasBeenSet)
  {
   payload.WithDouble("DeleteTimestamp", m_deleteTimestamp.SecondsWithMSPrecision());
  }

  if(m_exportLocationHasBeenSet)
  {
   payload.WithString("ExportLocation", m_exportLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
