/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest() : 
    m_notebookInstanceNameHasBeenSet(false),
    m_sessionExpirationDurationInSeconds(0),
    m_sessionExpirationDurationInSecondsHasBeenSet(false)
{
}

Aws::String CreatePresignedNotebookInstanceUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceName", m_notebookInstanceName);

  }

  if(m_sessionExpirationDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("SessionExpirationDurationInSeconds", m_sessionExpirationDurationInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePresignedNotebookInstanceUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreatePresignedNotebookInstanceUrl"));
  return headers;

}




