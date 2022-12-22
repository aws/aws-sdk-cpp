/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateAutomatedDiscoveryConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAutomatedDiscoveryConfigurationRequest::UpdateAutomatedDiscoveryConfigurationRequest() : 
    m_status(AutomatedDiscoveryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateAutomatedDiscoveryConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutomatedDiscoveryStatusMapper::GetNameForAutomatedDiscoveryStatus(m_status));
  }

  return payload.View().WriteReadable();
}




