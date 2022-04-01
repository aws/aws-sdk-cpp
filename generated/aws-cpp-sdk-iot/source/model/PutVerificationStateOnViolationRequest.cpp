/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PutVerificationStateOnViolationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutVerificationStateOnViolationRequest::PutVerificationStateOnViolationRequest() : 
    m_violationIdHasBeenSet(false),
    m_verificationState(VerificationState::NOT_SET),
    m_verificationStateHasBeenSet(false),
    m_verificationStateDescriptionHasBeenSet(false)
{
}

Aws::String PutVerificationStateOnViolationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verificationStateHasBeenSet)
  {
   payload.WithString("verificationState", VerificationStateMapper::GetNameForVerificationState(m_verificationState));
  }

  if(m_verificationStateDescriptionHasBeenSet)
  {
   payload.WithString("verificationStateDescription", m_verificationStateDescription);

  }

  return payload.View().WriteReadable();
}




