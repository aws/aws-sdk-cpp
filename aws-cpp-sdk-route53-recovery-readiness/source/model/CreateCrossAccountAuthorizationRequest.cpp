/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCrossAccountAuthorizationRequest::CreateCrossAccountAuthorizationRequest() : 
    m_crossAccountAuthorizationHasBeenSet(false)
{
}

Aws::String CreateCrossAccountAuthorizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_crossAccountAuthorizationHasBeenSet)
  {
   payload.WithString("crossAccountAuthorization", m_crossAccountAuthorization);

  }

  return payload.View().WriteReadable();
}




