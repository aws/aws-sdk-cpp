/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/CreatePresignedPortalUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreatePresignedPortalUrlRequest::CreatePresignedPortalUrlRequest() : 
    m_portalIdHasBeenSet(false),
    m_sessionDurationSeconds(0),
    m_sessionDurationSecondsHasBeenSet(false)
{
}

Aws::String CreatePresignedPortalUrlRequest::SerializePayload() const
{
  return {};
}

void CreatePresignedPortalUrlRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sessionDurationSecondsHasBeenSet)
    {
      ss << m_sessionDurationSeconds;
      uri.AddQueryStringParameter("sessionDurationSeconds", ss.str());
      ss.str("");
    }

}



