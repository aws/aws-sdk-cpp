/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetImagePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetImagePolicyRequest::GetImagePolicyRequest() : 
    m_imageArnHasBeenSet(false)
{
}

Aws::String GetImagePolicyRequest::SerializePayload() const
{
  return {};
}

void GetImagePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_imageArnHasBeenSet)
    {
      ss << m_imageArn;
      uri.AddQueryStringParameter("imageArn", ss.str());
      ss.str("");
    }

}



