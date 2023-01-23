/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUserDefinedFunctionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUserDefinedFunctionsResult::GetUserDefinedFunctionsResult()
{
}

GetUserDefinedFunctionsResult::GetUserDefinedFunctionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUserDefinedFunctionsResult& GetUserDefinedFunctionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserDefinedFunctions"))
  {
    Aws::Utils::Array<JsonView> userDefinedFunctionsJsonList = jsonValue.GetArray("UserDefinedFunctions");
    for(unsigned userDefinedFunctionsIndex = 0; userDefinedFunctionsIndex < userDefinedFunctionsJsonList.GetLength(); ++userDefinedFunctionsIndex)
    {
      m_userDefinedFunctions.push_back(userDefinedFunctionsJsonList[userDefinedFunctionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
