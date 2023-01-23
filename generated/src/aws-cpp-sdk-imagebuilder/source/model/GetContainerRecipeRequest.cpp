/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetContainerRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetContainerRecipeRequest::GetContainerRecipeRequest() : 
    m_containerRecipeArnHasBeenSet(false)
{
}

Aws::String GetContainerRecipeRequest::SerializePayload() const
{
  return {};
}

void GetContainerRecipeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_containerRecipeArnHasBeenSet)
    {
      ss << m_containerRecipeArn;
      uri.AddQueryStringParameter("containerRecipeArn", ss.str());
      ss.str("");
    }

}



