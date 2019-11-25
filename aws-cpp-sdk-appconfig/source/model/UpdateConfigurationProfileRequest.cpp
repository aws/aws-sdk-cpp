/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> validatorsJsonList(m_validators.size());
   for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
   {
     validatorsJsonList[validatorsIndex].AsObject(m_validators[validatorsIndex].Jsonize());
   }
   payload.WithArray("Validators", std::move(validatorsJsonList));

  }

  return payload.View().WriteReadable();
}




