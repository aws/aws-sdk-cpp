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

#include <aws/kinesis/model/DeleteStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteStreamRequest::DeleteStreamRequest() : 
    m_streamNameHasBeenSet(false),
    m_enforceConsumerDeletion(false),
    m_enforceConsumerDeletionHasBeenSet(false)
{
}

Aws::String DeleteStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_enforceConsumerDeletionHasBeenSet)
  {
   payload.WithBool("EnforceConsumerDeletion", m_enforceConsumerDeletion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.DeleteStream"));
  return headers;

}




