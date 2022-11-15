/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListAuditMitigationActionsExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAuditMitigationActionsExecutionsResult::ListAuditMitigationActionsExecutionsResult()
{
}

ListAuditMitigationActionsExecutionsResult::ListAuditMitigationActionsExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAuditMitigationActionsExecutionsResult& ListAuditMitigationActionsExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionsExecutions"))
  {
    Aws::Utils::Array<JsonView> actionsExecutionsJsonList = jsonValue.GetArray("actionsExecutions");
    for(unsigned actionsExecutionsIndex = 0; actionsExecutionsIndex < actionsExecutionsJsonList.GetLength(); ++actionsExecutionsIndex)
    {
      m_actionsExecutions.push_back(actionsExecutionsJsonList[actionsExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
