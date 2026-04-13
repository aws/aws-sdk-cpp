/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/UpdateFailbackReplicationConfigurationRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFailbackReplicationConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryInstanceIDHasBeenSet) {
    payload.WithString("recoveryInstanceID", m_recoveryInstanceID);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_bandwidthThrottlingHasBeenSet) {
    payload.WithInt64("bandwidthThrottling", m_bandwidthThrottling);
  }

  if (m_usePrivateIPHasBeenSet) {
    payload.WithBool("usePrivateIP", m_usePrivateIP);
  }

  if (m_internetProtocolHasBeenSet) {
    payload.WithString("internetProtocol", InternetProtocolMapper::GetNameForInternetProtocol(m_internetProtocol));
  }

  return payload.View().WriteReadable();
}
