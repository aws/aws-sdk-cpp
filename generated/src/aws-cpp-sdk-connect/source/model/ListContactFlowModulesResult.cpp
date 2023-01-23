/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactFlowModulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactFlowModulesResult::ListContactFlowModulesResult()
{
}

ListContactFlowModulesResult::ListContactFlowModulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactFlowModulesResult& ListContactFlowModulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactFlowModulesSummaryList"))
  {
    Aws::Utils::Array<JsonView> contactFlowModulesSummaryListJsonList = jsonValue.GetArray("ContactFlowModulesSummaryList");
    for(unsigned contactFlowModulesSummaryListIndex = 0; contactFlowModulesSummaryListIndex < contactFlowModulesSummaryListJsonList.GetLength(); ++contactFlowModulesSummaryListIndex)
    {
      m_contactFlowModulesSummaryList.push_back(contactFlowModulesSummaryListJsonList[contactFlowModulesSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
