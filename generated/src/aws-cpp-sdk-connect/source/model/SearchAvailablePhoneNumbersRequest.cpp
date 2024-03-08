/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchAvailablePhoneNumbersRequest::SearchAvailablePhoneNumbersRequest() : 
    m_targetArnHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_phoneNumberCountryCode(PhoneNumberCountryCode::NOT_SET),
    m_phoneNumberCountryCodeHasBeenSet(false),
    m_phoneNumberType(PhoneNumberType::NOT_SET),
    m_phoneNumberTypeHasBeenSet(false),
    m_phoneNumberPrefixHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String SearchAvailablePhoneNumbersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_phoneNumberCountryCodeHasBeenSet)
  {
   payload.WithString("PhoneNumberCountryCode", PhoneNumberCountryCodeMapper::GetNameForPhoneNumberCountryCode(m_phoneNumberCountryCode));
  }

  if(m_phoneNumberTypeHasBeenSet)
  {
   payload.WithString("PhoneNumberType", PhoneNumberTypeMapper::GetNameForPhoneNumberType(m_phoneNumberType));
  }

  if(m_phoneNumberPrefixHasBeenSet)
  {
   payload.WithString("PhoneNumberPrefix", m_phoneNumberPrefix);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




