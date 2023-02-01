/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/GetWorkerFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetWorkerFleetRequest::GetWorkerFleetRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetWorkerFleetRequest::SerializePayload() const
{
  return {};
}

void GetWorkerFleetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_idHasBeenSet)
    {
      ss << m_id;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

}



