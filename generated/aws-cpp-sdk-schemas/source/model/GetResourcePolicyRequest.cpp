/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/GetResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetResourcePolicyRequest::GetResourcePolicyRequest() : 
    m_registryNameHasBeenSet(false)
{
}

Aws::String GetResourcePolicyRequest::SerializePayload() const
{
  return {};
}

void GetResourcePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_registryNameHasBeenSet)
    {
      ss << m_registryName;
      uri.AddQueryStringParameter("registryName", ss.str());
      ss.str("");
    }

}



