/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint-email/model/GetDomainStatisticsReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDomainStatisticsReportRequest::GetDomainStatisticsReportRequest() : 
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

Aws::String GetDomainStatisticsReportRequest::SerializePayload() const
{
  return {};
}

void GetDomainStatisticsReportRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startDateHasBeenSet)
    {
      ss << m_startDate.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("StartDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("EndDate", ss.str());
      ss.str("");
    }

}



