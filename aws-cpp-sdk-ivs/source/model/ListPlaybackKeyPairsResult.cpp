/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListPlaybackKeyPairsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPlaybackKeyPairsResult::ListPlaybackKeyPairsResult()
{
}

ListPlaybackKeyPairsResult::ListPlaybackKeyPairsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPlaybackKeyPairsResult& ListPlaybackKeyPairsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyPairs"))
  {
    Aws::Utils::Array<JsonView> keyPairsJsonList = jsonValue.GetArray("keyPairs");
    for(unsigned keyPairsIndex = 0; keyPairsIndex < keyPairsJsonList.GetLength(); ++keyPairsIndex)
    {
      m_keyPairs.push_back(keyPairsJsonList[keyPairsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
