/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerServicePowersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContainerServicePowersResult::GetContainerServicePowersResult()
{
}

GetContainerServicePowersResult::GetContainerServicePowersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContainerServicePowersResult& GetContainerServicePowersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("powers"))
  {
    Aws::Utils::Array<JsonView> powersJsonList = jsonValue.GetArray("powers");
    for(unsigned powersIndex = 0; powersIndex < powersJsonList.GetLength(); ++powersIndex)
    {
      m_powers.push_back(powersJsonList[powersIndex].AsObject());
    }
  }



  return *this;
}
