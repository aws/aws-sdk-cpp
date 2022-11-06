/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppInstanceUserEndpointsResult::ListAppInstanceUserEndpointsResult()
{
}

ListAppInstanceUserEndpointsResult::ListAppInstanceUserEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppInstanceUserEndpointsResult& ListAppInstanceUserEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceUserEndpoints"))
  {
    Aws::Utils::Array<JsonView> appInstanceUserEndpointsJsonList = jsonValue.GetArray("AppInstanceUserEndpoints");
    for(unsigned appInstanceUserEndpointsIndex = 0; appInstanceUserEndpointsIndex < appInstanceUserEndpointsJsonList.GetLength(); ++appInstanceUserEndpointsIndex)
    {
      m_appInstanceUserEndpoints.push_back(appInstanceUserEndpointsJsonList[appInstanceUserEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
