/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutHypervisorPropertyMappingsRequest::PutHypervisorPropertyMappingsRequest() : 
    m_hypervisorArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_vmwareToAwsTagMappingsHasBeenSet(false)
{
}

Aws::String PutHypervisorPropertyMappingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hypervisorArnHasBeenSet)
  {
   payload.WithString("HypervisorArn", m_hypervisorArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_vmwareToAwsTagMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vmwareToAwsTagMappingsJsonList(m_vmwareToAwsTagMappings.size());
   for(unsigned vmwareToAwsTagMappingsIndex = 0; vmwareToAwsTagMappingsIndex < vmwareToAwsTagMappingsJsonList.GetLength(); ++vmwareToAwsTagMappingsIndex)
   {
     vmwareToAwsTagMappingsJsonList[vmwareToAwsTagMappingsIndex].AsObject(m_vmwareToAwsTagMappings[vmwareToAwsTagMappingsIndex].Jsonize());
   }
   payload.WithArray("VmwareToAwsTagMappings", std::move(vmwareToAwsTagMappingsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutHypervisorPropertyMappingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.PutHypervisorPropertyMappings"));
  return headers;

}




