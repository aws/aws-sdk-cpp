﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/DeleteImageRecipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteImageRecipeRequest::SerializePayload() const
{
  return {};
}

void DeleteImageRecipeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_imageRecipeArnHasBeenSet)
    {
      ss << m_imageRecipeArn;
      uri.AddQueryStringParameter("imageRecipeArn", ss.str());
      ss.str("");
    }

}



