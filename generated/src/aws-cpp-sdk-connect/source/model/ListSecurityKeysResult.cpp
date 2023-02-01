/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListSecurityKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityKeysResult::ListSecurityKeysResult()
{
}

ListSecurityKeysResult::ListSecurityKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityKeysResult& ListSecurityKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityKeys"))
  {
    Aws::Utils::Array<JsonView> securityKeysJsonList = jsonValue.GetArray("SecurityKeys");
    for(unsigned securityKeysIndex = 0; securityKeysIndex < securityKeysJsonList.GetLength(); ++securityKeysIndex)
    {
      m_securityKeys.push_back(securityKeysJsonList[securityKeysIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
