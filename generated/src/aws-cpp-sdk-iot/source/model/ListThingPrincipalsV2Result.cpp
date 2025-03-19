/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingPrincipalsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThingPrincipalsV2Result::ListThingPrincipalsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThingPrincipalsV2Result& ListThingPrincipalsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thingPrincipalObjects"))
  {
    Aws::Utils::Array<JsonView> thingPrincipalObjectsJsonList = jsonValue.GetArray("thingPrincipalObjects");
    for(unsigned thingPrincipalObjectsIndex = 0; thingPrincipalObjectsIndex < thingPrincipalObjectsJsonList.GetLength(); ++thingPrincipalObjectsIndex)
    {
      m_thingPrincipalObjects.push_back(thingPrincipalObjectsJsonList[thingPrincipalObjectsIndex].AsObject());
    }
    m_thingPrincipalObjectsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
