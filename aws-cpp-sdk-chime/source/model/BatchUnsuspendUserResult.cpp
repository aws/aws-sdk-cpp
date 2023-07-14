﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/BatchUnsuspendUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUnsuspendUserResult::BatchUnsuspendUserResult()
{
}

BatchUnsuspendUserResult::BatchUnsuspendUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUnsuspendUserResult& BatchUnsuspendUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserErrors"))
  {
    Array<JsonView> userErrorsJsonList = jsonValue.GetArray("UserErrors");
    for(unsigned userErrorsIndex = 0; userErrorsIndex < userErrorsJsonList.GetLength(); ++userErrorsIndex)
    {
      m_userErrors.push_back(userErrorsJsonList[userErrorsIndex].AsObject());
    }
  }



  return *this;
}
