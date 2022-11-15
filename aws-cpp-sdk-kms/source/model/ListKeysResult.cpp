/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ListKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKeysResult::ListKeysResult() : 
    m_truncated(false)
{
}

ListKeysResult::ListKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_truncated(false)
{
  *this = result;
}

ListKeysResult& ListKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Utils::Array<JsonView> keysJsonList = jsonValue.GetArray("Keys");
    for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
    {
      m_keys.push_back(keysJsonList[keysIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("Truncated"))
  {
    m_truncated = jsonValue.GetBool("Truncated");

  }



  return *this;
}
