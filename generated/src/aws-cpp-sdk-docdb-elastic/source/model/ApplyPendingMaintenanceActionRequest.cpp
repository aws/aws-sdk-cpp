/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ApplyPendingMaintenanceActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applyActionHasBeenSet)
  {
   payload.WithString("applyAction", m_applyAction);

  }

  if(m_applyOnHasBeenSet)
  {
   payload.WithString("applyOn", m_applyOn);

  }

  if(m_optInTypeHasBeenSet)
  {
   payload.WithString("optInType", OptInTypeMapper::GetNameForOptInType(m_optInType));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}




