/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/GetTestSuiteResult.h>
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

GetTestSuiteResult::GetTestSuiteResult() : 
    m_testSuiteVersion(0),
    m_status(TestSuiteLifecycle::NOT_SET)
{
}

GetTestSuiteResult::GetTestSuiteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTestSuiteResult()
{
  *this = result;
}

GetTestSuiteResult& GetTestSuiteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSuiteId"))
  {
    m_testSuiteId = jsonValue.GetString("testSuiteId");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetObject("latestVersion");

  }

  if(jsonValue.ValueExists("testSuiteVersion"))
  {
    m_testSuiteVersion = jsonValue.GetInteger("testSuiteVersion");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TestSuiteLifecycleMapper::GetTestSuiteLifecycleForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("testSuiteArn"))
  {
    m_testSuiteArn = jsonValue.GetString("testSuiteArn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("beforeSteps"))
  {
    Aws::Utils::Array<JsonView> beforeStepsJsonList = jsonValue.GetArray("beforeSteps");
    for(unsigned beforeStepsIndex = 0; beforeStepsIndex < beforeStepsJsonList.GetLength(); ++beforeStepsIndex)
    {
      m_beforeSteps.push_back(beforeStepsJsonList[beforeStepsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("afterSteps"))
  {
    Aws::Utils::Array<JsonView> afterStepsJsonList = jsonValue.GetArray("afterSteps");
    for(unsigned afterStepsIndex = 0; afterStepsIndex < afterStepsJsonList.GetLength(); ++afterStepsIndex)
    {
      m_afterSteps.push_back(afterStepsJsonList[afterStepsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("testCases"))
  {
    m_testCases = jsonValue.GetObject("testCases");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
