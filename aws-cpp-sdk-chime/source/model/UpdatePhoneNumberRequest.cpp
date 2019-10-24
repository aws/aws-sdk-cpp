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

#include <aws/chime/model/UpdatePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberRequest::UpdatePhoneNumberRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_callingNameHasBeenSet(false)
{
}

Aws::String UpdatePhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_callingNameHasBeenSet)
  {
   payload.WithString("CallingName", m_callingName);

  }

  return payload.View().WriteReadable();
}




