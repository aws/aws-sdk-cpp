/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlError.h>
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

BatchImportEvidenceToAssessmentControlError::BatchImportEvidenceToAssessmentControlError() : 
    m_manualEvidenceHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchImportEvidenceToAssessmentControlError::BatchImportEvidenceToAssessmentControlError(JsonView jsonValue) : 
    m_manualEvidenceHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchImportEvidenceToAssessmentControlError& BatchImportEvidenceToAssessmentControlError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("manualEvidence"))
  {
    m_manualEvidence = jsonValue.GetObject("manualEvidence");

    m_manualEvidenceHasBeenSet = true;
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

JsonValue BatchImportEvidenceToAssessmentControlError::Jsonize() const
{
  JsonValue payload;

  if(m_manualEvidenceHasBeenSet)
  {
   payload.WithObject("manualEvidence", m_manualEvidence.Jsonize());

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
