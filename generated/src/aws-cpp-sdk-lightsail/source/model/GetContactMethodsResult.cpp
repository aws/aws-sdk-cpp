﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContactMethodsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContactMethodsResult::GetContactMethodsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContactMethodsResult& GetContactMethodsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactMethods"))
  {
    Aws::Utils::Array<JsonView> contactMethodsJsonList = jsonValue.GetArray("contactMethods");
    for(unsigned contactMethodsIndex = 0; contactMethodsIndex < contactMethodsJsonList.GetLength(); ++contactMethodsIndex)
    {
      m_contactMethods.push_back(contactMethodsJsonList[contactMethodsIndex].AsObject());
    }
    m_contactMethodsHasBeenSet = true;
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
