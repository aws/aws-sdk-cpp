/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListCalculationExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCalculationExecutionsResult::ListCalculationExecutionsResult()
{
}

ListCalculationExecutionsResult::ListCalculationExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCalculationExecutionsResult& ListCalculationExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Calculations"))
  {
    Aws::Utils::Array<JsonView> calculationsJsonList = jsonValue.GetArray("Calculations");
    for(unsigned calculationsIndex = 0; calculationsIndex < calculationsJsonList.GetLength(); ++calculationsIndex)
    {
      m_calculations.push_back(calculationsJsonList[calculationsIndex].AsObject());
    }
  }



  return *this;
}
