﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetCurrentUserDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCurrentUserDataResult::GetCurrentUserDataResult()
{
}

GetCurrentUserDataResult::GetCurrentUserDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCurrentUserDataResult& GetCurrentUserDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("UserDataList"))
  {
    Aws::Utils::Array<JsonView> userDataListJsonList = jsonValue.GetArray("UserDataList");
    for(unsigned userDataListIndex = 0; userDataListIndex < userDataListJsonList.GetLength(); ++userDataListIndex)
    {
      m_userDataList.push_back(userDataListJsonList[userDataListIndex].AsObject());
    }
  }



  return *this;
}
