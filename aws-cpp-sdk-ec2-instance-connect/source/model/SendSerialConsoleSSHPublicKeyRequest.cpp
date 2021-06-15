/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/model/SendSerialConsoleSSHPublicKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendSerialConsoleSSHPublicKeyRequest::SendSerialConsoleSSHPublicKeyRequest() : 
    m_instanceIdHasBeenSet(false),
    m_serialPort(0),
    m_serialPortHasBeenSet(false),
    m_sSHPublicKeyHasBeenSet(false)
{
}

Aws::String SendSerialConsoleSSHPublicKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_serialPortHasBeenSet)
  {
   payload.WithInteger("SerialPort", m_serialPort);

  }

  if(m_sSHPublicKeyHasBeenSet)
  {
   payload.WithString("SSHPublicKey", m_sSHPublicKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendSerialConsoleSSHPublicKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEC2InstanceConnectService.SendSerialConsoleSSHPublicKey"));
  return headers;

}




