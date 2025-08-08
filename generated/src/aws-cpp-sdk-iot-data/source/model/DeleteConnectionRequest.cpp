/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/DeleteConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteConnectionRequest::SerializePayload() const
{
  return {};
}

void DeleteConnectionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_cleanSessionHasBeenSet)
    {
      ss << m_cleanSession;
      uri.AddQueryStringParameter("cleanSession", ss.str());
      ss.str("");
    }

    if(m_preventWillMessageHasBeenSet)
    {
      ss << m_preventWillMessage;
      uri.AddQueryStringParameter("preventWillMessage", ss.str());
      ss.str("");
    }

}



