/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListAuditSuppressionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAuditSuppressionsResult::ListAuditSuppressionsResult()
{
}

ListAuditSuppressionsResult::ListAuditSuppressionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAuditSuppressionsResult& ListAuditSuppressionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("suppressions"))
  {
    Aws::Utils::Array<JsonView> suppressionsJsonList = jsonValue.GetArray("suppressions");
    for(unsigned suppressionsIndex = 0; suppressionsIndex < suppressionsJsonList.GetLength(); ++suppressionsIndex)
    {
      m_suppressions.push_back(suppressionsJsonList[suppressionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
