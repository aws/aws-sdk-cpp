/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CreateApplicationPresignedUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationPresignedUrlRequest::CreateApplicationPresignedUrlRequest() : 
    m_applicationNameHasBeenSet(false),
    m_urlType(UrlType::NOT_SET),
    m_urlTypeHasBeenSet(false),
    m_sessionExpirationDurationInSeconds(0),
    m_sessionExpirationDurationInSecondsHasBeenSet(false)
{
}

Aws::String CreateApplicationPresignedUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_urlTypeHasBeenSet)
  {
   payload.WithString("UrlType", UrlTypeMapper::GetNameForUrlType(m_urlType));
  }

  if(m_sessionExpirationDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("SessionExpirationDurationInSeconds", m_sessionExpirationDurationInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApplicationPresignedUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.CreateApplicationPresignedUrl"));
  return headers;

}




