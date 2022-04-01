﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListAppInstanceAdminsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppInstanceAdminsResult::ListAppInstanceAdminsResult()
{
}

ListAppInstanceAdminsResult::ListAppInstanceAdminsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppInstanceAdminsResult& ListAppInstanceAdminsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceArn"))
  {
    m_appInstanceArn = jsonValue.GetString("AppInstanceArn");

  }

  if(jsonValue.ValueExists("AppInstanceAdmins"))
  {
    Array<JsonView> appInstanceAdminsJsonList = jsonValue.GetArray("AppInstanceAdmins");
    for(unsigned appInstanceAdminsIndex = 0; appInstanceAdminsIndex < appInstanceAdminsJsonList.GetLength(); ++appInstanceAdminsIndex)
    {
      m_appInstanceAdmins.push_back(appInstanceAdminsJsonList[appInstanceAdminsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
