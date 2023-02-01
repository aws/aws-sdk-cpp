/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListPublicKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPublicKeysResult::ListPublicKeysResult()
{
}

ListPublicKeysResult::ListPublicKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPublicKeysResult& ListPublicKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PublicKeyList"))
  {
    Aws::Utils::Array<JsonView> publicKeyListJsonList = jsonValue.GetArray("PublicKeyList");
    for(unsigned publicKeyListIndex = 0; publicKeyListIndex < publicKeyListJsonList.GetLength(); ++publicKeyListIndex)
    {
      m_publicKeyList.push_back(publicKeyListJsonList[publicKeyListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
