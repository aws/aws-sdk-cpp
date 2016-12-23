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
#include <aws/vitalservices/model/registerUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VitalServices::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

registerUserRequest::registerUserRequest() : 
    m_mobileNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
}

Aws::String registerUserRequest::SerializePayload() const
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

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  return payload.WriteReadable();
}



