﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeregisterAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeregisterAccountResult::DeregisterAccountResult() : 
    m_status(AccountStatus::NOT_SET)
{
}

DeregisterAccountResult::DeregisterAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AccountStatus::NOT_SET)
{
  *this = result;
}

DeregisterAccountResult& DeregisterAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = AccountStatusMapper::GetAccountStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
