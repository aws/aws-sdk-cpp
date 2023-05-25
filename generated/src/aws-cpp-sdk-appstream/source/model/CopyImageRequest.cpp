/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyImageRequest::CopyImageRequest() : 
    m_sourceImageNameHasBeenSet(false),
    m_destinationImageNameHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_destinationImageDescriptionHasBeenSet(false)
{
}

Aws::String CopyImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceImageNameHasBeenSet)
  {
   payload.WithString("SourceImageName", m_sourceImageName);

  }

  if(m_destinationImageNameHasBeenSet)
  {
   payload.WithString("DestinationImageName", m_destinationImageName);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("DestinationRegion", m_destinationRegion);

  }

  if(m_destinationImageDescriptionHasBeenSet)
  {
   payload.WithString("DestinationImageDescription", m_destinationImageDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CopyImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CopyImage"));
  return headers;

}




