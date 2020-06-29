/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/UpdateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNodeRequest::UpdateNodeRequest() : 
    m_networkIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_logPublishingConfigurationHasBeenSet(false)
{
}

Aws::String UpdateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logPublishingConfigurationHasBeenSet)
  {
   payload.WithObject("LogPublishingConfiguration", m_logPublishingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




