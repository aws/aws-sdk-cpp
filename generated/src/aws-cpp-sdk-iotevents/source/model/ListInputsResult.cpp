/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListInputsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInputsResult::ListInputsResult()
{
}

ListInputsResult::ListInputsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInputsResult& ListInputsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("inputSummaries"))
  {
    Aws::Utils::Array<JsonView> inputSummariesJsonList = jsonValue.GetArray("inputSummaries");
    for(unsigned inputSummariesIndex = 0; inputSummariesIndex < inputSummariesJsonList.GetLength(); ++inputSummariesIndex)
    {
      m_inputSummaries.push_back(inputSummariesJsonList[inputSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
