/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/GetHealthEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::InternetMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetHealthEventRequest::GetHealthEventRequest() : 
    m_monitorNameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_linkedAccountIdHasBeenSet(false)
{
}

Aws::String GetHealthEventRequest::SerializePayload() const
{
  return {};
}

void GetHealthEventRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_linkedAccountIdHasBeenSet)
    {
      ss << m_linkedAccountId;
      uri.AddQueryStringParameter("LinkedAccountId", ss.str());
      ss.str("");
    }

}



