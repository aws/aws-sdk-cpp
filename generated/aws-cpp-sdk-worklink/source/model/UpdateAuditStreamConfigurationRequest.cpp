/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/UpdateAuditStreamConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAuditStreamConfigurationRequest::UpdateAuditStreamConfigurationRequest() : 
    m_fleetArnHasBeenSet(false),
    m_auditStreamArnHasBeenSet(false)
{
}

Aws::String UpdateAuditStreamConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_auditStreamArnHasBeenSet)
  {
   payload.WithString("AuditStreamArn", m_auditStreamArn);

  }

  return payload.View().WriteReadable();
}




