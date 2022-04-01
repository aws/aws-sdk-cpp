/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GetVaultLockResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVaultLockResult::GetVaultLockResult()
{
}

GetVaultLockResult::GetVaultLockResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetVaultLockResult& GetVaultLockResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

  }



  return *this;
}
