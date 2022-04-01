﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartTaskContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartTaskContactResult::StartTaskContactResult()
{
}

StartTaskContactResult::StartTaskContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartTaskContactResult& StartTaskContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");

  }



  return *this;
}
