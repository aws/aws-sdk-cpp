﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ListStateMachinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStateMachinesResult::ListStateMachinesResult()
{
}

ListStateMachinesResult::ListStateMachinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStateMachinesResult& ListStateMachinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stateMachines"))
  {
    Array<JsonView> stateMachinesJsonList = jsonValue.GetArray("stateMachines");
    for(unsigned stateMachinesIndex = 0; stateMachinesIndex < stateMachinesJsonList.GetLength(); ++stateMachinesIndex)
    {
      m_stateMachines.push_back(stateMachinesJsonList[stateMachinesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
