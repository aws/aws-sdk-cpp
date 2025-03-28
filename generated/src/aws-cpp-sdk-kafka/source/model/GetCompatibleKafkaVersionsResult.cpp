﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/GetCompatibleKafkaVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCompatibleKafkaVersionsResult::GetCompatibleKafkaVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCompatibleKafkaVersionsResult& GetCompatibleKafkaVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("compatibleKafkaVersions"))
  {
    Aws::Utils::Array<JsonView> compatibleKafkaVersionsJsonList = jsonValue.GetArray("compatibleKafkaVersions");
    for(unsigned compatibleKafkaVersionsIndex = 0; compatibleKafkaVersionsIndex < compatibleKafkaVersionsJsonList.GetLength(); ++compatibleKafkaVersionsIndex)
    {
      m_compatibleKafkaVersions.push_back(compatibleKafkaVersionsJsonList[compatibleKafkaVersionsIndex].AsObject());
    }
    m_compatibleKafkaVersionsHasBeenSet = true;
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
