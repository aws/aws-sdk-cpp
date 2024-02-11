/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/GetScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetScanRequest::GetScanRequest() : 
    m_runIdHasBeenSet(false),
    m_scanNameHasBeenSet(false)
{
}

Aws::String GetScanRequest::SerializePayload() const
{
  return {};
}

void GetScanRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_runIdHasBeenSet)
    {
      ss << m_runId;
      uri.AddQueryStringParameter("runId", ss.str());
      ss.str("");
    }

}



