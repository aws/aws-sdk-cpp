/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListApplicationStatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationStatesResult::ListApplicationStatesResult()
{
}

ListApplicationStatesResult::ListApplicationStatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationStatesResult& ListApplicationStatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationStateList"))
  {
    Aws::Utils::Array<JsonView> applicationStateListJsonList = jsonValue.GetArray("ApplicationStateList");
    for(unsigned applicationStateListIndex = 0; applicationStateListIndex < applicationStateListJsonList.GetLength(); ++applicationStateListIndex)
    {
      m_applicationStateList.push_back(applicationStateListJsonList[applicationStateListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
