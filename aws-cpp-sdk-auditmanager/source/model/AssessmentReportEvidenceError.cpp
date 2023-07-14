/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentReportEvidenceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AssessmentReportEvidenceError::AssessmentReportEvidenceError() : 
    m_evidenceIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

AssessmentReportEvidenceError::AssessmentReportEvidenceError(JsonView jsonValue) : 
    m_evidenceIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentReportEvidenceError& AssessmentReportEvidenceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("evidenceId"))
  {
    m_evidenceId = jsonValue.GetString("evidenceId");

    m_evidenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentReportEvidenceError::Jsonize() const
{
  JsonValue payload;

  if(m_evidenceIdHasBeenSet)
  {
   payload.WithString("evidenceId", m_evidenceId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
