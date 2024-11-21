﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetTransformerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTransformerResult::GetTransformerResult() : 
    m_creationTime(0),
    m_lastModifiedTime(0)
{
}

GetTransformerResult::GetTransformerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTransformerResult()
{
  *this = result;
}

GetTransformerResult& GetTransformerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logGroupIdentifier"))
  {
    m_logGroupIdentifier = jsonValue.GetString("logGroupIdentifier");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

  }

  if(jsonValue.ValueExists("transformerConfig"))
  {
    Aws::Utils::Array<JsonView> transformerConfigJsonList = jsonValue.GetArray("transformerConfig");
    for(unsigned transformerConfigIndex = 0; transformerConfigIndex < transformerConfigJsonList.GetLength(); ++transformerConfigIndex)
    {
      m_transformerConfig.push_back(transformerConfigJsonList[transformerConfigIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
