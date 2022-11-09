/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListActiveViolationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListActiveViolationsResult::ListActiveViolationsResult()
{
}

ListActiveViolationsResult::ListActiveViolationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListActiveViolationsResult& ListActiveViolationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("activeViolations"))
  {
    Aws::Utils::Array<JsonView> activeViolationsJsonList = jsonValue.GetArray("activeViolations");
    for(unsigned activeViolationsIndex = 0; activeViolationsIndex < activeViolationsJsonList.GetLength(); ++activeViolationsIndex)
    {
      m_activeViolations.push_back(activeViolationsJsonList[activeViolationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
