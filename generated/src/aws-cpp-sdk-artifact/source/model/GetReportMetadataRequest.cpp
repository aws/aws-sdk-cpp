/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/GetReportMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetReportMetadataRequest::GetReportMetadataRequest() : 
    m_reportIdHasBeenSet(false),
    m_reportVersion(0),
    m_reportVersionHasBeenSet(false)
{
}

Aws::String GetReportMetadataRequest::SerializePayload() const
{
  return {};
}

void GetReportMetadataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_reportIdHasBeenSet)
    {
      ss << m_reportId;
      uri.AddQueryStringParameter("reportId", ss.str());
      ss.str("");
    }

    if(m_reportVersionHasBeenSet)
    {
      ss << m_reportVersion;
      uri.AddQueryStringParameter("reportVersion", ss.str());
      ss.str("");
    }

}



