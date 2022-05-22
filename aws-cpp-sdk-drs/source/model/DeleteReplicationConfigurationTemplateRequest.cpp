/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest() : 
    m_replicationConfigurationTemplateIDHasBeenSet(false)
{
}

Aws::String DeleteReplicationConfigurationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("replicationConfigurationTemplateID", m_replicationConfigurationTemplateID);

  }

  return payload.View().WriteReadable();
}




