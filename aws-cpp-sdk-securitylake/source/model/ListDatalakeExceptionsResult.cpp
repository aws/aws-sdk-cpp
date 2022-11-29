/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListDatalakeExceptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatalakeExceptionsResult::ListDatalakeExceptionsResult()
{
}

ListDatalakeExceptionsResult::ListDatalakeExceptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatalakeExceptionsResult& ListDatalakeExceptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("nonRetryableFailures"))
  {
    Aws::Utils::Array<JsonView> nonRetryableFailuresJsonList = jsonValue.GetArray("nonRetryableFailures");
    for(unsigned nonRetryableFailuresIndex = 0; nonRetryableFailuresIndex < nonRetryableFailuresJsonList.GetLength(); ++nonRetryableFailuresIndex)
    {
      m_nonRetryableFailures.push_back(nonRetryableFailuresJsonList[nonRetryableFailuresIndex].AsObject());
    }
  }



  return *this;
}
