/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DescribeRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeRecipeRequest::DescribeRecipeRequest() : 
    m_nameHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
}

Aws::String DescribeRecipeRequest::SerializePayload() const
{
  return {};
}

void DescribeRecipeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recipeVersionHasBeenSet)
    {
      ss << m_recipeVersion;
      uri.AddQueryStringParameter("recipeVersion", ss.str());
      ss.str("");
    }

}



