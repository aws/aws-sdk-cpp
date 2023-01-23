/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetKeyPairsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKeyPairsResult::GetKeyPairsResult()
{
}

GetKeyPairsResult::GetKeyPairsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKeyPairsResult& GetKeyPairsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");

  }



  return *this;
}
