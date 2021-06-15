/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetPreparedStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPreparedStatementResult::GetPreparedStatementResult()
{
}

GetPreparedStatementResult::GetPreparedStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPreparedStatementResult& GetPreparedStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PreparedStatement"))
  {
    m_preparedStatement = jsonValue.GetObject("PreparedStatement");

  }



  return *this;
}
