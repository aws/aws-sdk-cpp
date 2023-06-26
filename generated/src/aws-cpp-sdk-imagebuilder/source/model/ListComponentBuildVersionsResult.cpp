/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListComponentBuildVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComponentBuildVersionsResult::ListComponentBuildVersionsResult()
{
}

ListComponentBuildVersionsResult::ListComponentBuildVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComponentBuildVersionsResult& ListComponentBuildVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("componentSummaryList"))
  {
    Aws::Utils::Array<JsonView> componentSummaryListJsonList = jsonValue.GetArray("componentSummaryList");
    for(unsigned componentSummaryListIndex = 0; componentSummaryListIndex < componentSummaryListJsonList.GetLength(); ++componentSummaryListIndex)
    {
      m_componentSummaryList.push_back(componentSummaryListJsonList[componentSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
