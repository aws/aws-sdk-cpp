﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/UpdateTestConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppTest::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateTestConfigurationResult::UpdateTestConfigurationResult() : 
    m_testConfigurationVersion(0)
{
}

UpdateTestConfigurationResult::UpdateTestConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateTestConfigurationResult()
{
  *this = result;
}

UpdateTestConfigurationResult& UpdateTestConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testConfigurationId"))
  {
    m_testConfigurationId = jsonValue.GetString("testConfigurationId");

  }

  if(jsonValue.ValueExists("testConfigurationVersion"))
  {
    m_testConfigurationVersion = jsonValue.GetInteger("testConfigurationVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
