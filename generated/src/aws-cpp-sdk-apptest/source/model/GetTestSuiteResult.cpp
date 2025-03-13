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

GetTestSuiteResult::GetTestSuiteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTestSuiteResult& GetTestSuiteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testSuiteId"))
  {
    m_testSuiteId = jsonValue.GetString("testSuiteId");
    m_testSuiteIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetObject("latestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSuiteVersion"))
  {
    m_testSuiteVersion = jsonValue.GetInteger("testSuiteVersion");
    m_testSuiteVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestSuiteLifecycleMapper::GetTestSuiteLifecycleForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testSuiteArn"))
  {
    m_testSuiteArn = jsonValue.GetString("testSuiteArn");
    m_testSuiteArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("beforeSteps"))
  {
    Aws::Utils::Array<JsonView> beforeStepsJsonList = jsonValue.GetArray("beforeSteps");
    for(unsigned beforeStepsIndex = 0; beforeStepsIndex < beforeStepsJsonList.GetLength(); ++beforeStepsIndex)
    {
      m_beforeSteps.push_back(beforeStepsJsonList[beforeStepsIndex].AsObject());
    }
    m_beforeStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("afterSteps"))
  {
    Aws::Utils::Array<JsonView> afterStepsJsonList = jsonValue.GetArray("afterSteps");
    for(unsigned afterStepsIndex = 0; afterStepsIndex < afterStepsJsonList.GetLength(); ++afterStepsIndex)
    {
      m_afterSteps.push_back(afterStepsJsonList[afterStepsIndex].AsObject());
    }
    m_afterStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testCases"))
  {
    m_testCases = jsonValue.GetObject("testCases");
    m_testCasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
