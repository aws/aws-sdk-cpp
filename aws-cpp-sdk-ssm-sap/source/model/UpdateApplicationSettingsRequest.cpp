/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/UpdateApplicationSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationSettingsRequest::UpdateApplicationSettingsRequest() : 
    m_applicationIdHasBeenSet(false),
    m_credentialsToAddOrUpdateHasBeenSet(false),
    m_credentialsToRemoveHasBeenSet(false)
{
}

Aws::String UpdateApplicationSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_credentialsToAddOrUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsToAddOrUpdateJsonList(m_credentialsToAddOrUpdate.size());
   for(unsigned credentialsToAddOrUpdateIndex = 0; credentialsToAddOrUpdateIndex < credentialsToAddOrUpdateJsonList.GetLength(); ++credentialsToAddOrUpdateIndex)
   {
     credentialsToAddOrUpdateJsonList[credentialsToAddOrUpdateIndex].AsObject(m_credentialsToAddOrUpdate[credentialsToAddOrUpdateIndex].Jsonize());
   }
   payload.WithArray("CredentialsToAddOrUpdate", std::move(credentialsToAddOrUpdateJsonList));

  }

  if(m_credentialsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsToRemoveJsonList(m_credentialsToRemove.size());
   for(unsigned credentialsToRemoveIndex = 0; credentialsToRemoveIndex < credentialsToRemoveJsonList.GetLength(); ++credentialsToRemoveIndex)
   {
     credentialsToRemoveJsonList[credentialsToRemoveIndex].AsObject(m_credentialsToRemove[credentialsToRemoveIndex].Jsonize());
   }
   payload.WithArray("CredentialsToRemove", std::move(credentialsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}




