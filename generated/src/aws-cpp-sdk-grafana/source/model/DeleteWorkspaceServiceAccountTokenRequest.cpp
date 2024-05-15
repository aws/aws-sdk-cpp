/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/DeleteWorkspaceServiceAccountTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorkspaceServiceAccountTokenRequest::DeleteWorkspaceServiceAccountTokenRequest() : 
    m_serviceAccountIdHasBeenSet(false),
    m_tokenIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

Aws::String DeleteWorkspaceServiceAccountTokenRequest::SerializePayload() const
{
  return {};
}




