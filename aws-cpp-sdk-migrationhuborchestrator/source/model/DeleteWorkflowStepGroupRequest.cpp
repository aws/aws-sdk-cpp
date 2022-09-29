/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteWorkflowStepGroupRequest::DeleteWorkflowStepGroupRequest() : 
    m_workflowIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String DeleteWorkflowStepGroupRequest::SerializePayload() const
{
  return {};
}

void DeleteWorkflowStepGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workflowIdHasBeenSet)
    {
      ss << m_workflowId;
      uri.AddQueryStringParameter("workflowId", ss.str());
      ss.str("");
    }

}



