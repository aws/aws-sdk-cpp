/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/DeleteThingShadowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteThingShadowRequest::DeleteThingShadowRequest() : 
    m_thingNameHasBeenSet(false),
    m_shadowNameHasBeenSet(false)
{
}

Aws::String DeleteThingShadowRequest::SerializePayload() const
{
  return {};
}

void DeleteThingShadowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_shadowNameHasBeenSet)
    {
      ss << m_shadowName;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

}



