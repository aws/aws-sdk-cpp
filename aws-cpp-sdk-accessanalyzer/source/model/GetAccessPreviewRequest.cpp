/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetAccessPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetAccessPreviewRequest::GetAccessPreviewRequest() : 
    m_accessPreviewIdHasBeenSet(false),
    m_analyzerArnHasBeenSet(false)
{
}

Aws::String GetAccessPreviewRequest::SerializePayload() const
{
  return {};
}

void GetAccessPreviewRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_analyzerArnHasBeenSet)
    {
      ss << m_analyzerArn;
      uri.AddQueryStringParameter("analyzerArn", ss.str());
      ss.str("");
    }

}



