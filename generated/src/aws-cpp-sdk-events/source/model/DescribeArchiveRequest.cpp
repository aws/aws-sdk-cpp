﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/DescribeArchiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeArchiveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archiveNameHasBeenSet)
  {
   payload.WithString("ArchiveName", m_archiveName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeArchiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.DescribeArchive"));
  return headers;

}




