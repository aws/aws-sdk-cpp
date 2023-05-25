/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateSecurityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSecurityRequest::UpdateSecurityRequest() : 
    m_clientAuthenticationHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_encryptionInfoHasBeenSet(false)
{
}

Aws::String UpdateSecurityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_encryptionInfoHasBeenSet)
  {
   payload.WithObject("encryptionInfo", m_encryptionInfo.Jsonize());

  }

  return payload.View().WriteReadable();
}




