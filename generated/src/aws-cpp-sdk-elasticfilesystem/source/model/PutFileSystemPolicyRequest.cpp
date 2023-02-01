/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/PutFileSystemPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFileSystemPolicyRequest::PutFileSystemPolicyRequest() : 
    m_fileSystemIdHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_bypassPolicyLockoutSafetyCheck(false),
    m_bypassPolicyLockoutSafetyCheckHasBeenSet(false)
{
}

Aws::String PutFileSystemPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_bypassPolicyLockoutSafetyCheckHasBeenSet)
  {
   payload.WithBool("BypassPolicyLockoutSafetyCheck", m_bypassPolicyLockoutSafetyCheck);

  }

  return payload.View().WriteReadable();
}




