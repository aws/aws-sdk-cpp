/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetFunctionDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest() : 
    m_functionDefinitionIdHasBeenSet(false),
    m_functionDefinitionVersionIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetFunctionDefinitionVersionRequest::SerializePayload() const
{
  return {};
}

void GetFunctionDefinitionVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



