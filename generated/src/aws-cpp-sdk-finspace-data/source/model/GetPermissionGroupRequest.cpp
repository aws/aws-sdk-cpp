/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetPermissionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPermissionGroupRequest::GetPermissionGroupRequest() : 
    m_permissionGroupIdHasBeenSet(false)
{
}

Aws::String GetPermissionGroupRequest::SerializePayload() const
{
  return {};
}




