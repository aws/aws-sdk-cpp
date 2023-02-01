/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListTestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestsResult::ListTestsResult()
{
}

ListTestsResult::ListTestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTestsResult& ListTestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tests"))
  {
    Aws::Utils::Array<JsonView> testsJsonList = jsonValue.GetArray("tests");
    for(unsigned testsIndex = 0; testsIndex < testsJsonList.GetLength(); ++testsIndex)
    {
      m_tests.push_back(testsJsonList[testsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
