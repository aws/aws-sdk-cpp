/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteWorkflowStepRequest::DeleteWorkflowStepRequest() : 
    m_idHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

Aws::String DeleteWorkflowStepRequest::SerializePayload() const
{
  return {};
}

void DeleteWorkflowStepRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_stepGroupIdHasBeenSet)
    {
      ss << m_stepGroupId;
      uri.AddQueryStringParameter("stepGroupId", ss.str());
      ss.str("");
    }

    if(m_workflowIdHasBeenSet)
    {
      ss << m_workflowId;
      uri.AddQueryStringParameter("workflowId", ss.str());
      ss.str("");
    }

}



