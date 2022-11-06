/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/CreateCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCaseRequest::CreateCaseRequest() : 
    m_subjectHasBeenSet(false),
    m_serviceCodeHasBeenSet(false),
    m_severityCodeHasBeenSet(false),
    m_categoryCodeHasBeenSet(false),
    m_communicationBodyHasBeenSet(false),
    m_ccEmailAddressesHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_attachmentSetIdHasBeenSet(false)
{
}

Aws::String CreateCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_severityCodeHasBeenSet)
  {
   payload.WithString("severityCode", m_severityCode);

  }

  if(m_categoryCodeHasBeenSet)
  {
   payload.WithString("categoryCode", m_categoryCode);

  }

  if(m_communicationBodyHasBeenSet)
  {
   payload.WithString("communicationBody", m_communicationBody);

  }

  if(m_ccEmailAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccEmailAddressesJsonList(m_ccEmailAddresses.size());
   for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
   {
     ccEmailAddressesJsonList[ccEmailAddressesIndex].AsString(m_ccEmailAddresses[ccEmailAddressesIndex]);
   }
   payload.WithArray("ccEmailAddresses", std::move(ccEmailAddressesJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_issueTypeHasBeenSet)
  {
   payload.WithString("issueType", m_issueType);

  }

  if(m_attachmentSetIdHasBeenSet)
  {
   payload.WithString("attachmentSetId", m_attachmentSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.CreateCase"));
  return headers;

}




