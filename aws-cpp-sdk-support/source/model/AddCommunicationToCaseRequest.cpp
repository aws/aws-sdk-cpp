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
#include <aws/support/model/AddCommunicationToCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddCommunicationToCaseRequest::AddCommunicationToCaseRequest() : 
    m_caseIdHasBeenSet(false),
    m_communicationBodyHasBeenSet(false),
    m_ccEmailAddressesHasBeenSet(false),
    m_attachmentSetIdHasBeenSet(false)
{
}

Aws::String AddCommunicationToCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_communicationBodyHasBeenSet)
  {
   payload.WithString("communicationBody", m_communicationBody);

  }

  if(m_ccEmailAddressesHasBeenSet)
  {
   Array<JsonValue> ccEmailAddressesJsonList(m_ccEmailAddresses.size());
   for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
   {
     ccEmailAddressesJsonList[ccEmailAddressesIndex].AsString(m_ccEmailAddresses[ccEmailAddressesIndex]);
   }
   payload.WithArray("ccEmailAddresses", std::move(ccEmailAddressesJsonList));

  }

  if(m_attachmentSetIdHasBeenSet)
  {
   payload.WithString("attachmentSetId", m_attachmentSetId);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AddCommunicationToCaseRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.AddCommunicationToCase"));
  return headers;

}



