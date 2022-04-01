/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetConnectionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionStatusResult::GetConnectionStatusResult() : 
    m_status(ConnectionStatus::NOT_SET)
{
}

GetConnectionStatusResult::GetConnectionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ConnectionStatus::NOT_SET)
{
  *this = result;
}

GetConnectionStatusResult& GetConnectionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
