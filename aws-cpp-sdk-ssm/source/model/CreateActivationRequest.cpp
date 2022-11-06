/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/CreateActivationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateActivationRequest::CreateActivationRequest() : 
    m_descriptionHasBeenSet(false),
    m_defaultInstanceNameHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationLimit(0),
    m_registrationLimitHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_registrationMetadataHasBeenSet(false)
{
}

Aws::String CreateActivationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultInstanceNameHasBeenSet)
  {
   payload.WithString("DefaultInstanceName", m_defaultInstanceName);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("IamRole", m_iamRole);

  }

  if(m_registrationLimitHasBeenSet)
  {
   payload.WithInteger("RegistrationLimit", m_registrationLimit);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_registrationMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> registrationMetadataJsonList(m_registrationMetadata.size());
   for(unsigned registrationMetadataIndex = 0; registrationMetadataIndex < registrationMetadataJsonList.GetLength(); ++registrationMetadataIndex)
   {
     registrationMetadataJsonList[registrationMetadataIndex].AsObject(m_registrationMetadata[registrationMetadataIndex].Jsonize());
   }
   payload.WithArray("RegistrationMetadata", std::move(registrationMetadataJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateActivationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateActivation"));
  return headers;

}




