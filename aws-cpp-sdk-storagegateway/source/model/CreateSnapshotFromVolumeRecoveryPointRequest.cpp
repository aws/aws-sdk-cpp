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

#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSnapshotFromVolumeRecoveryPointRequest::CreateSnapshotFromVolumeRecoveryPointRequest() : 
    m_volumeARNHasBeenSet(false),
    m_snapshotDescriptionHasBeenSet(false)
{
}

Aws::String CreateSnapshotFromVolumeRecoveryPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_snapshotDescriptionHasBeenSet)
  {
   payload.WithString("SnapshotDescription", m_snapshotDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSnapshotFromVolumeRecoveryPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.CreateSnapshotFromVolumeRecoveryPoint"));
  return headers;

}




