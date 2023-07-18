﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateQuickConnectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateQuickConnectResult::CreateQuickConnectResult()
{
}

CreateQuickConnectResult::CreateQuickConnectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateQuickConnectResult& CreateQuickConnectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QuickConnectARN"))
  {
    m_quickConnectARN = jsonValue.GetString("QuickConnectARN");

  }

  if(jsonValue.ValueExists("QuickConnectId"))
  {
    m_quickConnectId = jsonValue.GetString("QuickConnectId");

  }



  return *this;
}
