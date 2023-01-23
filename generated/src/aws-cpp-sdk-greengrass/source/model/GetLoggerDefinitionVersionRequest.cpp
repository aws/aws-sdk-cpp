/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetLoggerDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLoggerDefinitionVersionRequest::GetLoggerDefinitionVersionRequest() : 
    m_loggerDefinitionIdHasBeenSet(false),
    m_loggerDefinitionVersionIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetLoggerDefinitionVersionRequest::SerializePayload() const
{
  return {};
}

void GetLoggerDefinitionVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



