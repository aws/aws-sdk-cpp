﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/BatchGetResourceConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetResourceConfigResult::BatchGetResourceConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetResourceConfigResult& BatchGetResourceConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("baseConfigurationItems"))
  {
    Aws::Utils::Array<JsonView> baseConfigurationItemsJsonList = jsonValue.GetArray("baseConfigurationItems");
    for(unsigned baseConfigurationItemsIndex = 0; baseConfigurationItemsIndex < baseConfigurationItemsJsonList.GetLength(); ++baseConfigurationItemsIndex)
    {
      m_baseConfigurationItems.push_back(baseConfigurationItemsJsonList[baseConfigurationItemsIndex].AsObject());
    }
    m_baseConfigurationItemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unprocessedResourceKeys"))
  {
    Aws::Utils::Array<JsonView> unprocessedResourceKeysJsonList = jsonValue.GetArray("unprocessedResourceKeys");
    for(unsigned unprocessedResourceKeysIndex = 0; unprocessedResourceKeysIndex < unprocessedResourceKeysJsonList.GetLength(); ++unprocessedResourceKeysIndex)
    {
      m_unprocessedResourceKeys.push_back(unprocessedResourceKeysJsonList[unprocessedResourceKeysIndex].AsObject());
    }
    m_unprocessedResourceKeysHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
