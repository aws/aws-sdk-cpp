/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/GetSuiteDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSuiteDefinitionRequest::GetSuiteDefinitionRequest() : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionVersionHasBeenSet(false)
{
}

Aws::String GetSuiteDefinitionRequest::SerializePayload() const
{
  return {};
}

void GetSuiteDefinitionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_suiteDefinitionVersionHasBeenSet)
    {
      ss << m_suiteDefinitionVersion;
      uri.AddQueryStringParameter("suiteDefinitionVersion", ss.str());
      ss.str("");
    }

}



