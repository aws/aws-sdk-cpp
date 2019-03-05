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

#include <aws/textract/model/StartDocumentTextDetectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDocumentTextDetectionRequest::StartDocumentTextDetectionRequest() : 
    m_documentLocationHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_jobTagHasBeenSet(false),
    m_notificationChannelHasBeenSet(false)
{
}

Aws::String StartDocumentTextDetectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_documentLocationHasBeenSet)
  {
   payload.WithObject("DocumentLocation", m_documentLocation.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_jobTagHasBeenSet)
  {
   payload.WithString("JobTag", m_jobTag);

  }

  if(m_notificationChannelHasBeenSet)
  {
   payload.WithObject("NotificationChannel", m_notificationChannel.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDocumentTextDetectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Textract.StartDocumentTextDetection"));
  return headers;

}




