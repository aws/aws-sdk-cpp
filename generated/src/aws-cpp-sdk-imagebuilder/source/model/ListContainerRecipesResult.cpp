/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListContainerRecipesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContainerRecipesResult::ListContainerRecipesResult()
{
}

ListContainerRecipesResult::ListContainerRecipesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContainerRecipesResult& ListContainerRecipesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("containerRecipeSummaryList"))
  {
    Aws::Utils::Array<JsonView> containerRecipeSummaryListJsonList = jsonValue.GetArray("containerRecipeSummaryList");
    for(unsigned containerRecipeSummaryListIndex = 0; containerRecipeSummaryListIndex < containerRecipeSummaryListJsonList.GetLength(); ++containerRecipeSummaryListIndex)
    {
      m_containerRecipeSummaryList.push_back(containerRecipeSummaryListJsonList[containerRecipeSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
