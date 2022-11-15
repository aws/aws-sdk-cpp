/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/StopWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopWorkflowRequest::StopWorkflowRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String StopWorkflowRequest::SerializePayload() const
{
  return {};
}




