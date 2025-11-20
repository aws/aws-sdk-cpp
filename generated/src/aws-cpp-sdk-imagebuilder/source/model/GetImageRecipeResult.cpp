/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/GetImageRecipeResult.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImageRecipeResult::GetImageRecipeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetImageRecipeResult& GetImageRecipeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("requestId")) {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageRecipe")) {
    m_imageRecipe = jsonValue.GetObject("imageRecipe");
    m_imageRecipeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestVersionReferences")) {
    m_latestVersionReferences = jsonValue.GetObject("latestVersionReferences");
    m_latestVersionReferencesHasBeenSet = true;
  }

  return *this;
}
