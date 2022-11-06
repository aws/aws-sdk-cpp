/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ListSigningPlatformsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSigningPlatformsResult::ListSigningPlatformsResult()
{
}

ListSigningPlatformsResult::ListSigningPlatformsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSigningPlatformsResult& ListSigningPlatformsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("platforms"))
  {
    Aws::Utils::Array<JsonView> platformsJsonList = jsonValue.GetArray("platforms");
    for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
    {
      m_platforms.push_back(platformsJsonList[platformsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
