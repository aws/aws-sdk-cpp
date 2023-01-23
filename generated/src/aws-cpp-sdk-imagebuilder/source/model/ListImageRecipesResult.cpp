/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImageRecipesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImageRecipesResult::ListImageRecipesResult()
{
}

ListImageRecipesResult::ListImageRecipesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImageRecipesResult& ListImageRecipesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("imageRecipeSummaryList"))
  {
    Aws::Utils::Array<JsonView> imageRecipeSummaryListJsonList = jsonValue.GetArray("imageRecipeSummaryList");
    for(unsigned imageRecipeSummaryListIndex = 0; imageRecipeSummaryListIndex < imageRecipeSummaryListJsonList.GetLength(); ++imageRecipeSummaryListIndex)
    {
      m_imageRecipeSummaryList.push_back(imageRecipeSummaryListJsonList[imageRecipeSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
