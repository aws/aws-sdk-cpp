/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateLambdaFunctionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateLambdaFunctionRequest::DisassociateLambdaFunctionRequest() : 
    m_instanceIdHasBeenSet(false),
    m_functionArnHasBeenSet(false)
{
}

Aws::String DisassociateLambdaFunctionRequest::SerializePayload() const
{
  return {};
}

void DisassociateLambdaFunctionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_functionArnHasBeenSet)
    {
      ss << m_functionArn;
      uri.AddQueryStringParameter("functionArn", ss.str());
      ss.str("");
    }

}



