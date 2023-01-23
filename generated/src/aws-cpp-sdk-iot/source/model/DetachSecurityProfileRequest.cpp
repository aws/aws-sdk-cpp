/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetachSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DetachSecurityProfileRequest::DetachSecurityProfileRequest() : 
    m_securityProfileNameHasBeenSet(false),
    m_securityProfileTargetArnHasBeenSet(false)
{
}

Aws::String DetachSecurityProfileRequest::SerializePayload() const
{
  return {};
}

void DetachSecurityProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_securityProfileTargetArnHasBeenSet)
    {
      ss << m_securityProfileTargetArn;
      uri.AddQueryStringParameter("securityProfileTargetArn", ss.str());
      ss.str("");
    }

}



