/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/CreateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNodeRequest::CreateNodeRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_networkIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_nodeConfigurationHasBeenSet(false)
{
}

Aws::String CreateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_nodeConfigurationHasBeenSet)
  {
   payload.WithObject("NodeConfiguration", m_nodeConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




