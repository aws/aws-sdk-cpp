/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/model/GetConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayManagementApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionResult::GetConnectionResult()
{
}

GetConnectionResult::GetConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectionResult& GetConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectedAt"))
  {
    m_connectedAt = jsonValue.GetString("connectedAt");

  }

  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetObject("identity");

  }

  if(jsonValue.ValueExists("lastActiveAt"))
  {
    m_lastActiveAt = jsonValue.GetString("lastActiveAt");

  }



  return *this;
}
