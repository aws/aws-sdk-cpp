/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetLifecyclePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLifecyclePolicyRequest::GetLifecyclePolicyRequest() : 
    m_lifecyclePolicyArnHasBeenSet(false)
{
}

Aws::String GetLifecyclePolicyRequest::SerializePayload() const
{
  return {};
}

void GetLifecyclePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_lifecyclePolicyArnHasBeenSet)
    {
      ss << m_lifecyclePolicyArn;
      uri.AddQueryStringParameter("lifecyclePolicyArn", ss.str());
      ss.str("");
    }

}



