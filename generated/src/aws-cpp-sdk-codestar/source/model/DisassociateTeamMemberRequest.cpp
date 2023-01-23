/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/DisassociateTeamMemberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateTeamMemberRequest::DisassociateTeamMemberRequest() : 
    m_projectIdHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

Aws::String DisassociateTeamMemberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateTeamMemberRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.DisassociateTeamMember"));
  return headers;

}




