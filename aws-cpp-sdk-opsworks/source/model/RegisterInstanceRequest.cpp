/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/RegisterInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterInstanceRequest::RegisterInstanceRequest() : 
    m_stackIdHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_rsaPublicKeyHasBeenSet(false),
    m_rsaPublicKeyFingerprintHasBeenSet(false),
    m_instanceIdentityHasBeenSet(false)
{
}

Aws::String RegisterInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_publicIpHasBeenSet)
  {
   payload.WithString("PublicIp", m_publicIp);

  }

  if(m_privateIpHasBeenSet)
  {
   payload.WithString("PrivateIp", m_privateIp);

  }

  if(m_rsaPublicKeyHasBeenSet)
  {
   payload.WithString("RsaPublicKey", m_rsaPublicKey);

  }

  if(m_rsaPublicKeyFingerprintHasBeenSet)
  {
   payload.WithString("RsaPublicKeyFingerprint", m_rsaPublicKeyFingerprint);

  }

  if(m_instanceIdentityHasBeenSet)
  {
   payload.WithObject("InstanceIdentity", m_instanceIdentity.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.RegisterInstance"));
  return headers;

}



