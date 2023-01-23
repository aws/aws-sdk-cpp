/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ListActionExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListActionExecutionsResult::ListActionExecutionsResult()
{
}

ListActionExecutionsResult::ListActionExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListActionExecutionsResult& ListActionExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionExecutionDetails"))
  {
    Aws::Utils::Array<JsonView> actionExecutionDetailsJsonList = jsonValue.GetArray("actionExecutionDetails");
    for(unsigned actionExecutionDetailsIndex = 0; actionExecutionDetailsIndex < actionExecutionDetailsJsonList.GetLength(); ++actionExecutionDetailsIndex)
    {
      m_actionExecutionDetails.push_back(actionExecutionDetailsJsonList[actionExecutionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
