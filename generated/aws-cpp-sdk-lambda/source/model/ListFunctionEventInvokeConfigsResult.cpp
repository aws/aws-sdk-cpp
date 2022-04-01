﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/ListFunctionEventInvokeConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFunctionEventInvokeConfigsResult::ListFunctionEventInvokeConfigsResult()
{
}

ListFunctionEventInvokeConfigsResult::ListFunctionEventInvokeConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFunctionEventInvokeConfigsResult& ListFunctionEventInvokeConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FunctionEventInvokeConfigs"))
  {
    Array<JsonView> functionEventInvokeConfigsJsonList = jsonValue.GetArray("FunctionEventInvokeConfigs");
    for(unsigned functionEventInvokeConfigsIndex = 0; functionEventInvokeConfigsIndex < functionEventInvokeConfigsJsonList.GetLength(); ++functionEventInvokeConfigsIndex)
    {
      m_functionEventInvokeConfigs.push_back(functionEventInvokeConfigsJsonList[functionEventInvokeConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }



  return *this;
}
