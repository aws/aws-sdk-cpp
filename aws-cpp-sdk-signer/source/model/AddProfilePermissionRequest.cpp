/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/AddProfilePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddProfilePermissionRequest::AddProfilePermissionRequest() : 
    m_profileNameHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

Aws::String AddProfilePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("profileVersion", m_profileVersion);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("statementId", m_statementId);

  }

  return payload.View().WriteReadable();
}




