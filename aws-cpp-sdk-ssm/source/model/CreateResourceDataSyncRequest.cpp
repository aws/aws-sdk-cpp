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

#include <aws/ssm/model/CreateResourceDataSyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceDataSyncRequest::CreateResourceDataSyncRequest() : 
    m_syncNameHasBeenSet(false),
    m_s3DestinationHasBeenSet(false)
{
}

Aws::String CreateResourceDataSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("S3Destination", m_s3Destination.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResourceDataSyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.CreateResourceDataSync"));
  return headers;

}




