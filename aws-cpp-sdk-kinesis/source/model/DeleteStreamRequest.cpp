/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




