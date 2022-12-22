/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/PutResourcePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourcePermissionRequest::PutResourcePermissionRequest() : 
    m_actionType(PermissionActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_sourceResourceArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String PutResourcePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", PermissionActionTypeMapper::GetNameForPermissionActionType(m_actionType));
  }

  if(m_sourceResourceArnHasBeenSet)
  {
   payload.WithString("SourceResourceArn", m_sourceResourceArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}




