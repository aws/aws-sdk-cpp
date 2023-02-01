/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/BatchGetAggregateResourceConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetAggregateResourceConfigResult::BatchGetAggregateResourceConfigResult()
{
}

BatchGetAggregateResourceConfigResult::BatchGetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetAggregateResourceConfigResult& BatchGetAggregateResourceConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaseConfigurationItems"))
  {
    Aws::Utils::Array<JsonView> baseConfigurationItemsJsonList = jsonValue.GetArray("BaseConfigurationItems");
    for(unsigned baseConfigurationItemsIndex = 0; baseConfigurationItemsIndex < baseConfigurationItemsJsonList.GetLength(); ++baseConfigurationItemsIndex)
    {
      m_baseConfigurationItems.push_back(baseConfigurationItemsJsonList[baseConfigurationItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedResourceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> unprocessedResourceIdentifiersJsonList = jsonValue.GetArray("UnprocessedResourceIdentifiers");
    for(unsigned unprocessedResourceIdentifiersIndex = 0; unprocessedResourceIdentifiersIndex < unprocessedResourceIdentifiersJsonList.GetLength(); ++unprocessedResourceIdentifiersIndex)
    {
      m_unprocessedResourceIdentifiers.push_back(unprocessedResourceIdentifiersJsonList[unprocessedResourceIdentifiersIndex].AsObject());
    }
  }



  return *this;
}
