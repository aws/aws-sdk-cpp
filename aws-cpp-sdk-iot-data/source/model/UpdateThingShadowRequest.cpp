/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/UpdateThingShadowRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

UpdateThingShadowRequest::UpdateThingShadowRequest() : 
    m_thingNameHasBeenSet(false),
    m_shadowNameHasBeenSet(false)
{
}


void UpdateThingShadowRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_shadowNameHasBeenSet)
    {
      ss << m_shadowName;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

}

