/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentError.h>
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

BatchDeleteDelegationByAssessmentError::BatchDeleteDelegationByAssessmentError() : 
    m_delegationIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchDeleteDelegationByAssessmentError::BatchDeleteDelegationByAssessmentError(JsonView jsonValue) : 
    m_delegationIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteDelegationByAssessmentError& BatchDeleteDelegationByAssessmentError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("delegationId"))
  {
    m_delegationId = jsonValue.GetString("delegationId");

    m_delegationIdHasBeenSet = true;
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

JsonValue BatchDeleteDelegationByAssessmentError::Jsonize() const
{
  JsonValue payload;

  if(m_delegationIdHasBeenSet)
  {
   payload.WithString("delegationId", m_delegationId);

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
