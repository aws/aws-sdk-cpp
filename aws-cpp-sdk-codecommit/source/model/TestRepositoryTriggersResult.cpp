﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/TestRepositoryTriggersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestRepositoryTriggersResult::TestRepositoryTriggersResult()
{
}

TestRepositoryTriggersResult::TestRepositoryTriggersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestRepositoryTriggersResult& TestRepositoryTriggersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("successfulExecutions"))
  {
    Array<JsonView> successfulExecutionsJsonList = jsonValue.GetArray("successfulExecutions");
    for(unsigned successfulExecutionsIndex = 0; successfulExecutionsIndex < successfulExecutionsJsonList.GetLength(); ++successfulExecutionsIndex)
    {
      m_successfulExecutions.push_back(successfulExecutionsJsonList[successfulExecutionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("failedExecutions"))
  {
    Array<JsonView> failedExecutionsJsonList = jsonValue.GetArray("failedExecutions");
    for(unsigned failedExecutionsIndex = 0; failedExecutionsIndex < failedExecutionsJsonList.GetLength(); ++failedExecutionsIndex)
    {
      m_failedExecutions.push_back(failedExecutionsJsonList[failedExecutionsIndex].AsObject());
    }
  }



  return *this;
}
