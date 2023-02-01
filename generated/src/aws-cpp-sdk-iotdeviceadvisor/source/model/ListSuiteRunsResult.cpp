/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/ListSuiteRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSuiteRunsResult::ListSuiteRunsResult()
{
}

ListSuiteRunsResult::ListSuiteRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSuiteRunsResult& ListSuiteRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suiteRunsList"))
  {
    Aws::Utils::Array<JsonView> suiteRunsListJsonList = jsonValue.GetArray("suiteRunsList");
    for(unsigned suiteRunsListIndex = 0; suiteRunsListIndex < suiteRunsListJsonList.GetLength(); ++suiteRunsListIndex)
    {
      m_suiteRunsList.push_back(suiteRunsListJsonList[suiteRunsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
