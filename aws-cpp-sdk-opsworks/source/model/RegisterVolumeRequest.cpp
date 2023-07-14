/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RegisterVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterVolumeRequest::RegisterVolumeRequest() : 
    m_ec2VolumeIdHasBeenSet(false),
    m_stackIdHasBeenSet(false)
{
}

Aws::String RegisterVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ec2VolumeIdHasBeenSet)
  {
   payload.WithString("Ec2VolumeId", m_ec2VolumeId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterVolume"));
  return headers;

}




