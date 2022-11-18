/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/GetSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSiteRequest::GetSiteRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetSiteRequest::SerializePayload() const
{
  return {};
}

void GetSiteRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_idHasBeenSet)
    {
      ss << m_id;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

}



