/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/CreatePhoneNumberOrderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePhoneNumberOrderRequest::CreatePhoneNumberOrderRequest() : 
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_e164PhoneNumbersHasBeenSet(false)
{
}

Aws::String CreatePhoneNumberOrderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_e164PhoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> e164PhoneNumbersJsonList(m_e164PhoneNumbers.size());
   for(unsigned e164PhoneNumbersIndex = 0; e164PhoneNumbersIndex < e164PhoneNumbersJsonList.GetLength(); ++e164PhoneNumbersIndex)
   {
     e164PhoneNumbersJsonList[e164PhoneNumbersIndex].AsString(m_e164PhoneNumbers[e164PhoneNumbersIndex]);
   }
   payload.WithArray("E164PhoneNumbers", std::move(e164PhoneNumbersJsonList));

  }

  return payload.View().WriteReadable();
}




