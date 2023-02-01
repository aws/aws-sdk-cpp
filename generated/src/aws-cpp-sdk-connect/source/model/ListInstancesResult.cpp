/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstancesResult::ListInstancesResult()
{
}

ListInstancesResult::ListInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstancesResult& ListInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceSummaryList"))
  {
    Aws::Utils::Array<JsonView> instanceSummaryListJsonList = jsonValue.GetArray("InstanceSummaryList");
    for(unsigned instanceSummaryListIndex = 0; instanceSummaryListIndex < instanceSummaryListJsonList.GetLength(); ++instanceSummaryListIndex)
    {
      m_instanceSummaryList.push_back(instanceSummaryListJsonList[instanceSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
