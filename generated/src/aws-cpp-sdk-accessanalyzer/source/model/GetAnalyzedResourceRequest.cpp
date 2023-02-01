/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetAnalyzedResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAnalyzedResourceRequest::GetAnalyzedResourceRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String GetAnalyzedResourceRequest::SerializePayload() const
{
  return {};
}

void GetAnalyzedResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_analyzerArnHasBeenSet)
    {
      ss << m_analyzerArn;
      uri.AddQueryStringParameter("analyzerArn", ss.str());
      ss.str("");
    }

    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

}



