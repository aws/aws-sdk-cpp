/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/GetEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetEndpointRequest::GetEndpointRequest() : 
    m_thingArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_deviceRoleArnHasBeenSet(false),
    m_authenticationMethod(AuthenticationMethod::NOT_SET),
    m_authenticationMethodHasBeenSet(false)
{
}

Aws::String GetEndpointRequest::SerializePayload() const
{
  return {};
}

void GetEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_thingArnHasBeenSet)
    {
      ss << m_thingArn;
      uri.AddQueryStringParameter("thingArn", ss.str());
      ss.str("");
    }

    if(m_certificateArnHasBeenSet)
    {
      ss << m_certificateArn;
      uri.AddQueryStringParameter("certificateArn", ss.str());
      ss.str("");
    }

    if(m_deviceRoleArnHasBeenSet)
    {
      ss << m_deviceRoleArn;
      uri.AddQueryStringParameter("deviceRoleArn", ss.str());
      ss.str("");
    }

    if(m_authenticationMethodHasBeenSet)
    {
      ss << AuthenticationMethodMapper::GetNameForAuthenticationMethod(m_authenticationMethod);
      uri.AddQueryStringParameter("authenticationMethod", ss.str());
      ss.str("");
    }

}



