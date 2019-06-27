/*
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

#include <aws/ec2-instance-connect/model/SendSSHPublicKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendSSHPublicKeyRequest::SendSSHPublicKeyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_instanceOSUserHasBeenSet(false),
    m_sSHPublicKeyHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

Aws::String SendSSHPublicKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceOSUserHasBeenSet)
  {
   payload.WithString("InstanceOSUser", m_instanceOSUser);

  }

  if(m_sSHPublicKeyHasBeenSet)
  {
   payload.WithString("SSHPublicKey", m_sSHPublicKey);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendSSHPublicKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEC2InstanceConnectService.SendSSHPublicKey"));
  return headers;

}




