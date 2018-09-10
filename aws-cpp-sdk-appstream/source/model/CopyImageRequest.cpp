﻿/*
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




