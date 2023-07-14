/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPermissionRequest::GetPermissionRequest() : 
    m_permissionArnHasBeenSet(false),
    m_permissionVersion(0),
    m_permissionVersionHasBeenSet(false)
{
}

Aws::String GetPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  if(m_permissionVersionHasBeenSet)
  {
   payload.WithInteger("permissionVersion", m_permissionVersion);

  }

  return payload.View().WriteReadable();
}




