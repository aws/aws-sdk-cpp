/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListExplainabilityExportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExplainabilityExportsResult::ListExplainabilityExportsResult()
{
}

ListExplainabilityExportsResult::ListExplainabilityExportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExplainabilityExportsResult& ListExplainabilityExportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExplainabilityExports"))
  {
    Aws::Utils::Array<JsonView> explainabilityExportsJsonList = jsonValue.GetArray("ExplainabilityExports");
    for(unsigned explainabilityExportsIndex = 0; explainabilityExportsIndex < explainabilityExportsJsonList.GetLength(); ++explainabilityExportsIndex)
    {
      m_explainabilityExports.push_back(explainabilityExportsJsonList[explainabilityExportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
