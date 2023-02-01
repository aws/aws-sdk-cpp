/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest() : 
    m_applicationNameHasBeenSet(false),
    m_currentApplicationVersionId(0),
    m_currentApplicationVersionIdHasBeenSet(false),
    m_referenceIdHasBeenSet(false)
{
}

Aws::String DeleteApplicationReferenceDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_currentApplicationVersionIdHasBeenSet)
  {
   payload.WithInt64("CurrentApplicationVersionId", m_currentApplicationVersionId);

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApplicationReferenceDataSourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.DeleteApplicationReferenceDataSource"));
  return headers;

}




