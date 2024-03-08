/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetLifecycleExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLifecycleExecutionRequest::GetLifecycleExecutionRequest() : 
    m_lifecycleExecutionIdHasBeenSet(false)
{
}

Aws::String GetLifecycleExecutionRequest::SerializePayload() const
{
  return {};
}

void GetLifecycleExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lifecycleExecutionIdHasBeenSet)
    {
      ss << m_lifecycleExecutionId;
      uri.AddQueryStringParameter("lifecycleExecutionId", ss.str());
      ss.str("");
    }

}



