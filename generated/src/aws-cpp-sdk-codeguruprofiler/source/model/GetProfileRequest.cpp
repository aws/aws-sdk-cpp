/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/GetProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetProfileRequest::GetProfileRequest() : 
    m_acceptHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_maxDepth(0),
    m_maxDepthHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String GetProfileRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_maxDepthHasBeenSet)
    {
      ss << m_maxDepth;
      uri.AddQueryStringParameter("maxDepth", ss.str());
      ss.str("");
    }

    if(m_periodHasBeenSet)
    {
      ss << m_period;
      uri.AddQueryStringParameter("period", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

}



