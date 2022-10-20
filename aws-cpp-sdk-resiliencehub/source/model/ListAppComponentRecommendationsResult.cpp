/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppComponentRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppComponentRecommendationsResult::ListAppComponentRecommendationsResult()
{
}

ListAppComponentRecommendationsResult::ListAppComponentRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppComponentRecommendationsResult& ListAppComponentRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("componentRecommendations"))
  {
    Aws::Utils::Array<JsonView> componentRecommendationsJsonList = jsonValue.GetArray("componentRecommendations");
    for(unsigned componentRecommendationsIndex = 0; componentRecommendationsIndex < componentRecommendationsJsonList.GetLength(); ++componentRecommendationsIndex)
    {
      m_componentRecommendations.push_back(componentRecommendationsJsonList[componentRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
