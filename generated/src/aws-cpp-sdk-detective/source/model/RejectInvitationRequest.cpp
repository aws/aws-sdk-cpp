/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/RejectInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectInvitationRequest::RejectInvitationRequest() : 
    m_graphArnHasBeenSet(false)
{
}

Aws::String RejectInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  return payload.View().WriteReadable();
}




