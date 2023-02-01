/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListAuthorizersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAuthorizersResult::ListAuthorizersResult()
{
}

ListAuthorizersResult::ListAuthorizersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAuthorizersResult& ListAuthorizersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorizers"))
  {
    Aws::Utils::Array<JsonView> authorizersJsonList = jsonValue.GetArray("authorizers");
    for(unsigned authorizersIndex = 0; authorizersIndex < authorizersJsonList.GetLength(); ++authorizersIndex)
    {
      m_authorizers.push_back(authorizersJsonList[authorizersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextMarker"))
  {
    m_nextMarker = jsonValue.GetString("nextMarker");

  }



  return *this;
}
