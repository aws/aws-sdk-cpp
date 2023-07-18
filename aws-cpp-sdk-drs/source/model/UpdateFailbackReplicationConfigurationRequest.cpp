/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/UpdateFailbackReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFailbackReplicationConfigurationRequest::UpdateFailbackReplicationConfigurationRequest() : 
    m_bandwidthThrottling(0),
    m_bandwidthThrottlingHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recoveryInstanceIDHasBeenSet(false),
    m_usePrivateIP(false),
    m_usePrivateIPHasBeenSet(false)
{
}

Aws::String UpdateFailbackReplicationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bandwidthThrottlingHasBeenSet)
  {
   payload.WithInt64("bandwidthThrottling", m_bandwidthThrottling);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recoveryInstanceIDHasBeenSet)
  {
   payload.WithString("recoveryInstanceID", m_recoveryInstanceID);

  }

  if(m_usePrivateIPHasBeenSet)
  {
   payload.WithBool("usePrivateIP", m_usePrivateIP);

  }

  return payload.View().WriteReadable();
}




