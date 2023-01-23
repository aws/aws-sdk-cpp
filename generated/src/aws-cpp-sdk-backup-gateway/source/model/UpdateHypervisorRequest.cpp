/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/UpdateHypervisorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateHypervisorRequest::UpdateHypervisorRequest() : 
    m_hostHasBeenSet(false),
    m_hypervisorArnHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String UpdateHypervisorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_hypervisorArnHasBeenSet)
  {
   payload.WithString("HypervisorArn", m_hypervisorArn);

  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateHypervisorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.UpdateHypervisor"));
  return headers;

}




