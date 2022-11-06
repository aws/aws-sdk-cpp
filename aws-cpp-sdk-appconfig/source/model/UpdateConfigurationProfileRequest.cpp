/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/UpdateConfigurationProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigurationProfileRequest::UpdateConfigurationProfileRequest() : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_retrievalRoleArnHasBeenSet(false),
    m_validatorsHasBeenSet(false)
{
}

Aws::String UpdateConfigurationProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_retrievalRoleArnHasBeenSet)
  {
   payload.WithString("RetrievalRoleArn", m_retrievalRoleArn);

  }

  if(m_validatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validatorsJsonList(m_validators.size());
   for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
   {
     validatorsJsonList[validatorsIndex].AsObject(m_validators[validatorsIndex].Jsonize());
   }
   payload.WithArray("Validators", std::move(validatorsJsonList));

  }

  return payload.View().WriteReadable();
}




