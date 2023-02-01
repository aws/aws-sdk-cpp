/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribePullThroughCacheRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePullThroughCacheRulesResult::DescribePullThroughCacheRulesResult()
{
}

DescribePullThroughCacheRulesResult::DescribePullThroughCacheRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePullThroughCacheRulesResult& DescribePullThroughCacheRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("pullThroughCacheRules"))
  {
    Aws::Utils::Array<JsonView> pullThroughCacheRulesJsonList = jsonValue.GetArray("pullThroughCacheRules");
    for(unsigned pullThroughCacheRulesIndex = 0; pullThroughCacheRulesIndex < pullThroughCacheRulesJsonList.GetLength(); ++pullThroughCacheRulesIndex)
    {
      m_pullThroughCacheRules.push_back(pullThroughCacheRulesJsonList[pullThroughCacheRulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
