/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/PutSinkPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSinkPolicyRequest::PutSinkPolicyRequest() : 
    m_sinkIdentifierHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutSinkPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sinkIdentifierHasBeenSet)
  {
   payload.WithString("SinkIdentifier", m_sinkIdentifier);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload.View().WriteReadable();
}




