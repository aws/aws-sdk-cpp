/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ListLoggerDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLoggerDefinitionsResult::ListLoggerDefinitionsResult()
{
}

ListLoggerDefinitionsResult::ListLoggerDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLoggerDefinitionsResult& ListLoggerDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Definitions"))
  {
    Aws::Utils::Array<JsonView> definitionsJsonList = jsonValue.GetArray("Definitions");
    for(unsigned definitionsIndex = 0; definitionsIndex < definitionsJsonList.GetLength(); ++definitionsIndex)
    {
      m_definitions.push_back(definitionsJsonList[definitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
