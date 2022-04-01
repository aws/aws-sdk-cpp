/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentError.h>
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

BatchCreateDelegationByAssessmentError::BatchCreateDelegationByAssessmentError() : 
    m_createDelegationRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchCreateDelegationByAssessmentError::BatchCreateDelegationByAssessmentError(JsonView jsonValue) : 
    m_createDelegationRequestHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchCreateDelegationByAssessmentError& BatchCreateDelegationByAssessmentError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createDelegationRequest"))
  {
    m_createDelegationRequest = jsonValue.GetObject("createDelegationRequest");

    m_createDelegationRequestHasBeenSet = true;
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

JsonValue BatchCreateDelegationByAssessmentError::Jsonize() const
{
  JsonValue payload;

  if(m_createDelegationRequestHasBeenSet)
  {
   payload.WithObject("createDelegationRequest", m_createDelegationRequest.Jsonize());

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
