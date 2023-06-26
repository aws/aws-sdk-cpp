/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetWorkflowStepExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkflowStepExecutionRequest::GetWorkflowStepExecutionRequest() : 
    m_stepExecutionIdHasBeenSet(false)
{
}

Aws::String GetWorkflowStepExecutionRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowStepExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_stepExecutionIdHasBeenSet)
    {
      ss << m_stepExecutionId;
      uri.AddQueryStringParameter("stepExecutionId", ss.str());
      ss.str("");
    }

}



