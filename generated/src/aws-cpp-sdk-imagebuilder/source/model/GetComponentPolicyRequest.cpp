/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetComponentPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetComponentPolicyRequest::GetComponentPolicyRequest() : 
    m_componentArnHasBeenSet(false)
{
}

Aws::String GetComponentPolicyRequest::SerializePayload() const
{
  return {};
}

void GetComponentPolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_componentArnHasBeenSet)
    {
      ss << m_componentArn;
      uri.AddQueryStringParameter("componentArn", ss.str());
      ss.str("");
    }

}



