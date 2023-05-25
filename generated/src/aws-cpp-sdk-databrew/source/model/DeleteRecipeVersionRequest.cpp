/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DeleteRecipeVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRecipeVersionRequest::DeleteRecipeVersionRequest() : 
    m_nameHasBeenSet(false),
    m_recipeVersionHasBeenSet(false)
{
}

Aws::String DeleteRecipeVersionRequest::SerializePayload() const
{
  return {};
}




