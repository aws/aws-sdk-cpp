/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateParticipantAuthenticationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateParticipantAuthenticationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  if(m_errorDescriptionHasBeenSet)
  {
   payload.WithString("ErrorDescription", m_errorDescription);

  }

  return payload.View().WriteReadable();
}




