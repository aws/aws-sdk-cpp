/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetComponentRequest::GetComponentRequest() : 
    m_recipeOutputFormat(RecipeOutputFormat::NOT_SET),
    m_recipeOutputFormatHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

Aws::String GetComponentRequest::SerializePayload() const
{
  return {};
}

void GetComponentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recipeOutputFormatHasBeenSet)
    {
      ss << RecipeOutputFormatMapper::GetNameForRecipeOutputFormat(m_recipeOutputFormat);
      uri.AddQueryStringParameter("recipeOutputFormat", ss.str());
      ss.str("");
    }

}



