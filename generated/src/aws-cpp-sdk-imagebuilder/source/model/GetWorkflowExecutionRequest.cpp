/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetWorkflowExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkflowExecutionRequest::GetWorkflowExecutionRequest() : 
    m_workflowExecutionIdHasBeenSet(false)
{
}

Aws::String GetWorkflowExecutionRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workflowExecutionIdHasBeenSet)
    {
      ss << m_workflowExecutionId;
      uri.AddQueryStringParameter("workflowExecutionId", ss.str());
      ss.str("");
    }

}



