/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPhoneNumbersV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPhoneNumbersV2Request::ListPhoneNumbersV2Request() : 
    m_targetArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_phoneNumberCountryCodesHasBeenSet(false),
    m_phoneNumberTypesHasBeenSet(false),
    m_phoneNumberPrefixHasBeenSet(false)
{
}

Aws::String ListPhoneNumbersV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_phoneNumberCountryCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberCountryCodesJsonList(m_phoneNumberCountryCodes.size());
   for(unsigned phoneNumberCountryCodesIndex = 0; phoneNumberCountryCodesIndex < phoneNumberCountryCodesJsonList.GetLength(); ++phoneNumberCountryCodesIndex)
   {
     phoneNumberCountryCodesJsonList[phoneNumberCountryCodesIndex].AsString(PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(m_phoneNumberCountryCodes[phoneNumberCountryCodesIndex]));
   }
   payload.WithArray("PhoneNumberCountryCodes", std::move(phoneNumberCountryCodesJsonList));

  }

  if(m_phoneNumberTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberTypesJsonList(m_phoneNumberTypes.size());
   for(unsigned phoneNumberTypesIndex = 0; phoneNumberTypesIndex < phoneNumberTypesJsonList.GetLength(); ++phoneNumberTypesIndex)
   {
     phoneNumberTypesJsonList[phoneNumberTypesIndex].AsString(PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberTypes[phoneNumberTypesIndex]));
   }
   payload.WithArray("PhoneNumberTypes", std::move(phoneNumberTypesJsonList));

  }

  if(m_phoneNumberPrefixHasBeenSet)
  {
   payload.WithString("PhoneNumberPrefix", m_phoneNumberPrefix);

  }

  return payload.View().WriteReadable();
}




