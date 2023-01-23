/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/GetThingShadowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetThingShadowRequest::GetThingShadowRequest() : 
    m_thingNameHasBeenSet(false),
    m_shadowNameHasBeenSet(false)
{
}

Aws::String GetThingShadowRequest::SerializePayload() const
{
  return {};
}

void GetThingShadowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_shadowNameHasBeenSet)
    {
      ss << m_shadowName;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

}



