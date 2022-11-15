/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutAccountDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAccountDetailsRequest::PutAccountDetailsRequest() : 
    m_mailType(MailType::NOT_SET),
    m_mailTypeHasBeenSet(false),
    m_websiteURLHasBeenSet(false),
    m_contactLanguage(ContactLanguage::NOT_SET),
    m_contactLanguageHasBeenSet(false),
    m_useCaseDescriptionHasBeenSet(false),
    m_additionalContactEmailAddressesHasBeenSet(false),
    m_productionAccessEnabled(false),
    m_productionAccessEnabledHasBeenSet(false)
{
}

Aws::String PutAccountDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mailTypeHasBeenSet)
  {
   payload.WithString("MailType", MailTypeMapper::GetNameForMailType(m_mailType));
  }

  if(m_websiteURLHasBeenSet)
  {
   payload.WithString("WebsiteURL", m_websiteURL);

  }

  if(m_contactLanguageHasBeenSet)
  {
   payload.WithString("ContactLanguage", ContactLanguageMapper::GetNameForContactLanguage(m_contactLanguage));
  }

  if(m_useCaseDescriptionHasBeenSet)
  {
   payload.WithString("UseCaseDescription", m_useCaseDescription);

  }

  if(m_additionalContactEmailAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalContactEmailAddressesJsonList(m_additionalContactEmailAddresses.size());
   for(unsigned additionalContactEmailAddressesIndex = 0; additionalContactEmailAddressesIndex < additionalContactEmailAddressesJsonList.GetLength(); ++additionalContactEmailAddressesIndex)
   {
     additionalContactEmailAddressesJsonList[additionalContactEmailAddressesIndex].AsString(m_additionalContactEmailAddresses[additionalContactEmailAddressesIndex]);
   }
   payload.WithArray("AdditionalContactEmailAddresses", std::move(additionalContactEmailAddressesJsonList));

  }

  if(m_productionAccessEnabledHasBeenSet)
  {
   payload.WithBool("ProductionAccessEnabled", m_productionAccessEnabled);

  }

  return payload.View().WriteReadable();
}




