﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationFsxOpenZfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLocationFsxOpenZfsRequest::UpdateLocationFsxOpenZfsRequest() : 
    m_locationArnHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_subdirectoryHasBeenSet(false)
{
}

Aws::String UpdateLocationFsxOpenZfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithObject("Protocol", m_protocol.Jsonize());

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLocationFsxOpenZfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationFsxOpenZfs"));
  return headers;

}




