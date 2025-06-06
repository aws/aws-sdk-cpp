﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetDevEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDevEndpointsResult::BatchGetDevEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDevEndpointsResult& BatchGetDevEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DevEndpoints"))
  {
    Aws::Utils::Array<JsonView> devEndpointsJsonList = jsonValue.GetArray("DevEndpoints");
    for(unsigned devEndpointsIndex = 0; devEndpointsIndex < devEndpointsJsonList.GetLength(); ++devEndpointsIndex)
    {
      m_devEndpoints.push_back(devEndpointsJsonList[devEndpointsIndex].AsObject());
    }
    m_devEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DevEndpointsNotFound"))
  {
    Aws::Utils::Array<JsonView> devEndpointsNotFoundJsonList = jsonValue.GetArray("DevEndpointsNotFound");
    for(unsigned devEndpointsNotFoundIndex = 0; devEndpointsNotFoundIndex < devEndpointsNotFoundJsonList.GetLength(); ++devEndpointsNotFoundIndex)
    {
      m_devEndpointsNotFound.push_back(devEndpointsNotFoundJsonList[devEndpointsNotFoundIndex].AsString());
    }
    m_devEndpointsNotFoundHasBeenSet = true;
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
