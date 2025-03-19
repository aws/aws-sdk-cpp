/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCommandExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCommandExecutionRequest::SerializePayload() const
{
  return {};
}

void GetCommandExecutionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetArnHasBeenSet)
    {
      ss << m_targetArn;
      uri.AddQueryStringParameter("targetArn", ss.str());
      ss.str("");
    }

    if(m_includeResultHasBeenSet)
    {
      ss << m_includeResult;
      uri.AddQueryStringParameter("includeResult", ss.str());
      ss.str("");
    }

}



