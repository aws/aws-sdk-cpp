/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetUsageTotalsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetUsageTotalsRequest::GetUsageTotalsRequest() : 
    m_timeRangeHasBeenSet(false)
{
}

Aws::String GetUsageTotalsRequest::SerializePayload() const
{
  return {};
}

void GetUsageTotalsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_timeRangeHasBeenSet)
    {
      ss << m_timeRange;
      uri.AddQueryStringParameter("timeRange", ss.str());
      ss.str("");
    }

}



