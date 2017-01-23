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
#include <aws/vitalservices/model/updateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

updateUserRequest::updateUserRequest() : 
    m_mobileNumberHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

Aws::String updateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mobileNumberHasBeenSet)
  {
   payload.WithString("mobileNumber", m_mobileNumber);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload.WriteReadable();
}



