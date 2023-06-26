/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/CreateDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeploymentRequest::CreateDeploymentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_environmentIdHasBeenSet(false)
{
}

Aws::String CreateDeploymentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationVersionHasBeenSet)
  {
   payload.WithInteger("applicationVersion", m_applicationVersion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  return payload.View().WriteReadable();
}




