/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_expirationDateHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateActivationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateActivation"));
  return headers;

}



