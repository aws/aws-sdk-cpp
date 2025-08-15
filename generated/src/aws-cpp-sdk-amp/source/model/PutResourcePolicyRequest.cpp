/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  return payload.View().WriteReadable();
}




