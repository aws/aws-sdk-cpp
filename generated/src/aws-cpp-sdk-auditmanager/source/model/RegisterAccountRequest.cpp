/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/RegisterAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterAccountRequest::RegisterAccountRequest() : 
    m_kmsKeyHasBeenSet(false),
    m_delegatedAdminAccountHasBeenSet(false)
{
}

Aws::String RegisterAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("kmsKey", m_kmsKey);

  }

  if(m_delegatedAdminAccountHasBeenSet)
  {
   payload.WithString("delegatedAdminAccount", m_delegatedAdminAccount);

  }

  return payload.View().WriteReadable();
}




