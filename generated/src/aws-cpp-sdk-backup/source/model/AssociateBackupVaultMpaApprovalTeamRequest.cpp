/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/AssociateBackupVaultMpaApprovalTeamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateBackupVaultMpaApprovalTeamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mpaApprovalTeamArnHasBeenSet)
  {
   payload.WithString("MpaApprovalTeamArn", m_mpaApprovalTeamArn);

  }

  if(m_requesterCommentHasBeenSet)
  {
   payload.WithString("RequesterComment", m_requesterComment);

  }

  return payload.View().WriteReadable();
}




