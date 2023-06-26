/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/DeleteWorkspaceApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkspaceApiKeyRequest::DeleteWorkspaceApiKeyRequest() : 
    m_keyNameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DeleteWorkspaceApiKeyRequest::SerializePayload() const
{
  return {};
}




