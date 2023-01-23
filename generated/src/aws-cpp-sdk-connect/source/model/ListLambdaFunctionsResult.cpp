/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListLambdaFunctionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLambdaFunctionsResult::ListLambdaFunctionsResult()
{
}

ListLambdaFunctionsResult::ListLambdaFunctionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLambdaFunctionsResult& ListLambdaFunctionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LambdaFunctions"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionsJsonList = jsonValue.GetArray("LambdaFunctions");
    for(unsigned lambdaFunctionsIndex = 0; lambdaFunctionsIndex < lambdaFunctionsJsonList.GetLength(); ++lambdaFunctionsIndex)
    {
      m_lambdaFunctions.push_back(lambdaFunctionsJsonList[lambdaFunctionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
