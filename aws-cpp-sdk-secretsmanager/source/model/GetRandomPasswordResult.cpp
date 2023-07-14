/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/GetRandomPasswordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRandomPasswordResult::GetRandomPasswordResult()
{
}

GetRandomPasswordResult::GetRandomPasswordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRandomPasswordResult& GetRandomPasswordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RandomPassword"))
  {
    m_randomPassword = jsonValue.GetString("RandomPassword");

  }



  return *this;
}
