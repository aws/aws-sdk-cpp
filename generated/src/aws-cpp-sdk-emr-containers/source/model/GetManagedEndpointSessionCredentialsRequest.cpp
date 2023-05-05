/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/GetManagedEndpointSessionCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetManagedEndpointSessionCredentialsRequest::GetManagedEndpointSessionCredentialsRequest() : 
    m_endpointIdentifierHasBeenSet(false),
    m_virtualClusterIdentifierHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_logContextHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String GetManagedEndpointSessionCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_credentialTypeHasBeenSet)
  {
   payload.WithString("credentialType", m_credentialType);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_logContextHasBeenSet)
  {
   payload.WithString("logContext", m_logContext);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




