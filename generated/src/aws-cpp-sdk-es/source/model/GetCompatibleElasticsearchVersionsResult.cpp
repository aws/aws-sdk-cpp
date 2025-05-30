﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/GetCompatibleElasticsearchVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCompatibleElasticsearchVersionsResult::GetCompatibleElasticsearchVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCompatibleElasticsearchVersionsResult& GetCompatibleElasticsearchVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CompatibleElasticsearchVersions"))
  {
    Aws::Utils::Array<JsonView> compatibleElasticsearchVersionsJsonList = jsonValue.GetArray("CompatibleElasticsearchVersions");
    for(unsigned compatibleElasticsearchVersionsIndex = 0; compatibleElasticsearchVersionsIndex < compatibleElasticsearchVersionsJsonList.GetLength(); ++compatibleElasticsearchVersionsIndex)
    {
      m_compatibleElasticsearchVersions.push_back(compatibleElasticsearchVersionsJsonList[compatibleElasticsearchVersionsIndex].AsObject());
    }
    m_compatibleElasticsearchVersionsHasBeenSet = true;
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
