/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/InstallToRemoteAccessSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest() : 
    m_remoteAccessSessionArnHasBeenSet(false),
    m_appArnHasBeenSet(false)
{
}

Aws::String InstallToRemoteAccessSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_remoteAccessSessionArnHasBeenSet)
  {
   payload.WithString("remoteAccessSessionArn", m_remoteAccessSessionArn);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InstallToRemoteAccessSessionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.InstallToRemoteAccessSession"));
  return headers;

}




