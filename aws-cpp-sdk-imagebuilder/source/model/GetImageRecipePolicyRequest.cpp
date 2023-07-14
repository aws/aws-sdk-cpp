/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetImageRecipePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetImageRecipePolicyRequest::GetImageRecipePolicyRequest() : 
    m_imageRecipeArnHasBeenSet(false)
{
}

Aws::String GetImageRecipePolicyRequest::SerializePayload() const
{
  return {};
}

void GetImageRecipePolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_imageRecipeArnHasBeenSet)
    {
      ss << m_imageRecipeArn;
      uri.AddQueryStringParameter("imageRecipeArn", ss.str());
      ss.str("");
    }

}



