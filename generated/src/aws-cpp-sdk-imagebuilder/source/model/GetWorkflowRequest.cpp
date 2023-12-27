/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetWorkflowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkflowRequest::GetWorkflowRequest() : 
    m_workflowBuildVersionArnHasBeenSet(false)
{
}

Aws::String GetWorkflowRequest::SerializePayload() const
{
  return {};
}

void GetWorkflowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workflowBuildVersionArnHasBeenSet)
    {
      ss << m_workflowBuildVersionArn;
      uri.AddQueryStringParameter("workflowBuildVersionArn", ss.str());
      ss.str("");
    }

}



