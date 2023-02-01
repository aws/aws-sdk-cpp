/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SearchResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchResourcesResult::SearchResourcesResult()
{
}

SearchResourcesResult::SearchResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchResourcesResult& SearchResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("matchingResources"))
  {
    Aws::Utils::Array<JsonView> matchingResourcesJsonList = jsonValue.GetArray("matchingResources");
    for(unsigned matchingResourcesIndex = 0; matchingResourcesIndex < matchingResourcesJsonList.GetLength(); ++matchingResourcesIndex)
    {
      m_matchingResources.push_back(matchingResourcesJsonList[matchingResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
