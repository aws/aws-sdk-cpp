/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetEffectiveHoursOfOperationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetEffectiveHoursOfOperationsRequest::GetEffectiveHoursOfOperationsRequest() : 
    m_instanceIdHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_fromDateHasBeenSet(false),
    m_toDateHasBeenSet(false)
{
}

Aws::String GetEffectiveHoursOfOperationsRequest::SerializePayload() const
{
  return {};
}

void GetEffectiveHoursOfOperationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fromDateHasBeenSet)
    {
      ss << m_fromDate;
      uri.AddQueryStringParameter("fromDate", ss.str());
      ss.str("");
    }

    if(m_toDateHasBeenSet)
    {
      ss << m_toDate;
      uri.AddQueryStringParameter("toDate", ss.str());
      ss.str("");
    }

}



